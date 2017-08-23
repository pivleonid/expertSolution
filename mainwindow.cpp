#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
  QMainWindow(parent),
  ui(new Ui::MainWindow)
{
  ui->setupUi(this);
  QPixmap* pix = new QPixmap;
  QGraphicsScene* scen = new QGraphicsScene;
  pix->load("12.jpg");
  scen->addPixmap(*pix);
  ui->graphicsView->setScene(scen);

  QList <QPushButton *> m_list;
   m_list = findChildren<QPushButton *>();

  foreach (auto i, m_list) {
      if(i->objectName() == "buttonSave") continue;
      if(i->objectName() == "openImage")continue;
      if(i->objectName() =="loadTest")continue;
      connect(i, SIGNAL(clicked(bool)), this, SLOT(expertButton()));
      i->setEnabled(false);
      list << i;
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

}

MainWindow::~MainWindow()
{
  delete ui;
}

void MainWindow::expertButton(){

  QObject* obj = QObject::sender();
  QPushButton* button = dynamic_cast<QPushButton*> (obj);
  button->setEnabled(false);
  QString buttonText = button->text();
  switch (flagExpert_) {
    case flag1:
      expert1.removeAt(expert1.indexOf(buttonText));
      break;
    case flag2:
      expert2.removeAt(expert2.indexOf(buttonText));
      break;
    case flag3:
      expert3.removeAt(expert3.indexOf(buttonText));
      break;
    case flag4:
      expert4.removeAt(expert4.indexOf(buttonText));
      break;
    case flag5:
      expert5.removeAt(expert5.indexOf(buttonText));
      break;
    default:
      return;
    }



}
void MainWindow::expertSolution(){

  QObject* obj = QObject::sender();
  QCheckBox* chBox = dynamic_cast<QCheckBox*> (obj);
  chBox->setEnabled(false);



  if(chBox == ui->Expert1){
    expert1 = expertTemplate;
    flagExpert_ = flag1;
    foreach (auto i, list)
        i->setEnabled(true);
   }
  if(chBox == ui->Expert2){
    expert2 = expertTemplate;
    flagExpert_ = flag2;
    foreach (auto i, list)
        i->setEnabled(true);
    }
  if(chBox == ui->Expert3){
    expert3 = expertTemplate;
    flagExpert_ = flag3;
    foreach (auto i, list)
        i->setEnabled(true);
    }
  if(chBox == ui->Expert4){
    expert4 = expertTemplate;
    flagExpert_ = flag4;
    foreach (auto i, list)
        i->setEnabled(true);
    }
  if(chBox == ui->Expert5){
    expert5 = expertTemplate;
    flagExpert_ = flag5;
    foreach (auto i, list)
        i->setEnabled(true);
    ui->buttonSave->setEnabled(true);
    }

}


void MainWindow::buttonSaveSlot(){


  foreach (auto w, expertTemplate) {
      int i = expert1.indexOf(w);
      if(i < 0)
        expert_true << w;
    }
  foreach (auto w, expertTemplate) {
      int i = expert2.indexOf(w);
      if(i < 0)
        expert_true << w;
    }
  foreach (auto w, expertTemplate) {
      int i = expert3.indexOf(w);
      if(i < 0)
        expert_true << w;
    }
  foreach (auto w, expertTemplate) {
      int i = expert4.indexOf(w);
      if(i < 0)
        expert_true << w;
    }
  foreach (auto w, expertTemplate) {
      int i = expert5.indexOf(w);
      if(i < 0)
        expert_true << w;
    }

  expert_true = expert_true.toSet().toList();

  for(int i = 0; i< 30; i++){
      int j = expert_true.indexOf(expertTemplate[i]);
      if(j < 0)
        expertTemplate[i] = "_";
    }



  int k;
   k++;
}
