/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_7;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QCheckBox *Expert3;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *Expert5;
    QPushButton *loadTest;
    QCheckBox *Expert4;
    QPushButton *openImage;
    QCheckBox *Expert1;
    QCheckBox *Expert2;
    QLabel *label_2;
    QPushButton *originalButton;
    QSpacerItem *verticalSpacer_4;
    QGraphicsView *graphicsView;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_5;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *buttonSave;
    QSpacerItem *horizontalSpacer_2;
    QGridLayout *gridLayout_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QLineEdit *lineEdit_10;
    QLineEdit *lineEdit_14;
    QLineEdit *lineEdit_19;
    QLineEdit *lineEdit_13;
    QLineEdit *lineEdit_15;
    QLineEdit *lineEdit_20;
    QLineEdit *lineEdit_12;
    QLineEdit *lineEdit_17;
    QLineEdit *lineEdit_16;
    QLineEdit *lineEdit_18;
    QLineEdit *lineEdit_11;
    QLineEdit *lineEdit_26;
    QLineEdit *lineEdit_27;
    QLineEdit *lineEdit_30;
    QLineEdit *lineEdit_24;
    QLineEdit *lineEdit_21;
    QLineEdit *lineEdit_28;
    QLineEdit *lineEdit_23;
    QLineEdit *lineEdit_25;
    QLineEdit *lineEdit_29;
    QLineEdit *lineEdit_22;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->setEnabled(true);
        MainWindow->resize(1449, 896);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_7 = new QGridLayout(centralWidget);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        gridLayout_6 = new QGridLayout();
        gridLayout_6->setSpacing(6);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        verticalSpacer = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_2->addItem(verticalSpacer, 12, 0, 1, 1);

        Expert3 = new QCheckBox(centralWidget);
        Expert3->setObjectName(QStringLiteral("Expert3"));

        gridLayout_2->addWidget(Expert3, 3, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 9, 0, 1, 1);

        Expert5 = new QCheckBox(centralWidget);
        Expert5->setObjectName(QStringLiteral("Expert5"));

        gridLayout_2->addWidget(Expert5, 5, 0, 1, 1);

        loadTest = new QPushButton(centralWidget);
        loadTest->setObjectName(QStringLiteral("loadTest"));

        gridLayout_2->addWidget(loadTest, 6, 0, 1, 1);

        Expert4 = new QCheckBox(centralWidget);
        Expert4->setObjectName(QStringLiteral("Expert4"));

        gridLayout_2->addWidget(Expert4, 4, 0, 1, 1);

        openImage = new QPushButton(centralWidget);
        openImage->setObjectName(QStringLiteral("openImage"));
        openImage->setFocusPolicy(Qt::WheelFocus);

        gridLayout_2->addWidget(openImage, 0, 0, 1, 1);

        Expert1 = new QCheckBox(centralWidget);
        Expert1->setObjectName(QStringLiteral("Expert1"));
        Expert1->setEnabled(true);
        Expert1->setCheckable(true);
        Expert1->setChecked(false);

        gridLayout_2->addWidget(Expert1, 1, 0, 1, 1);

        Expert2 = new QCheckBox(centralWidget);
        Expert2->setObjectName(QStringLiteral("Expert2"));

        gridLayout_2->addWidget(Expert2, 2, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));

        gridLayout_2->addWidget(label_2, 8, 0, 1, 1);

        originalButton = new QPushButton(centralWidget);
        originalButton->setObjectName(QStringLiteral("originalButton"));

        gridLayout_2->addWidget(originalButton, 11, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_4, 10, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOn);
        graphicsView->setSizeAdjustPolicy(QAbstractScrollArea::AdjustIgnored);

        gridLayout_4->addWidget(graphicsView, 0, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_4, 0, 0, 1, 2);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_6->addItem(verticalSpacer_3, 1, 0, 1, 1);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);

        gridLayout_5->addWidget(label, 0, 0, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_2, 1, 0, 1, 1);

        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setEnabled(false);

        gridLayout_5->addWidget(buttonSave, 2, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(24, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_5->addItem(horizontalSpacer_2, 1, 1, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 2, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        lineEdit = new QLineEdit(centralWidget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setFrame(true);
        lineEdit->setClearButtonEnabled(false);

        gridLayout_3->addWidget(lineEdit, 0, 0, 1, 1);

        lineEdit_2 = new QLineEdit(centralWidget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));

        gridLayout_3->addWidget(lineEdit_2, 0, 1, 1, 1);

        lineEdit_3 = new QLineEdit(centralWidget);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));

        gridLayout_3->addWidget(lineEdit_3, 0, 2, 1, 1);

        lineEdit_4 = new QLineEdit(centralWidget);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));

        gridLayout_3->addWidget(lineEdit_4, 0, 3, 1, 1);

        lineEdit_5 = new QLineEdit(centralWidget);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));

        gridLayout_3->addWidget(lineEdit_5, 0, 4, 1, 1);

        lineEdit_6 = new QLineEdit(centralWidget);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));

        gridLayout_3->addWidget(lineEdit_6, 0, 5, 1, 1);

        lineEdit_7 = new QLineEdit(centralWidget);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_3->addWidget(lineEdit_7, 0, 6, 1, 1);

        lineEdit_8 = new QLineEdit(centralWidget);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));

        gridLayout_3->addWidget(lineEdit_8, 0, 7, 1, 1);

        lineEdit_9 = new QLineEdit(centralWidget);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));

        gridLayout_3->addWidget(lineEdit_9, 0, 8, 1, 1);

        lineEdit_10 = new QLineEdit(centralWidget);
        lineEdit_10->setObjectName(QStringLiteral("lineEdit_10"));

        gridLayout_3->addWidget(lineEdit_10, 0, 9, 1, 1);

        lineEdit_14 = new QLineEdit(centralWidget);
        lineEdit_14->setObjectName(QStringLiteral("lineEdit_14"));

        gridLayout_3->addWidget(lineEdit_14, 1, 0, 1, 1);

        lineEdit_19 = new QLineEdit(centralWidget);
        lineEdit_19->setObjectName(QStringLiteral("lineEdit_19"));

        gridLayout_3->addWidget(lineEdit_19, 1, 1, 1, 1);

        lineEdit_13 = new QLineEdit(centralWidget);
        lineEdit_13->setObjectName(QStringLiteral("lineEdit_13"));

        gridLayout_3->addWidget(lineEdit_13, 1, 2, 1, 1);

        lineEdit_15 = new QLineEdit(centralWidget);
        lineEdit_15->setObjectName(QStringLiteral("lineEdit_15"));

        gridLayout_3->addWidget(lineEdit_15, 1, 3, 1, 1);

        lineEdit_20 = new QLineEdit(centralWidget);
        lineEdit_20->setObjectName(QStringLiteral("lineEdit_20"));

        gridLayout_3->addWidget(lineEdit_20, 1, 4, 1, 1);

        lineEdit_12 = new QLineEdit(centralWidget);
        lineEdit_12->setObjectName(QStringLiteral("lineEdit_12"));

        gridLayout_3->addWidget(lineEdit_12, 1, 5, 1, 1);

        lineEdit_17 = new QLineEdit(centralWidget);
        lineEdit_17->setObjectName(QStringLiteral("lineEdit_17"));

        gridLayout_3->addWidget(lineEdit_17, 1, 6, 1, 1);

        lineEdit_16 = new QLineEdit(centralWidget);
        lineEdit_16->setObjectName(QStringLiteral("lineEdit_16"));

        gridLayout_3->addWidget(lineEdit_16, 1, 7, 1, 1);

        lineEdit_18 = new QLineEdit(centralWidget);
        lineEdit_18->setObjectName(QStringLiteral("lineEdit_18"));

        gridLayout_3->addWidget(lineEdit_18, 1, 8, 1, 1);

        lineEdit_11 = new QLineEdit(centralWidget);
        lineEdit_11->setObjectName(QStringLiteral("lineEdit_11"));

        gridLayout_3->addWidget(lineEdit_11, 1, 9, 1, 1);

        lineEdit_26 = new QLineEdit(centralWidget);
        lineEdit_26->setObjectName(QStringLiteral("lineEdit_26"));

        gridLayout_3->addWidget(lineEdit_26, 2, 0, 1, 1);

        lineEdit_27 = new QLineEdit(centralWidget);
        lineEdit_27->setObjectName(QStringLiteral("lineEdit_27"));

        gridLayout_3->addWidget(lineEdit_27, 2, 1, 1, 1);

        lineEdit_30 = new QLineEdit(centralWidget);
        lineEdit_30->setObjectName(QStringLiteral("lineEdit_30"));

        gridLayout_3->addWidget(lineEdit_30, 2, 2, 1, 1);

        lineEdit_24 = new QLineEdit(centralWidget);
        lineEdit_24->setObjectName(QStringLiteral("lineEdit_24"));

        gridLayout_3->addWidget(lineEdit_24, 2, 3, 1, 1);

        lineEdit_21 = new QLineEdit(centralWidget);
        lineEdit_21->setObjectName(QStringLiteral("lineEdit_21"));

        gridLayout_3->addWidget(lineEdit_21, 2, 4, 1, 1);

        lineEdit_28 = new QLineEdit(centralWidget);
        lineEdit_28->setObjectName(QStringLiteral("lineEdit_28"));

        gridLayout_3->addWidget(lineEdit_28, 2, 5, 1, 1);

        lineEdit_23 = new QLineEdit(centralWidget);
        lineEdit_23->setObjectName(QStringLiteral("lineEdit_23"));

        gridLayout_3->addWidget(lineEdit_23, 2, 6, 1, 1);

        lineEdit_25 = new QLineEdit(centralWidget);
        lineEdit_25->setObjectName(QStringLiteral("lineEdit_25"));

        gridLayout_3->addWidget(lineEdit_25, 2, 7, 1, 1);

        lineEdit_29 = new QLineEdit(centralWidget);
        lineEdit_29->setObjectName(QStringLiteral("lineEdit_29"));

        gridLayout_3->addWidget(lineEdit_29, 2, 8, 1, 1);

        lineEdit_22 = new QLineEdit(centralWidget);
        lineEdit_22->setObjectName(QStringLiteral("lineEdit_22"));

        gridLayout_3->addWidget(lineEdit_22, 2, 9, 1, 1);


        gridLayout_6->addLayout(gridLayout_3, 2, 1, 1, 1);


        gridLayout_7->addLayout(gridLayout_6, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1449, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        QWidget::setTabOrder(openImage, Expert1);
        QWidget::setTabOrder(Expert1, Expert2);
        QWidget::setTabOrder(Expert2, Expert3);
        QWidget::setTabOrder(Expert3, Expert4);
        QWidget::setTabOrder(Expert4, Expert5);
        QWidget::setTabOrder(Expert5, loadTest);
        QWidget::setTabOrder(loadTest, comboBox);
        QWidget::setTabOrder(comboBox, originalButton);
        QWidget::setTabOrder(originalButton, lineEdit);
        QWidget::setTabOrder(lineEdit, lineEdit_2);
        QWidget::setTabOrder(lineEdit_2, lineEdit_3);
        QWidget::setTabOrder(lineEdit_3, lineEdit_4);
        QWidget::setTabOrder(lineEdit_4, lineEdit_5);
        QWidget::setTabOrder(lineEdit_5, lineEdit_6);
        QWidget::setTabOrder(lineEdit_6, lineEdit_7);
        QWidget::setTabOrder(lineEdit_7, lineEdit_8);
        QWidget::setTabOrder(lineEdit_8, lineEdit_9);
        QWidget::setTabOrder(lineEdit_9, lineEdit_10);
        QWidget::setTabOrder(lineEdit_10, lineEdit_14);
        QWidget::setTabOrder(lineEdit_14, lineEdit_19);
        QWidget::setTabOrder(lineEdit_19, lineEdit_13);
        QWidget::setTabOrder(lineEdit_13, lineEdit_15);
        QWidget::setTabOrder(lineEdit_15, lineEdit_20);
        QWidget::setTabOrder(lineEdit_20, lineEdit_12);
        QWidget::setTabOrder(lineEdit_12, lineEdit_17);
        QWidget::setTabOrder(lineEdit_17, lineEdit_16);
        QWidget::setTabOrder(lineEdit_16, lineEdit_18);
        QWidget::setTabOrder(lineEdit_18, lineEdit_11);
        QWidget::setTabOrder(lineEdit_11, lineEdit_26);
        QWidget::setTabOrder(lineEdit_26, lineEdit_27);
        QWidget::setTabOrder(lineEdit_27, lineEdit_30);
        QWidget::setTabOrder(lineEdit_30, lineEdit_24);
        QWidget::setTabOrder(lineEdit_24, lineEdit_21);
        QWidget::setTabOrder(lineEdit_21, lineEdit_28);
        QWidget::setTabOrder(lineEdit_28, lineEdit_23);
        QWidget::setTabOrder(lineEdit_23, lineEdit_25);
        QWidget::setTabOrder(lineEdit_25, lineEdit_29);
        QWidget::setTabOrder(lineEdit_29, lineEdit_22);
        QWidget::setTabOrder(lineEdit_22, buttonSave);
        QWidget::setTabOrder(buttonSave, graphicsView);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "\320\274\320\276\320\264\321\203\320\273\321\214 \321\215\320\272\321\201\320\277\320\265\321\200\321\202\320\275\320\276\320\271 \320\276\321\206\320\265\320\275\320\272\320\270 \320\274\320\260\320\272\320\265\321\202\320\260 \320\232\320\236\320\227\320\230 \320\237\320\255\320\234\320\230", Q_NULLPTR));
        Expert3->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 3", Q_NULLPTR));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3", Q_NULLPTR)
         << QApplication::translate("MainWindow", "4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6", Q_NULLPTR)
         << QApplication::translate("MainWindow", "7", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8", Q_NULLPTR)
         << QApplication::translate("MainWindow", "9", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10", Q_NULLPTR)
         << QApplication::translate("MainWindow", "11", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12", Q_NULLPTR)
         << QApplication::translate("MainWindow", "13", Q_NULLPTR)
         << QApplication::translate("MainWindow", "14", Q_NULLPTR)
         << QApplication::translate("MainWindow", "15", Q_NULLPTR)
         << QApplication::translate("MainWindow", "16", Q_NULLPTR)
         << QApplication::translate("MainWindow", "17", Q_NULLPTR)
         << QApplication::translate("MainWindow", "18", Q_NULLPTR)
         << QApplication::translate("MainWindow", "19", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20", Q_NULLPTR)
         << QApplication::translate("MainWindow", "21", Q_NULLPTR)
         << QApplication::translate("MainWindow", "22", Q_NULLPTR)
         << QApplication::translate("MainWindow", "23", Q_NULLPTR)
         << QApplication::translate("MainWindow", "24", Q_NULLPTR)
         << QApplication::translate("MainWindow", "25", Q_NULLPTR)
         << QApplication::translate("MainWindow", "26", Q_NULLPTR)
         << QApplication::translate("MainWindow", "27", Q_NULLPTR)
         << QApplication::translate("MainWindow", "28", Q_NULLPTR)
         << QApplication::translate("MainWindow", "29", Q_NULLPTR)
         << QApplication::translate("MainWindow", "30", Q_NULLPTR)
         << QApplication::translate("MainWindow", "31", Q_NULLPTR)
         << QApplication::translate("MainWindow", "32", Q_NULLPTR)
         << QApplication::translate("MainWindow", "33", Q_NULLPTR)
         << QApplication::translate("MainWindow", "34", Q_NULLPTR)
         << QApplication::translate("MainWindow", "35", Q_NULLPTR)
         << QApplication::translate("MainWindow", "36", Q_NULLPTR)
         << QApplication::translate("MainWindow", "37", Q_NULLPTR)
         << QApplication::translate("MainWindow", "38", Q_NULLPTR)
         << QApplication::translate("MainWindow", "39", Q_NULLPTR)
         << QApplication::translate("MainWindow", "40", Q_NULLPTR)
        );
        Expert5->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 5", Q_NULLPTR));
        loadTest->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214\n"
" \321\202\320\265\321\201\321\202", Q_NULLPTR));
        Expert4->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 4", Q_NULLPTR));
        openImage->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214\n"
" \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        Expert1->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 1", Q_NULLPTR));
        Expert2->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 2", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\320\235\320\276\320\274\320\265\321\200 \321\204\321\200\320\260\320\263\320\274\320\265\320\275\321\202\320\260", Q_NULLPTR));
        originalButton->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \n"
"\320\276\321\200\320\270\320\263\320\270\320\275\320\260\320\273", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\267\320\275\320\260\320\275\320\275\321\213\320\265\n"
"    \321\201\320\270\320\274\320\262\320\276\320\273\321\213", Q_NULLPTR));
        buttonSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        lineEdit_3->setText(QString());
        lineEdit_4->setText(QString());
        lineEdit_5->setText(QString());
        lineEdit_6->setText(QString());
        lineEdit_7->setText(QString());
        lineEdit_8->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
