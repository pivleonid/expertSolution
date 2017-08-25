#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  pix = new QPixmap;
  scen = new QGraphicsScene;

  QList <QLineEdit *> m_list;
  m_list = findChildren<QLineEdit *>();


  QRegExp rx( "[а-я]" );
  QValidator *validator = new QRegExpValidator(rx, this);

  foreach (auto i, m_list) {
      i->setEnabled(false);
      lableList << i;
      i->setValidator(validator);
      i->setAlignment(Qt::AlignHCenter);
    }

  expertTemplate << "а" << "б"<< "в" << "г"<< "д" << "е"<< "ж" \
                 << "з"<< "и" << "к"<< "л" << "м"<<  "н" << "о"\
                 << "п" << "р"<< "с" << "т"<< "у" << "ф"<< "х" \
                 << "ц"<< "ч" << "ш"<< "щ" << "ы"<< "ь" << "э"<< "ю" << "я";

  connect(ui->Expert1, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert2, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert3, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert4, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert5, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));

  connect(ui->buttonSave, SIGNAL(clicked(bool)), this, SLOT(buttonSaveSlot()));

  connect(ui->loadTest, SIGNAL(clicked(bool)), this, SLOT(loadTest()));

  connect (ui->originalButton, SIGNAL(clicked(bool)),this, SLOT(textFragment()));
  connect(ui->openImage, SIGNAL(clicked(bool)),this,SLOT(openImage()));



  ui->openImage->setToolTip("Открытие изображения чревато проведения нового эксперимента");
  ui->loadTest->setEnabled(false);
  ui->graphicsView->setScene(scen);
}

MainWindow::~MainWindow()
{
  delete ui;
  delete pix;
  delete scen;
}

void MainWindow::expertButton(){
}

void MainWindow::expertSolution(){
  QObject* obj = QObject::sender();
  QCheckBox* chBox = dynamic_cast<QCheckBox*> (obj);
  chBox->setEnabled(false);
  ui->buttonSave->setEnabled(true);
  foreach (auto i, lableList) {
      i->setEnabled(true);
      i->clear();
    }
  ui->lineEdit->setFocus();
  if(chBox == ui->Expert1) flagExpert_ = flag1;
  if(chBox == ui->Expert2) flagExpert_ = flag2;
  if(chBox == ui->Expert3) flagExpert_ = flag3;
  if(chBox == ui->Expert4) flagExpert_ = flag4;
  if(chBox == ui->Expert5) flagExpert_ = flag5;
}

void MainWindow::buttonSaveSlot(){
  //тут надо перебрать все клавишы
  ui->loadTest->setEnabled(true);
  switch (flagExpert_) {
    case flag1:
      foreach (auto w, lableList) {
          expert1 <<  w->text();
          w->setEnabled(false);
        }
      break;
    case flag2:
      foreach (auto w, lableList) {
          expert2 << w->text();
          w->setEnabled(false);
        }
      break;
    case flag3:
      foreach (auto w, lableList) {
          expert3 << w->text();
          w->setEnabled(false);
        }
      break;
    case flag4:
      foreach (auto w, lableList) {
          expert4 << w->text();
          w->setEnabled(false);
        }
      break;
    case flag5:
      foreach (auto w, lableList) {
          expert5 << w->text();
          w->setEnabled(false);
        }
      //Анализ всех результатов
      expertAnaliz();
      ui->buttonSave->setEnabled(false);
      break;
    default:
      return;

    }
 // expert_true = expert_true.toSet().toList();
}

void MainWindow::expertAnaliz(){
QMap<QString, int> symbols;
expert1 = expert1 + expert2 + expert3 + expert4 + expert5;
int count = 0;
//формирую словарь symbols. Сколько экспертов увидели одинаковые буквы
foreach (auto expertTemplate_i, expertTemplate) {
    count = 0;
    foreach (auto expert1_i, expert1) {
        if(expertTemplate_i == expert1_i)
          count++;
        symbols.insert(expertTemplate_i, count);
      }
  }
QMap<QString, int>::iterator symbols_i;
for (symbols_i = symbols.begin(); symbols_i != symbols.end(); ) {
    int k = symbols_i.value();
    if(k < 2){
        //symbols_i следующий элемент
        symbols_i = symbols.erase(symbols_i);
      }
    else symbols_i++;
  }
//в ключе хранятся символы, которые увидели эксперты
for (symbols_i = symbols.begin(); symbols_i != symbols.end(); symbols_i++) {
  expert_true << symbols_i.key();
  }

}

//отображение теста после экспертизы
void MainWindow::loadTest(){
  int number = ui->comboBox->currentText().toInt();
  QString  str;
  QFile file("Образцы.txt");
  if(file.open(QIODevice::ReadOnly |QIODevice::Text))
    {
      int count = 1;
      while (!file.atEnd())
        {
          QByteArray line = file.readLine();
          str = line.data();// <- прочитанная строка
          if(count == number)
            break;
          count++;
        }

    }
  else qDebug()<< "don't open file";
  int contStr = str.count();
  //удаление и замена не нужных символов
  str.remove(",");
  str.remove(".");
  str.remove(";");
  str.remove(":");
  str.replace(" ", "_");
  for(int j = 0; j < contStr; j++){
      for(int i = 0; i < expert_true.count(); i++){

          if(str[j] == expert_true[i]){ // i[0] QChar expert_true
              break;
            }
           if(i == expert_true.count()-1){
              str[j] = '_';
            }

        }
    }
// отображение текста
  scen->clear();
  double contStr_d = (double)contStr/100;
  contStr_d = ceil(contStr_d);
  int strCont = (int)contStr_d;
  QString string[strCont];
  QString stringText;
  for(int i = 0; i < strCont; i++){
    string[i] = str.mid(i * 100, 100);
    string[i] = string[i] + "\n";
    stringText = stringText + string[i];
    }
  scen->setSceneRect(0, -300, ui->graphicsView->width()-10, ui->graphicsView->height()-10);
  QFont f;
  f.setPointSize(15);
  scen->addText(stringText, f);

}

//отображение фрагмента текса на экране
void MainWindow::textFragment(){
  int number = ui->comboBox->currentText().toInt();
  QString  str;
  QFile file("Образцы.txt");
  if(file.open(QIODevice::ReadOnly |QIODevice::Text))
    {
      int count = 1;
      while (!file.atEnd())
        {
          QByteArray line = file.readLine();
          str = line.data();// <- прочитанная строка
          if(count == number)
            break;
          count++;
        }

    }
  else qDebug()<< "don't open file";
  int contStr = str.count();
  scen->clear();
  //дроблю строку на строки по 100 символов
  double contStr_d = (double)contStr/100;
  contStr_d = ceil(contStr_d);
  int strCont = (int)contStr_d;
  QString string[strCont];
  QString stringText;
  for(int i = 0; i < strCont; i++){
    string[i] = str.mid(i * 100, 100);
    string[i] = string[i] + "\n";
    stringText = stringText + string[i];
    }
  //место отображения текста на экране
  scen->setSceneRect(0, -300, ui->graphicsView->width()-10, ui->graphicsView->height()-10);
  QFont f; //размер шрифта
  f.setPointSize(15);
  scen->addText(stringText, f);
}


void MainWindow::openImage(){
  QString fileName_DATA = QFileDialog::getOpenFileName(this, tr("Open File"));
  QFile file(fileName_DATA);
  if (!file.open(QIODevice::ReadOnly)) {
  qDebug()<<"Error open image";
  return;
  }
  scen->clear();
  pix->load(fileName_DATA);
  scen->addPixmap(*pix);

  //Удаление всех элементов
  expert1.clear();
  expert2.clear();
  expert3.clear();
  expert4.clear();
  expert5.clear();
  expert_true.clear();
  //кнопки в исходное состояние
  ui->Expert1->setEnabled(true);
  ui->Expert1->setChecked(false);
  ui->Expert2->setEnabled(true);
  ui->Expert2->setChecked(false);
  ui->Expert3->setEnabled(true);
  ui->Expert3->setChecked(false);
  ui->Expert4->setEnabled(true);
  ui->Expert4->setChecked(false);
  ui->Expert5->setEnabled(true);
  ui->Expert5->setChecked(false);
  ui->buttonSave->setEnabled(true);
  ui->loadTest->setEnabled(false);
}


