#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <qt_windows.h>
#include <QTextCodec>


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  //устанавливаю тестовый кодек
  QTextCodec *codec = QTextCodec::codecForName("CP1251");
  QTextCodec::setCodecForLocale(codec);

  pix = new QPixmap;
  scen = new QGraphicsScene;


  m_list = findChildren<QLineEdit *>();


  //QRegExp rx( "[а-я]" );
  QRegExp rx( "[0-9A-Za-zА-Яа-я-]" );
  QValidator *validator = new QRegExpValidator(rx, this);

  label_N = new QMap<QString, bool>;
  foreach (auto i, m_list) {
      i->setEnabled(false);
      connect(i, SIGNAL(textChanged(QString)), this, SLOT(nextTab()));
      lableList << i;
      i->setValidator(validator);
      i->setAlignment(Qt::AlignHCenter);
      label_N->insert(i->objectName(), false);

    }



  connect(ui->Expert1, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert2, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert3, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert4, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));
  connect(ui->Expert5, SIGNAL(clicked(bool)), this, SLOT(expertSolution()));

  connect(ui->buttonSave, SIGNAL(clicked(bool)), this, SLOT(buttonSaveSlot()));

  connect(ui->loadTest, SIGNAL(clicked(bool)), this, SLOT(loadTest()));

  connect (ui->originalButton, SIGNAL(clicked(bool)),this, SLOT(textFragment()));
  connect(ui->openImage, SIGNAL(clicked(bool)),this,SLOT(openImage()));


 //connect(ui->centralWidget,SIGNAL())

  ui->openImage->setToolTip("Открытие изображения чревато проведения нового эксперимента");
  ui->loadTest->setEnabled(false);
  ui->graphicsView->setScene(scen);

  ui->Expert1->setEnabled(false);
  ui->Expert2->setEnabled(false);
  ui->Expert3->setEnabled(false);
  ui->Expert4->setEnabled(false);
  ui->Expert5->setEnabled(false);

  ui->buttonSave->setEnabled(false);
  ui->loadTest->setEnabled(false);

  ui->label_Text->hide();

}

void MainWindow::nextTab(){

  //по нажатю кнопки сохранить из полей удаляются символы
  //и вызывается эта функция


  QObject* obj = QObject::sender();
  QLineEdit* line = dynamic_cast<QLineEdit*> (obj);
  QString lineName = line->objectName();
  QMap<QString, bool>::iterator iter;
  QStringList labelFlagTrue;// = expert_true.toSet().toList();
  if(line->text() == " " || line->text() == ""){
      for (iter = label_N->begin();iter != label_N->end(); iter++) {

          if(iter.key() == lineName)
            iter.value() = false;
        }
    }

  //ежели символ не пропущен
  else{
      for (iter = label_N->begin();iter != label_N->end(); iter++) {

          if(iter.key() == lineName)
            iter.value() = true;

        }
    }
  for (iter = label_N->begin();iter != label_N->end(); iter++) {
      labelFlagTrue << QString(iter.value());
    }
  labelFlagTrue= labelFlagTrue.toSet().toList();
  //если эксперт вбил значения во все поля
  if (labelFlagTrue.count() == 1 && labelFlagTrue[0] == true){
      ui->buttonSave->setEnabled(true);
      //обнуление
      for (iter = label_N->begin();iter != label_N->end(); iter++)
        iter.value() = false;
    }

  QLineEdit* ckick;
  for(QList <QLineEdit *>::iterator i = m_list.begin(); i < m_list.end() - 1; i++){
      if(*i == line){
          i++;
          ckick = *i;
          ckick->setFocus();
          break;
        }
    }

  //QTest::keyClick(this, Qt::Key_Tab); //нажатие клавиши Tab


}

MainWindow::~MainWindow()
{
  delete label_N;
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
  //ui->buttonSave->setEnabled(true);
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
  switch (flagExpert_) {
    case flag1:
      foreach (auto w, lableList) {
          expert1 <<  w->text();
          //запрет на изменение
          w->setEnabled(false);
          //стирание данных
          w->clear();

        }
      ui->Expert1->setEnabled(false);
      ui->Expert2->setEnabled(true);
      ui->buttonSave->setEnabled(false);
      break;
    case flag2:
      foreach (auto w, lableList) {
          expert2 << w->text();
          w->setEnabled(false);
          //стирание данных
          w->clear();
        }
      ui->Expert2->setEnabled(false);
      ui->Expert3->setEnabled(true);
      ui->buttonSave->setEnabled(false);
      break;
    case flag3:
      foreach (auto w, lableList) {
          expert3 << w->text();
          w->setEnabled(false);
          //стирание данных
          w->clear();
        }
      ui->Expert3->setEnabled(false);
      ui->Expert4->setEnabled(true);
      ui->buttonSave->setEnabled(false);
      break;
    case flag4:
      foreach (auto w, lableList) {
          expert4 << w->text();
          w->setEnabled(false);
          //стирание данных
          w->clear();
        }
      ui->Expert4->setEnabled(false);
      ui->Expert5->setEnabled(true);
      ui->buttonSave->setEnabled(false);
      break;
    case flag5:
      foreach (auto w, lableList) {
          expert5 << w->text();
          w->setEnabled(false);
          //стирание данных
          w->clear();
        }
      ui->Expert5->setEnabled(false);
      ui->loadTest->setEnabled(true);
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
//QMap<QString, int> symbols;
//expert1 = expert1 + expert2 + expert3 + expert4 + expert5;
//int count = 0;
////формирую словарь symbols. Сколько экспертов увидели одинаковые буквы
//foreach (auto expertTemplate_i, expertTemplate) {
//    count = 0;
//    foreach (auto expert1_i, expert1) {
//        if(expertTemplate_i == expert1_i)
//          count++;
//        symbols.insert(expertTemplate_i, count);
//      }
//  }
//QMap<QString, int>::iterator symbols_i;
//for (symbols_i = symbols.begin(); symbols_i != symbols.end(); ) {
//    int k = symbols_i.value();
//    if(k < 3){
//        //symbols_i следующий элемент
//        symbols_i = symbols.erase(symbols_i);
//      }
//    else symbols_i++;
//  }
////в ключе хранятся символы, которые увидели эксперты
//for (symbols_i = symbols.begin(); symbols_i != symbols.end(); symbols_i++) {
//  expert_true << symbols_i.key();

//  }

QString result;
int count1;
for(int i = 0; i < 30; i++){
    result = expert1[i] + expert2[i] + expert3[i] + expert4[i] + expert5[i];
    count1 = 0;
    for(int j = 0; j < result.count(); j++){

        if(result[j] == expertTemplate.at(i))
          count1++;
        if(count1 > 2){
          expert_true.append( expertTemplate.at(i));
          j = 5;
          }

      }
  }

int i;
i++;
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
  //Если не было совпадений => expert_true = 0
  if( expert_true.count() == 0 ){
      for( int i = 0; i < contStr; i++ )
        str[i] = '_';
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
 // scen->setSceneRect(0, -300, ui->graphicsView->width()-10, ui->graphicsView->height()-10);
  ui->label_Text->setText(stringText);
  QFont f;
  f.setPointSize(15);
  //scen->addText(stringText, f);
   textItem = new QGraphicsTextItem;
    textItem  = scen->addText(stringText, f);
  //scen->setSceneRect(0, 0, ui->graphicsView->width(), ui->graphicsView->height());
 // ui->graphicsView->fitInView(scen->itemsBoundingRect(), Qt::KeepAspectRatio);

  ui->graphicsView->hide();
  ui->label_Text->show();
}

//отображение фрагмента текса на экране
void MainWindow::textFragment(){
  ui->graphicsView->hide();
   ui->label_Text->show();
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
 // scen->setSceneRect(0, 0, ui->graphicsView->width(), ui->graphicsView->height());
  QFont f; //размер шрифта
  f.setPointSize(15);
  scen->addText(stringText, f);
  ui->label_Text->setText(stringText);
  //ui->graphicsView->fitInView(scen->itemsBoundingRect(), Qt::KeepAspectRatio);
}


void MainWindow::openImage(){
  ui->graphicsView->show();
   ui->label_Text->hide();
  QString fileName_DATA = QFileDialog::getOpenFileName(this, tr("Open File"),"", tr("Images(*.jpg *.tif)"));
    QFile file(fileName_DATA);
  if (!file.open(QIODevice::ReadOnly)) {
  qDebug()<<"Error open image";
  return;
  }
  QString fileName = QFileInfo(file).fileName();
  int len = fileName.length();
  fileName.remove(len -3, 3);
  fileName += "txt";

  QString filepath = QFileInfo(file).absolutePath();
  filepath += "/";
   fileName = filepath + fileName;
  QFile file_txt(fileName);
  QString str;


  QTextCodec *codec = QTextCodec::codecForName("windows-1251");

  if(file_txt.open(QIODevice::ReadOnly |QIODevice::Text)){
      while (!file_txt.atEnd()) {
          QByteArray line = file_txt.readLine();
          str = codec->toUnicode(line);
          //str = line.data();// <- прочитанная строка
        }
    }



  else qDebug()<< "don't open file";
  expertTemplate = str.split(' ');

  scen->clear();
  pix->load(fileName_DATA);
  scen->addPixmap(*pix);
     //scen->setSceneRect(300, 170, ui->graphicsView->width(), ui->graphicsView->height());
  ui->graphicsView->fitInView(scen->itemsBoundingRect(), Qt::KeepAspectRatio);

 // ui->graphicsView->fitInView((QGraphicsItem*)pix , Qt::KeepAspectRatio );

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
  ui->Expert2->setEnabled(false);
  ui->Expert2->setChecked(false);
  ui->Expert3->setEnabled(false);
  ui->Expert3->setChecked(false);
  ui->Expert4->setEnabled(false);
  ui->Expert4->setChecked(false);
  ui->Expert5->setEnabled(false);
  ui->Expert5->setChecked(false);
  ui->buttonSave->setEnabled(false);
  ui->loadTest->setEnabled(false);
}


void MainWindow::resizeEvent(QResizeEvent *event){
  ui->graphicsView->fitInView(scen->itemsBoundingRect(), Qt::KeepAspectRatio);
}
