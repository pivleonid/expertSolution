#include "mainwindow.h"
#include "ui_mainwindow.h"



MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  pix = new QPixmap;
  scen = new QGraphicsScene;

  pix->load("12.jpg");
  scen->addPixmap(*pix);



  ui->graphicsView->setScene(scen);


  QList <QLineEdit *> m_list;
   m_list = findChildren<QLineEdit *>();

  foreach (auto i, m_list) {
      i->setEnabled(false);
      lableList << i;
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

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::expertButton(){

//  QObject* obj = QObject::sender();
//  QPushButton* button = dynamic_cast<QPushButton*> (obj);
//  button->setEnabled(false);
//  QString buttonText = button->text();
//  switch (flagExpert_) {
//    case flag1:
//      expert1.removeAt(expert1.indexOf(buttonText));
//      break;
//    case flag2:
//      expert2.removeAt(expert2.indexOf(buttonText));
//      break;
//    case flag3:
//      expert3.removeAt(expert3.indexOf(buttonText));
//      break;
//    case flag4:
//      expert4.removeAt(expert4.indexOf(buttonText));
//      break;
//    case flag5:
//      expert5.removeAt(expert5.indexOf(buttonText));
//      break;
//    default:
//      return;
    }



//}
//вызывается по нажатию на чекбоксы
void MainWindow::expertSolution(){



  QObject* obj = QObject::sender();
  QCheckBox* chBox = dynamic_cast<QCheckBox*> (obj);
  chBox->setEnabled(false);
  ui->buttonSave->setEnabled(true);

  foreach (auto i, lableList) {
      i->setEnabled(true);
     /// i->clear(); ВЕРНУТЬ
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
  //list
  switch (flagExpert_) {
    case flag1:
      foreach (auto w, lableList) {
          expert1 <<  w->text();
        }
      break;
    case flag2:
      foreach (auto w, lableList) {
          expert2 << w->text();
        }
      break;
    case flag3:
      foreach (auto w, lableList) {
          expert3 << w->text();
        }
      break;
    case flag4:
      foreach (auto w, lableList) {
          expert4 << w->text();
        }
      break;
    case flag5:
      foreach (auto w, lableList) {
          expert5 << w->text();
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
for (symbols_i = symbols.begin(); symbols_i != symbols.end(); symbols_i++) {
    int k = symbols_i.value();
    if(k < 3){
//удаляет элемент и возвращает итератор на следующий
        symbols_i = symbols.erase(symbols_i);
        symbols_i--;
      }
  }
for (symbols_i = symbols.begin(); symbols_i != symbols.end(); symbols_i++) {
  expert_true << symbols_i.key();
  }

}

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

  for(int j = 0; j < contStr; j++){

      //foreach (auto i, expert_true) {
      for(int i = 0; i < expert_true.count(); i++){
          if(str[j] == ' ' || str[j] == ','|| str[j] == '.'
             || str[j] == ';'|| str[j] == ':'  ) break;
          if(str[j] == expert_true[i]){ // i[0] QChar expert_true
           break;
            }
           if(i == expert_true.count()-1){
              str[j] = '_';
            }

        }
    }

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
