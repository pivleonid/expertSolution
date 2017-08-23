#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QDebug>

namespace Ui {
  class MainWindow;
}

class MainWindow : public QMainWindow
{
  Q_OBJECT

public:
  QList <QPushButton *> list;
  QStringList expertTemplate; //все буквы
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
  void expertSolution(void);
  void expertButton();
  void buttonSaveSlot();
private:
  Ui::MainWindow *ui;
  enum flagExpert {flag1, flag2, flag3, flag4, flag5}flagExpert_;
};

#endif // MAINWINDOW_H
