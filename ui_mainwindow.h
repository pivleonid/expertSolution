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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_6;
    QGridLayout *gridLayout_5;
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *openImage;
    QCheckBox *Expert1;
    QCheckBox *Expert2;
    QCheckBox *Expert3;
    QCheckBox *Expert4;
    QCheckBox *Expert5;
    QPushButton *loadTest;
    QGridLayout *gridLayout;
    QComboBox *comboBox;
    QSpacerItem *horizontalSpacer_3;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QSpacerItem *verticalSpacer_3;
    QGridLayout *gridLayout_3;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QSpacerItem *verticalSpacer_2;
    QPushButton *buttonSave;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *button1;
    QPushButton *button2;
    QPushButton *button3;
    QPushButton *button4;
    QPushButton *button5;
    QPushButton *button6;
    QPushButton *button7;
    QPushButton *button8;
    QPushButton *button9;
    QPushButton *button10;
    QPushButton *button11;
    QPushButton *button12;
    QPushButton *button13;
    QPushButton *button14;
    QPushButton *button15;
    QHBoxLayout *horizontalLayout;
    QPushButton *button16;
    QPushButton *button17;
    QPushButton *button18;
    QPushButton *button19;
    QPushButton *button20;
    QPushButton *button21;
    QPushButton *button22;
    QPushButton *button23;
    QPushButton *button24;
    QPushButton *button25;
    QPushButton *button26;
    QPushButton *button27;
    QPushButton *button28;
    QPushButton *button29;
    QPushButton *button30;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1674, 888);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_6 = new QGridLayout(centralWidget);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        openImage = new QPushButton(centralWidget);
        openImage->setObjectName(QStringLiteral("openImage"));

        gridLayout_2->addWidget(openImage, 0, 0, 1, 1);

        Expert1 = new QCheckBox(centralWidget);
        Expert1->setObjectName(QStringLiteral("Expert1"));

        gridLayout_2->addWidget(Expert1, 1, 0, 1, 1);

        Expert2 = new QCheckBox(centralWidget);
        Expert2->setObjectName(QStringLiteral("Expert2"));

        gridLayout_2->addWidget(Expert2, 2, 0, 1, 1);

        Expert3 = new QCheckBox(centralWidget);
        Expert3->setObjectName(QStringLiteral("Expert3"));

        gridLayout_2->addWidget(Expert3, 3, 0, 1, 1);

        Expert4 = new QCheckBox(centralWidget);
        Expert4->setObjectName(QStringLiteral("Expert4"));

        gridLayout_2->addWidget(Expert4, 4, 0, 1, 1);

        Expert5 = new QCheckBox(centralWidget);
        Expert5->setObjectName(QStringLiteral("Expert5"));

        gridLayout_2->addWidget(Expert5, 5, 0, 1, 1);

        loadTest = new QPushButton(centralWidget);
        loadTest->setObjectName(QStringLiteral("loadTest"));

        gridLayout_2->addWidget(loadTest, 6, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QStringLiteral("comboBox"));

        gridLayout->addWidget(comboBox, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_3, 0, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 7, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 8, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(13, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(centralWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout_4->addWidget(graphicsView, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        buttonSave = new QPushButton(centralWidget);
        buttonSave->setObjectName(QStringLiteral("buttonSave"));
        buttonSave->setEnabled(false);

        verticalLayout_2->addWidget(buttonSave);


        gridLayout_3->addLayout(verticalLayout_2, 0, 0, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(48, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer_2, 0, 1, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        button1 = new QPushButton(centralWidget);
        button1->setObjectName(QStringLiteral("button1"));

        horizontalLayout_2->addWidget(button1);

        button2 = new QPushButton(centralWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setEnabled(true);
        button2->setCheckable(false);
        button2->setAutoDefault(false);
        button2->setFlat(false);

        horizontalLayout_2->addWidget(button2);

        button3 = new QPushButton(centralWidget);
        button3->setObjectName(QStringLiteral("button3"));

        horizontalLayout_2->addWidget(button3);

        button4 = new QPushButton(centralWidget);
        button4->setObjectName(QStringLiteral("button4"));

        horizontalLayout_2->addWidget(button4);

        button5 = new QPushButton(centralWidget);
        button5->setObjectName(QStringLiteral("button5"));

        horizontalLayout_2->addWidget(button5);

        button6 = new QPushButton(centralWidget);
        button6->setObjectName(QStringLiteral("button6"));

        horizontalLayout_2->addWidget(button6);

        button7 = new QPushButton(centralWidget);
        button7->setObjectName(QStringLiteral("button7"));

        horizontalLayout_2->addWidget(button7);

        button8 = new QPushButton(centralWidget);
        button8->setObjectName(QStringLiteral("button8"));

        horizontalLayout_2->addWidget(button8);

        button9 = new QPushButton(centralWidget);
        button9->setObjectName(QStringLiteral("button9"));

        horizontalLayout_2->addWidget(button9);

        button10 = new QPushButton(centralWidget);
        button10->setObjectName(QStringLiteral("button10"));

        horizontalLayout_2->addWidget(button10);

        button11 = new QPushButton(centralWidget);
        button11->setObjectName(QStringLiteral("button11"));

        horizontalLayout_2->addWidget(button11);

        button12 = new QPushButton(centralWidget);
        button12->setObjectName(QStringLiteral("button12"));

        horizontalLayout_2->addWidget(button12);

        button13 = new QPushButton(centralWidget);
        button13->setObjectName(QStringLiteral("button13"));

        horizontalLayout_2->addWidget(button13);

        button14 = new QPushButton(centralWidget);
        button14->setObjectName(QStringLiteral("button14"));

        horizontalLayout_2->addWidget(button14);

        button15 = new QPushButton(centralWidget);
        button15->setObjectName(QStringLiteral("button15"));

        horizontalLayout_2->addWidget(button15);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button16 = new QPushButton(centralWidget);
        button16->setObjectName(QStringLiteral("button16"));

        horizontalLayout->addWidget(button16);

        button17 = new QPushButton(centralWidget);
        button17->setObjectName(QStringLiteral("button17"));

        horizontalLayout->addWidget(button17);

        button18 = new QPushButton(centralWidget);
        button18->setObjectName(QStringLiteral("button18"));

        horizontalLayout->addWidget(button18);

        button19 = new QPushButton(centralWidget);
        button19->setObjectName(QStringLiteral("button19"));

        horizontalLayout->addWidget(button19);

        button20 = new QPushButton(centralWidget);
        button20->setObjectName(QStringLiteral("button20"));

        horizontalLayout->addWidget(button20);

        button21 = new QPushButton(centralWidget);
        button21->setObjectName(QStringLiteral("button21"));

        horizontalLayout->addWidget(button21);

        button22 = new QPushButton(centralWidget);
        button22->setObjectName(QStringLiteral("button22"));

        horizontalLayout->addWidget(button22);

        button23 = new QPushButton(centralWidget);
        button23->setObjectName(QStringLiteral("button23"));

        horizontalLayout->addWidget(button23);

        button24 = new QPushButton(centralWidget);
        button24->setObjectName(QStringLiteral("button24"));

        horizontalLayout->addWidget(button24);

        button25 = new QPushButton(centralWidget);
        button25->setObjectName(QStringLiteral("button25"));

        horizontalLayout->addWidget(button25);

        button26 = new QPushButton(centralWidget);
        button26->setObjectName(QStringLiteral("button26"));

        horizontalLayout->addWidget(button26);

        button27 = new QPushButton(centralWidget);
        button27->setObjectName(QStringLiteral("button27"));

        horizontalLayout->addWidget(button27);

        button28 = new QPushButton(centralWidget);
        button28->setObjectName(QStringLiteral("button28"));

        horizontalLayout->addWidget(button28);

        button29 = new QPushButton(centralWidget);
        button29->setObjectName(QStringLiteral("button29"));

        horizontalLayout->addWidget(button29);

        button30 = new QPushButton(centralWidget);
        button30->setObjectName(QStringLiteral("button30"));

        horizontalLayout->addWidget(button30);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 1);


        gridLayout_6->addLayout(gridLayout_5, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1674, 26));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        button2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        openImage->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        Expert1->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 1", Q_NULLPTR));
        Expert2->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 2", Q_NULLPTR));
        Expert3->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 3", Q_NULLPTR));
        Expert4->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 4", Q_NULLPTR));
        Expert5->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 5", Q_NULLPTR));
        loadTest->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\202\320\265\321\201\321\202", Q_NULLPTR));
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
        label->setText(QApplication::translate("MainWindow", "\320\240\320\260\321\201\320\277\320\276\320\267\320\275\320\260\320\275\320\275\321\213\320\265\n"
"    \321\201\320\270\320\274\320\262\320\276\320\273\321\213", Q_NULLPTR));
        buttonSave->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", Q_NULLPTR));
        button1->setText(QApplication::translate("MainWindow", "\320\260", Q_NULLPTR));
        button2->setText(QApplication::translate("MainWindow", "\320\261", Q_NULLPTR));
        button3->setText(QApplication::translate("MainWindow", "\320\262", Q_NULLPTR));
        button4->setText(QApplication::translate("MainWindow", "\320\263", Q_NULLPTR));
        button5->setText(QApplication::translate("MainWindow", "\320\264", Q_NULLPTR));
        button6->setText(QApplication::translate("MainWindow", "\320\265", Q_NULLPTR));
        button7->setText(QApplication::translate("MainWindow", "\320\266", Q_NULLPTR));
        button8->setText(QApplication::translate("MainWindow", "\320\267", Q_NULLPTR));
        button9->setText(QApplication::translate("MainWindow", "\320\270", Q_NULLPTR));
        button10->setText(QApplication::translate("MainWindow", "\320\272", Q_NULLPTR));
        button11->setText(QApplication::translate("MainWindow", "\320\273", Q_NULLPTR));
        button12->setText(QApplication::translate("MainWindow", "\320\274", Q_NULLPTR));
        button13->setText(QApplication::translate("MainWindow", "\320\275", Q_NULLPTR));
        button14->setText(QApplication::translate("MainWindow", "\320\276", Q_NULLPTR));
        button15->setText(QApplication::translate("MainWindow", "\320\277", Q_NULLPTR));
        button16->setText(QApplication::translate("MainWindow", "\321\200", Q_NULLPTR));
        button17->setText(QApplication::translate("MainWindow", "\321\201", Q_NULLPTR));
        button18->setText(QApplication::translate("MainWindow", "\321\202", Q_NULLPTR));
        button19->setText(QApplication::translate("MainWindow", "\321\203", Q_NULLPTR));
        button20->setText(QApplication::translate("MainWindow", "\321\204", Q_NULLPTR));
        button21->setText(QApplication::translate("MainWindow", "\321\205", Q_NULLPTR));
        button22->setText(QApplication::translate("MainWindow", "\321\206", Q_NULLPTR));
        button23->setText(QApplication::translate("MainWindow", "\321\207", Q_NULLPTR));
        button24->setText(QApplication::translate("MainWindow", "\321\210", Q_NULLPTR));
        button25->setText(QApplication::translate("MainWindow", "\321\211", Q_NULLPTR));
        button26->setText(QApplication::translate("MainWindow", "\321\213", Q_NULLPTR));
        button27->setText(QApplication::translate("MainWindow", "\321\214", Q_NULLPTR));
        button28->setText(QApplication::translate("MainWindow", "\321\215", Q_NULLPTR));
        button29->setText(QApplication::translate("MainWindow", "\321\216", Q_NULLPTR));
        button30->setText(QApplication::translate("MainWindow", "\321\217", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
