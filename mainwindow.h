#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QGraphicsScene>
#include <QFile>
#include <QFileDialog>
#include <QDebug>
#include <QMap>
#include <QResizeEvent>
#include <QGraphicsTextItem>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  QPixmap* pix;
  QGraphicsScene* scen;
  QList <QLineEdit *> lableList;
  //все буквы, а после buttonSaveSlot() буквы которые не распознали эксперты
  //заменены на "_"
  QStringList expertTemplate;
  //буквы не найденные экспертом
  QStringList expert1;
  QStringList expert2;
  QStringList expert3;
  QStringList expert4;
  QStringList expert5;
  //все буквы найденные экспертами
  QStringList expert_true;
  explicit MainWindow(QWidget *parent = 0);
  ~MainWindow();
public slots:
  void nextTab(void);

  void expertSolution(void);
  void expertButton();
  void buttonSaveSlot();
  void loadTest();
  void openImage();
  //показать фрагмент оригинального текста
  void textFragment();
  virtual void resizeEvent(QResizeEvent *event);
private:
  void expertAnaliz();
  //ограничитель ввода текста
  void textEditChange();
  Ui::MainWindow *ui;
  QMap<QString, bool>* label_N; //ключ- имя textEdit, значение - флаг. ежели все флаги стоят- разрешить сохранение
  enum flagExpert {flag1, flag2, flag3, flag4, flag5}flagExpert_;
  QGraphicsTextItem* textItem;
};

#endif // MAINWINDOW_H
