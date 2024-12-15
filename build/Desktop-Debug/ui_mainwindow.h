/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QLabel *counter;
    QLabel *background;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *menu;
    QPushButton *homeButton;
    QPushButton *marketButton;
    QPushButton *passiveIncomeButton;
    QPushButton *giveMoneyButton;
    QLabel *hamsterLVL;
    QProgressBar *progressBar;
    QLabel *coinsPerClickLabel;
    QPushButton *give1000Button;
    QPushButton *give5000Button;
    QPushButton *give10000Button;
    QLabel *coinsPerSecondLabel;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *buyItemLayout;
    QPushButton *buyItemButton1;
    QPushButton *buyItemButton2;
    QPushButton *buyItemButton3;
    QPushButton *buyItemButton4;
    QPushButton *buyItemButton5;
    QPushButton *buyItemButton6;
    QPushButton *buyItemButton7;
    QPushButton *buyItemButton8;
    QWidget *page_2;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *buyPassiveItemLayout;
    QPushButton *buyPassiveButton1;
    QPushButton *buyPassiveButton2;
    QPushButton *buyPassiveButton3;
    QPushButton *buyPassiveButton4;
    QPushButton *buyPassiveButton5;
    QPushButton *buyPassiveButton6;
    QPushButton *buyPassiveButton7;
    QPushButton *buyPassiveButton8;
    QPushButton *buyPassiveButton9;
    QMenuBar *menubar;
    QMenu *menuHamster;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(300, 690);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(79, 319, 141, 151));
        pushButton->setAutoFillBackground(false);
        pushButton->setFlat(true);
        counter = new QLabel(centralwidget);
        counter->setObjectName("counter");
        counter->setGeometry(QRect(30, 20, 241, 37));
        QFont font;
        font.setFamilies({QString::fromUtf8("American Typewriter")});
        font.setPointSize(45);
        counter->setFont(font);
        counter->setAlignment(Qt::AlignmentFlag::AlignCenter);
        background = new QLabel(centralwidget);
        background->setObjectName("background");
        background->setGeometry(QRect(0, 0, 300, 650));
        QFont font1;
        font1.setFamilies({QString::fromUtf8(".AppleSystemUIFont")});
        background->setFont(font1);
        background->setPixmap(QPixmap(QString::fromUtf8("img/blackBackground.jpg")));
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName("horizontalLayoutWidget");
        horizontalLayoutWidget->setGeometry(QRect(-10, 590, 314, 81));
        menu = new QHBoxLayout(horizontalLayoutWidget);
#ifndef Q_OS_MAC
        menu->setSpacing(-1);
#endif
        menu->setObjectName("menu");
        menu->setContentsMargins(8, 0, 8, 8);
        homeButton = new QPushButton(horizontalLayoutWidget);
        homeButton->setObjectName("homeButton");
        homeButton->setEnabled(true);
        homeButton->setFlat(true);

        menu->addWidget(homeButton);

        marketButton = new QPushButton(horizontalLayoutWidget);
        marketButton->setObjectName("marketButton");
        marketButton->setFlat(true);

        menu->addWidget(marketButton);

        passiveIncomeButton = new QPushButton(horizontalLayoutWidget);
        passiveIncomeButton->setObjectName("passiveIncomeButton");
        passiveIncomeButton->setFlat(true);

        menu->addWidget(passiveIncomeButton);

        giveMoneyButton = new QPushButton(horizontalLayoutWidget);
        giveMoneyButton->setObjectName("giveMoneyButton");
        giveMoneyButton->setFlat(true);

        menu->addWidget(giveMoneyButton);

        hamsterLVL = new QLabel(centralwidget);
        hamsterLVL->setObjectName("hamsterLVL");
        hamsterLVL->setGeometry(QRect(50, 160, 200, 200));
        progressBar = new QProgressBar(centralwidget);
        progressBar->setObjectName("progressBar");
        progressBar->setGeometry(QRect(90, 70, 118, 23));
        progressBar->setMaximum(10);
        progressBar->setValue(0);
        coinsPerClickLabel = new QLabel(centralwidget);
        coinsPerClickLabel->setObjectName("coinsPerClickLabel");
        coinsPerClickLabel->setGeometry(QRect(20, 20, 131, 21));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("American Typewriter")});
        coinsPerClickLabel->setFont(font2);
        give1000Button = new QPushButton(centralwidget);
        give1000Button->setObjectName("give1000Button");
        give1000Button->setGeometry(QRect(59, 120, 191, 100));
        give1000Button->setFlat(true);
        give5000Button = new QPushButton(centralwidget);
        give5000Button->setObjectName("give5000Button");
        give5000Button->setGeometry(QRect(59, 240, 191, 100));
        give5000Button->setFlat(true);
        give10000Button = new QPushButton(centralwidget);
        give10000Button->setObjectName("give10000Button");
        give10000Button->setGeometry(QRect(60, 360, 191, 100));
        give10000Button->setFlat(true);
        coinsPerSecondLabel = new QLabel(centralwidget);
        coinsPerSecondLabel->setObjectName("coinsPerSecondLabel");
        coinsPerSecondLabel->setGeometry(QRect(160, 20, 111, 21));
        coinsPerSecondLabel->setFont(font2);
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(20, 120, 261, 481));
        page = new QWidget();
        page->setObjectName("page");
        verticalLayoutWidget = new QWidget(page);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(20, 20, 221, 441));
        buyItemLayout = new QVBoxLayout(verticalLayoutWidget);
        buyItemLayout->setObjectName("buyItemLayout");
        buyItemLayout->setSizeConstraint(QLayout::SizeConstraint::SetNoConstraint);
        buyItemLayout->setContentsMargins(0, 0, 0, 0);
        buyItemButton1 = new QPushButton(verticalLayoutWidget);
        buyItemButton1->setObjectName("buyItemButton1");

        buyItemLayout->addWidget(buyItemButton1);

        buyItemButton2 = new QPushButton(verticalLayoutWidget);
        buyItemButton2->setObjectName("buyItemButton2");

        buyItemLayout->addWidget(buyItemButton2);

        buyItemButton3 = new QPushButton(verticalLayoutWidget);
        buyItemButton3->setObjectName("buyItemButton3");

        buyItemLayout->addWidget(buyItemButton3);

        buyItemButton4 = new QPushButton(verticalLayoutWidget);
        buyItemButton4->setObjectName("buyItemButton4");

        buyItemLayout->addWidget(buyItemButton4);

        buyItemButton5 = new QPushButton(verticalLayoutWidget);
        buyItemButton5->setObjectName("buyItemButton5");

        buyItemLayout->addWidget(buyItemButton5);

        buyItemButton6 = new QPushButton(verticalLayoutWidget);
        buyItemButton6->setObjectName("buyItemButton6");

        buyItemLayout->addWidget(buyItemButton6);

        buyItemButton7 = new QPushButton(verticalLayoutWidget);
        buyItemButton7->setObjectName("buyItemButton7");

        buyItemLayout->addWidget(buyItemButton7);

        buyItemButton8 = new QPushButton(verticalLayoutWidget);
        buyItemButton8->setObjectName("buyItemButton8");

        buyItemLayout->addWidget(buyItemButton8);

        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName("page_2");
        verticalLayoutWidget_2 = new QWidget(page_2);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(20, 20, 221, 441));
        buyPassiveItemLayout = new QVBoxLayout(verticalLayoutWidget_2);
        buyPassiveItemLayout->setObjectName("buyPassiveItemLayout");
        buyPassiveItemLayout->setContentsMargins(0, 0, 0, 0);
        buyPassiveButton1 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton1->setObjectName("buyPassiveButton1");

        buyPassiveItemLayout->addWidget(buyPassiveButton1);

        buyPassiveButton2 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton2->setObjectName("buyPassiveButton2");

        buyPassiveItemLayout->addWidget(buyPassiveButton2);

        buyPassiveButton3 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton3->setObjectName("buyPassiveButton3");

        buyPassiveItemLayout->addWidget(buyPassiveButton3);

        buyPassiveButton4 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton4->setObjectName("buyPassiveButton4");

        buyPassiveItemLayout->addWidget(buyPassiveButton4);

        buyPassiveButton5 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton5->setObjectName("buyPassiveButton5");

        buyPassiveItemLayout->addWidget(buyPassiveButton5);

        buyPassiveButton6 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton6->setObjectName("buyPassiveButton6");

        buyPassiveItemLayout->addWidget(buyPassiveButton6);

        buyPassiveButton7 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton7->setObjectName("buyPassiveButton7");

        buyPassiveItemLayout->addWidget(buyPassiveButton7);

        buyPassiveButton8 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton8->setObjectName("buyPassiveButton8");

        buyPassiveItemLayout->addWidget(buyPassiveButton8);

        buyPassiveButton9 = new QPushButton(verticalLayoutWidget_2);
        buyPassiveButton9->setObjectName("buyPassiveButton9");

        buyPassiveItemLayout->addWidget(buyPassiveButton9);

        stackedWidget->addWidget(page_2);
        MainWindow->setCentralWidget(centralwidget);
        background->raise();
        counter->raise();
        horizontalLayoutWidget->raise();
        hamsterLVL->raise();
        progressBar->raise();
        coinsPerClickLabel->raise();
        give1000Button->raise();
        give5000Button->raise();
        give10000Button->raise();
        coinsPerSecondLabel->raise();
        stackedWidget->raise();
        pushButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 300, 42));
        menuHamster = new QMenu(menubar);
        menuHamster->setObjectName("menuHamster");
        MainWindow->setMenuBar(menubar);

        menubar->addAction(menuHamster->menuAction());

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton->setText(QString());
        counter->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        background->setText(QString());
        homeButton->setText(QString());
        marketButton->setText(QString());
        passiveIncomeButton->setText(QString());
        giveMoneyButton->setText(QString());
        hamsterLVL->setText(QString());
        coinsPerClickLabel->setText(QCoreApplication::translate("MainWindow", "Coins/click: 1", nullptr));
        give1000Button->setText(QString());
        give5000Button->setText(QString());
        give10000Button->setText(QString());
        coinsPerSecondLabel->setText(QCoreApplication::translate("MainWindow", "Coins/sec: 0", nullptr));
        buyItemButton1->setText(QCoreApplication::translate("MainWindow", "+1 per click - 50", nullptr));
        buyItemButton2->setText(QCoreApplication::translate("MainWindow", "+5 per click - 250", nullptr));
        buyItemButton3->setText(QCoreApplication::translate("MainWindow", "+10 per click - 500", nullptr));
        buyItemButton4->setText(QCoreApplication::translate("MainWindow", "+20 per click - 1000", nullptr));
        buyItemButton5->setText(QCoreApplication::translate("MainWindow", "+40 per click - 2000", nullptr));
        buyItemButton6->setText(QCoreApplication::translate("MainWindow", "+80 per click - 4000", nullptr));
        buyItemButton7->setText(QCoreApplication::translate("MainWindow", "+160 per click - 8000", nullptr));
        buyItemButton8->setText(QCoreApplication::translate("MainWindow", "+320 per click - 16000", nullptr));
        buyPassiveButton1->setText(QCoreApplication::translate("MainWindow", "+5 per second - 250", nullptr));
        buyPassiveButton2->setText(QCoreApplication::translate("MainWindow", "+10 per second - 500", nullptr));
        buyPassiveButton3->setText(QCoreApplication::translate("MainWindow", "+20 per second - 1000", nullptr));
        buyPassiveButton4->setText(QCoreApplication::translate("MainWindow", "+40 per second - 2000", nullptr));
        buyPassiveButton5->setText(QCoreApplication::translate("MainWindow", "+80 per second - 4000", nullptr));
        buyPassiveButton6->setText(QCoreApplication::translate("MainWindow", "+160 per second - 8000", nullptr));
        buyPassiveButton7->setText(QCoreApplication::translate("MainWindow", "+320 per second - 16000", nullptr));
        buyPassiveButton8->setText(QCoreApplication::translate("MainWindow", "+640 per second - 32000", nullptr));
        buyPassiveButton9->setText(QCoreApplication::translate("MainWindow", "+1280 per second - 64000", nullptr));
        menuHamster->setTitle(QCoreApplication::translate("MainWindow", "Hamster", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
