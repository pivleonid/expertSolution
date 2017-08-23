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
    QWidget *layoutWidget;
    QGridLayout *gridLayout_5;
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
    QGridLayout *gridLayout_4;
    QGridLayout *gridLayout_2;
    QGridLayout *gridLayout;
    QPushButton *openImage;
    QCheckBox *Expert1;
    QCheckBox *Expert2;
    QCheckBox *Expert3;
    QCheckBox *Expert4;
    QCheckBox *Expert5;
    QPushButton *loadTest;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGraphicsView *graphicsView;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(2006, 890);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        layoutWidget = new QWidget(centralWidget);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(0, 10, 1658, 811));
        gridLayout_5 = new QGridLayout(layoutWidget);
        gridLayout_5->setSpacing(6);
        gridLayout_5->setContentsMargins(11, 11, 11, 11);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        gridLayout_5->setSizeConstraint(QLayout::SetNoConstraint);
        gridLayout_5->setContentsMargins(0, 0, 0, 0);
        verticalSpacer_3 = new QSpacerItem(20, 13, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout_5->addItem(verticalSpacer_3, 1, 0, 1, 1);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout_3->setSizeConstraint(QLayout::SetFixedSize);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        label = new QLabel(layoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setLayoutDirection(Qt::LeftToRight);

        verticalLayout_2->addWidget(label);

        verticalSpacer_2 = new QSpacerItem(20, 10, QSizePolicy::Minimum, QSizePolicy::Fixed);

        verticalLayout_2->addItem(verticalSpacer_2);

        buttonSave = new QPushButton(layoutWidget);
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
        button1 = new QPushButton(layoutWidget);
        button1->setObjectName(QStringLiteral("button1"));

        horizontalLayout_2->addWidget(button1);

        button2 = new QPushButton(layoutWidget);
        button2->setObjectName(QStringLiteral("button2"));
        button2->setEnabled(true);
        button2->setCheckable(false);
        button2->setAutoDefault(false);
        button2->setFlat(false);

        horizontalLayout_2->addWidget(button2);

        button3 = new QPushButton(layoutWidget);
        button3->setObjectName(QStringLiteral("button3"));

        horizontalLayout_2->addWidget(button3);

        button4 = new QPushButton(layoutWidget);
        button4->setObjectName(QStringLiteral("button4"));

        horizontalLayout_2->addWidget(button4);

        button5 = new QPushButton(layoutWidget);
        button5->setObjectName(QStringLiteral("button5"));

        horizontalLayout_2->addWidget(button5);

        button6 = new QPushButton(layoutWidget);
        button6->setObjectName(QStringLiteral("button6"));

        horizontalLayout_2->addWidget(button6);

        button7 = new QPushButton(layoutWidget);
        button7->setObjectName(QStringLiteral("button7"));

        horizontalLayout_2->addWidget(button7);

        button8 = new QPushButton(layoutWidget);
        button8->setObjectName(QStringLiteral("button8"));

        horizontalLayout_2->addWidget(button8);

        button9 = new QPushButton(layoutWidget);
        button9->setObjectName(QStringLiteral("button9"));

        horizontalLayout_2->addWidget(button9);

        button10 = new QPushButton(layoutWidget);
        button10->setObjectName(QStringLiteral("button10"));

        horizontalLayout_2->addWidget(button10);

        button11 = new QPushButton(layoutWidget);
        button11->setObjectName(QStringLiteral("button11"));

        horizontalLayout_2->addWidget(button11);

        button12 = new QPushButton(layoutWidget);
        button12->setObjectName(QStringLiteral("button12"));

        horizontalLayout_2->addWidget(button12);

        button13 = new QPushButton(layoutWidget);
        button13->setObjectName(QStringLiteral("button13"));

        horizontalLayout_2->addWidget(button13);

        button14 = new QPushButton(layoutWidget);
        button14->setObjectName(QStringLiteral("button14"));

        horizontalLayout_2->addWidget(button14);

        button15 = new QPushButton(layoutWidget);
        button15->setObjectName(QStringLiteral("button15"));

        horizontalLayout_2->addWidget(button15);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        button16 = new QPushButton(layoutWidget);
        button16->setObjectName(QStringLiteral("button16"));

        horizontalLayout->addWidget(button16);

        button17 = new QPushButton(layoutWidget);
        button17->setObjectName(QStringLiteral("button17"));

        horizontalLayout->addWidget(button17);

        button18 = new QPushButton(layoutWidget);
        button18->setObjectName(QStringLiteral("button18"));

        horizontalLayout->addWidget(button18);

        button19 = new QPushButton(layoutWidget);
        button19->setObjectName(QStringLiteral("button19"));

        horizontalLayout->addWidget(button19);

        button20 = new QPushButton(layoutWidget);
        button20->setObjectName(QStringLiteral("button20"));

        horizontalLayout->addWidget(button20);

        button21 = new QPushButton(layoutWidget);
        button21->setObjectName(QStringLiteral("button21"));

        horizontalLayout->addWidget(button21);

        button22 = new QPushButton(layoutWidget);
        button22->setObjectName(QStringLiteral("button22"));

        horizontalLayout->addWidget(button22);

        button23 = new QPushButton(layoutWidget);
        button23->setObjectName(QStringLiteral("button23"));

        horizontalLayout->addWidget(button23);

        button24 = new QPushButton(layoutWidget);
        button24->setObjectName(QStringLiteral("button24"));

        horizontalLayout->addWidget(button24);

        button25 = new QPushButton(layoutWidget);
        button25->setObjectName(QStringLiteral("button25"));

        horizontalLayout->addWidget(button25);

        button26 = new QPushButton(layoutWidget);
        button26->setObjectName(QStringLiteral("button26"));

        horizontalLayout->addWidget(button26);

        button27 = new QPushButton(layoutWidget);
        button27->setObjectName(QStringLiteral("button27"));

        horizontalLayout->addWidget(button27);

        button28 = new QPushButton(layoutWidget);
        button28->setObjectName(QStringLiteral("button28"));

        horizontalLayout->addWidget(button28);

        button29 = new QPushButton(layoutWidget);
        button29->setObjectName(QStringLiteral("button29"));

        horizontalLayout->addWidget(button29);

        button30 = new QPushButton(layoutWidget);
        button30->setObjectName(QStringLiteral("button30"));

        horizontalLayout->addWidget(button30);


        verticalLayout->addLayout(horizontalLayout);


        gridLayout_3->addLayout(verticalLayout, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_3, 2, 0, 1, 1);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setSpacing(6);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        gridLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetMinimumSize);
        openImage = new QPushButton(layoutWidget);
        openImage->setObjectName(QStringLiteral("openImage"));

        gridLayout->addWidget(openImage, 0, 0, 1, 1);

        Expert1 = new QCheckBox(layoutWidget);
        Expert1->setObjectName(QStringLiteral("Expert1"));

        gridLayout->addWidget(Expert1, 1, 0, 1, 1);

        Expert2 = new QCheckBox(layoutWidget);
        Expert2->setObjectName(QStringLiteral("Expert2"));

        gridLayout->addWidget(Expert2, 2, 0, 1, 1);

        Expert3 = new QCheckBox(layoutWidget);
        Expert3->setObjectName(QStringLiteral("Expert3"));

        gridLayout->addWidget(Expert3, 3, 0, 1, 1);

        Expert4 = new QCheckBox(layoutWidget);
        Expert4->setObjectName(QStringLiteral("Expert4"));

        gridLayout->addWidget(Expert4, 4, 0, 1, 1);

        Expert5 = new QCheckBox(layoutWidget);
        Expert5->setObjectName(QStringLiteral("Expert5"));

        gridLayout->addWidget(Expert5, 5, 0, 1, 1);

        loadTest = new QPushButton(layoutWidget);
        loadTest->setObjectName(QStringLiteral("loadTest"));

        gridLayout->addWidget(loadTest, 6, 0, 1, 1);


        gridLayout_2->addLayout(gridLayout, 0, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 1, 0, 1, 1);


        gridLayout_4->addLayout(gridLayout_2, 0, 0, 1, 1);

        horizontalSpacer = new QSpacerItem(10, 20, QSizePolicy::Fixed, QSizePolicy::Minimum);

        gridLayout_4->addItem(horizontalSpacer, 0, 1, 1, 1);

        graphicsView = new QGraphicsView(layoutWidget);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));

        gridLayout_4->addWidget(graphicsView, 0, 2, 1, 1);


        gridLayout_5->addLayout(gridLayout_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 2006, 26));
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
        openImage->setText(QApplication::translate("MainWindow", "\320\236\321\202\320\272\321\200\321\213\321\202\321\214 \320\270\320\267\320\276\320\261\321\200\320\260\320\266\320\265\320\275\320\270\320\265", Q_NULLPTR));
        Expert1->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 1", Q_NULLPTR));
        Expert2->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 2", Q_NULLPTR));
        Expert3->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 3", Q_NULLPTR));
        Expert4->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 4", Q_NULLPTR));
        Expert5->setText(QApplication::translate("MainWindow", "\320\255\320\272\321\201\320\277\320\265\321\200\321\202 5", Q_NULLPTR));
        loadTest->setText(QApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\202\320\265\321\201\321\202", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
