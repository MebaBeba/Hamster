#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QMessageBox>
#include <QTimer>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
    , count(0)
    , coinsPerClick(1)
    , coinsPerSecond(0)
{

    ui->setupUi(this);
    startPassiveIncome(); //начинаем таймер

    //Скрытие кнопок во время запуска
    ui->buyItemButton1->hide();
    ui->buyItemButton2->hide();
    ui->buyItemButton3->hide();
    ui->buyItemButton4->hide();
    ui->buyItemButton5->hide();
    ui->buyItemButton6->hide();
    ui->buyItemButton7->hide();
    ui->buyItemButton8->hide();
    ui->buyPassiveButton1->hide();
    ui->buyPassiveButton2->hide();
    ui->buyPassiveButton3->hide();
    ui->buyPassiveButton4->hide();
    ui->buyPassiveButton5->hide();
    ui->buyPassiveButton6->hide();
    ui->buyPassiveButton7->hide();
    ui->buyPassiveButton8->hide();
    ui->buyPassiveButton9->hide();
    ui->give1000Button->hide();
    ui->give5000Button->hide();
    ui->give10000Button->hide();


    //QPixmap
    QPixmap background(":/resource/img/blackBackground.jpg");
    QPalette palette;
    palette.setBrush(QPalette::Window, background);
    this->setPalette(palette);

    QPixmap give1000Pixmap(":/resource/img/1000rub.png");
    ui->give1000Button->setIcon(QIcon(give1000Pixmap));
    ui->give1000Button->setIconSize(QSize(200, 200));

    QPixmap give5000Pixmap(":/resource/img/5000rub.jpg");
    ui->give5000Button->setIcon(QIcon(give5000Pixmap));
    ui->give5000Button->setIconSize(QSize(200, 200));

    QPixmap give10000Pixmap(":/resource/img/10000rub.jpg");
    ui->give10000Button->setIcon(QIcon(give10000Pixmap));
    ui->give10000Button->setIconSize(QSize(200, 200));
    QPixmap hamster1(":/resource/img/hamster1LVL.png");
    ui->hamsterLVL->setPixmap(hamster1.scaled(ui->hamsterLVL->size(), Qt::KeepAspectRatio));

    QPixmap homePixmap(":/resource/img/home.png");
    QPixmap marketPixmap(":/resource/img/basket.png");
    QPixmap passiveIncomePixmap(":/resource/img/income.png");
    QPixmap giveMoneyPixmap(":/resource/img/money.png");



    //Расположние кнопок
    int buttonX = (this->width() - ui->pushButton->width()) / 2;
    int buttonY = ((this->height() - ui->pushButton->height()) / 2) + 100;
    ui->pushButton->setGeometry(buttonX, buttonY, ui->pushButton->width(), ui->pushButton->height());

    ui->pushButton->setIcon(QIcon(":/resource/img/scale_1200-Photoroom.png"));
    ui->pushButton->setIconSize(QSize(150, 180));

    int counterX = (this->width() - ui->counter->width()) / 2;
    int counterY = ((this->height() - ui->counter->height()) / 2) - 250;
    ui->counter->setGeometry(counterX, counterY, ui->counter->width(), ui->counter->height());

    int progressBarX = (this->width() - ui->progressBar->width()) / 2;
    int progressBarY = ((this->height() - ui->progressBar->height()) / 2) - 200;
    ui->progressBar->setGeometry(progressBarX, progressBarY, ui->progressBar->width(), ui->progressBar->height());
    ui->progressBar->setMinimum(0);
    ui->progressBar->setMaximum(100);
    ui->progressBar->setValue(0);



    // Настройка кнопок меню
    int iconSize = 40;
    homePixmap = homePixmap.scaled(iconSize, iconSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    marketPixmap = marketPixmap.scaled(iconSize, iconSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    passiveIncomePixmap = passiveIncomePixmap.scaled(iconSize, iconSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);
    giveMoneyPixmap = giveMoneyPixmap.scaled(iconSize, iconSize, Qt::KeepAspectRatio, Qt::SmoothTransformation);

    ui->homeButton->setIcon(QIcon(homePixmap));
    ui->marketButton->setIcon(QIcon(marketPixmap));
    ui->passiveIncomeButton->setIcon(QIcon(passiveIncomePixmap));
    ui->giveMoneyButton->setIcon(QIcon(giveMoneyPixmap));

    ui->homeButton->setIconSize(QSize(iconSize, iconSize));
    ui->marketButton->setIconSize(QSize(iconSize, iconSize));
    ui->passiveIncomeButton->setIconSize(QSize(iconSize, iconSize));
    ui->giveMoneyButton->setIconSize(QSize(iconSize, iconSize));

    ui->homeButton->setMinimumSize(60, 60);
    ui->marketButton->setMinimumSize(60, 60);
    ui->passiveIncomeButton->setMinimumSize(60, 60);
    ui->giveMoneyButton->setMinimumSize(60,60);

    //Подключение кнопок меню
    connect(ui->homeButton, &QPushButton::clicked, this, &MainWindow::showHomePage);
    connect(ui->marketButton, &QPushButton::clicked, this, &MainWindow::showMarketPage);
    connect(ui->passiveIncomeButton, &QPushButton::clicked, this, &MainWindow::showPassiveIncomePage);
    connect(ui->giveMoneyButton, &QPushButton::clicked, this, &MainWindow::showGiveMoneyPage);


    //Подключение кнопок покупки
    connect(ui->buyItemButton1, &QPushButton::clicked, this, &MainWindow::buyItem1);
    connect(ui->buyItemButton2, &QPushButton::clicked, this, &MainWindow::buyItem2);
    connect(ui->buyItemButton3, &QPushButton::clicked, this, &MainWindow::buyItem3);
    connect(ui->buyItemButton4, &QPushButton::clicked, this, &MainWindow::buyItem4);
    connect(ui->buyItemButton5, &QPushButton::clicked, this, &MainWindow::buyItem5);
    connect(ui->buyItemButton6, &QPushButton::clicked, this, &MainWindow::buyItem6);
    connect(ui->buyItemButton7, &QPushButton::clicked, this, &MainWindow::buyItem7);
    connect(ui->buyItemButton8, &QPushButton::clicked, this, &MainWindow::buyItem8);

    //Подключение кнопок получения денег
    connect(ui->give1000Button, &QPushButton::clicked, this, &MainWindow::giveMoney1000);
    connect(ui->give5000Button, &QPushButton::clicked, this, &MainWindow::giveMoney5000);
    connect(ui->give10000Button, &QPushButton::clicked, this, &MainWindow::giveMoney10000);

    //Подключение кнопок пассивного дохода
    connect(ui->buyPassiveButton1, &QPushButton::clicked, this, &MainWindow::buyPassiveItem1);
    connect(ui->buyPassiveButton2, &QPushButton::clicked, this, &MainWindow::buyPassiveItem2);
    connect(ui->buyPassiveButton3, &QPushButton::clicked, this, &MainWindow::buyPassiveItem3);
    connect(ui->buyPassiveButton4, &QPushButton::clicked, this, &MainWindow::buyPassiveItem4);
    connect(ui->buyPassiveButton5, &QPushButton::clicked, this, &MainWindow::buyPassiveItem5);
    connect(ui->buyPassiveButton6, &QPushButton::clicked, this, &MainWindow::buyPassiveItem6);
    connect(ui->buyPassiveButton7, &QPushButton::clicked, this, &MainWindow::buyPassiveItem7);
    connect(ui->buyPassiveButton8, &QPushButton::clicked, this, &MainWindow::buyPassiveItem8);
    connect(ui->buyPassiveButton9, &QPushButton::clicked, this, &MainWindow::buyPassiveItem9);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::buyItem1()
{
    if (count >= 50) {
        count -= 50;
        coinsPerClick += 1;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem2()
{
    if (count >= 250) {
        count -= 250;
        coinsPerClick += 5;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem3()
{
    if (count >= 500) {
        count -= 500;
        coinsPerClick += 10;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem4()
{
    if (count >= 1000) {
        count -= 1000;
        coinsPerClick += 20;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem5()
{
    if (count >= 2000) {
        count -= 2000;
        coinsPerClick += 40;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem6()
{
    if (count >= 4000) {
        count -= 4000;
        coinsPerClick += 80;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem7()
{
    if (count >= 8000) {
        count -= 8000;
        coinsPerClick += 160;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyItem8()
{
    if (count >= 16000) {
        count -= 16000;
        coinsPerClick += 320;
        ui->counter->setText(QString::number(count));
        ui->coinsPerClickLabel->setText("Coins/click:" + QString::number(coinsPerClick));
    } else {
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem1(){
    if(count >= 250){
        count -= 250;
        coinsPerSecond += 5;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem2(){
    if(count >= 500){
        count -= 500;
        coinsPerSecond += 10;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem3(){
    if(count >= 1000){
        count -= 1000;
        coinsPerSecond += 20;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem4(){
    if(count >= 2000){
        count -= 2000;
        coinsPerSecond += 40;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem5(){
    if(count >= 4000){
        count -= 4000;
        coinsPerSecond += 80;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem6(){
    if(count >= 8000){
        count -= 8000;
        coinsPerSecond += 160;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem7(){
    if(count >= 16000){
        count -= 16000;
        coinsPerSecond += 320;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem8(){
    if(count >= 32000){
        count -= 32000;
        coinsPerSecond += 640;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::buyPassiveItem9(){
    if(count >= 64000){
        count -= 64000;
        coinsPerSecond += 1280;
        ui->counter->setText(QString::number(count));
        ui->coinsPerSecondLabel->setText("Coins/sec: " + QString::number(coinsPerSecond));
    }else{
        QMessageBox::warning(this, "Not enough coins", "You don't have enough coins to buy this item!");
    }
}

void MainWindow::startPassiveIncome(){
    QTimer *timer = new QTimer(this);
    connect(timer, &QTimer::timeout, this, &MainWindow::updatePassiveIncome);
    timer->start(1000);
}

void MainWindow::updatePassiveIncome(){
    count += coinsPerSecond;
    ui->counter->setText(QString::number(count));
}

void MainWindow::giveMoney1000(){
    count += 1000;
    ui->counter->setText(QString::number(count));
}

void MainWindow::giveMoney5000(){
    count += 5000;
    ui->counter->setText(QString::number(count));
}

void MainWindow::giveMoney10000(){
    count += 10000;
    ui->counter->setText(QString::number(count));
}

void MainWindow::on_pushButton_clicked()
{
    count += coinsPerClick;
    ui->counter->setText(QString::number(count));

    QPixmap hamster1(":/resource/img/hamster1LVL.png");
    QPixmap hamster2(":/resource/img/hamster2LVL.png");
    QPixmap hamster3(":/resource/img/hamster3LVL.png");
    QPixmap hamster4(":/resource/img/hamster4LVL.png");

    if (count >= 1000 && count < 20000) {
        ui->hamsterLVL->setPixmap(hamster2.scaled(ui->hamsterLVL->size(), Qt::KeepAspectRatio));
        ui->progressBar->setMinimum(1000);
        ui->progressBar->setMaximum(20000);
    } else if (count >= 20000 && count < 150000) {
        ui->hamsterLVL->setPixmap(hamster3.scaled(ui->hamsterLVL->size(), Qt::KeepAspectRatio));
        ui->progressBar->setMinimum(20000);
        ui->progressBar->setMaximum(150000);
    } else if (count >= 150000) {
        ui->hamsterLVL->setPixmap(hamster4.scaled(ui->hamsterLVL->size(), Qt::KeepAspectRatio));
        ui->progressBar->setMinimum(150000);
        ui->progressBar->setMaximum(1000000);
    } else {
        ui->hamsterLVL->setPixmap(hamster1.scaled(ui->hamsterLVL->size(), Qt::KeepAspectRatio));
    }

    int progress = (count * 10) / 10;
    ui->progressBar->setValue(progress);
}

void MainWindow::hideAllButtons() {
    QList<QPushButton*> buttons = {
        ui->buyItemButton1, ui->buyItemButton2, ui->buyItemButton3, ui->buyItemButton4,
        ui->buyItemButton5, ui->buyItemButton6, ui->buyItemButton7, ui->buyItemButton8,
        ui->buyPassiveButton1, ui->buyPassiveButton2, ui->buyPassiveButton3, ui->buyPassiveButton4,
        ui->buyPassiveButton5, ui->buyPassiveButton6, ui->buyPassiveButton7, ui->buyPassiveButton8,
        ui->buyPassiveButton9, ui->give1000Button, ui->give5000Button, ui->give10000Button
    };

    for (QPushButton* button : buttons) {
        button->hide();
    }
}

void MainWindow::lowerAllButtons() {
    QList<QPushButton*> buttons = {
        ui->buyItemButton1, ui->buyItemButton2, ui->buyItemButton3, ui->buyItemButton4,
        ui->buyItemButton5, ui->buyItemButton6, ui->buyItemButton7, ui->buyItemButton8,
        ui->buyPassiveButton1, ui->buyPassiveButton2, ui->buyPassiveButton3, ui->buyPassiveButton4,
        ui->buyPassiveButton5, ui->buyPassiveButton6, ui->buyPassiveButton7, ui->buyPassiveButton8,
        ui->buyPassiveButton9, ui->give1000Button, ui->give5000Button, ui->give10000Button
    };

    for (QPushButton* button : buttons) {
        button->lower();
    }
}

void MainWindow::showHomePage()
{
    hideAllButtons();

    ui->pushButton->show();
    ui->counter->show();
    ui->hamsterLVL->show();
    ui->progressBar->show();


    lowerAllButtons();
    ui->pushButton->raise();
}

void MainWindow::showMarketPage()
{
    hideAllButtons();
    ui->counter->show();
    ui->progressBar->show();
    ui->hamsterLVL->hide();
    ui->pushButton->hide();

    // Показываем кнопки для покупки предметов
    ui->buyItemButton1->show();
    ui->buyItemButton2->show();
    ui->buyItemButton3->show();
    ui->buyItemButton4->show();
    ui->buyItemButton5->show();
    ui->buyItemButton6->show();
    ui->buyItemButton7->show();
    ui->buyItemButton8->show();

    lowerAllButtons();

    // Поднятие кнопок на верхний слой
    ui->buyItemButton1->raise();
    ui->buyItemButton2->raise();
    ui->buyItemButton3->raise();
    ui->buyItemButton4->raise();
    ui->buyItemButton5->raise();
    ui->buyItemButton6->raise();
    ui->buyItemButton7->raise();
    ui->buyItemButton8->raise();

    // Переключаемся на страницу с покупкой предметов
    ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::showPassiveIncomePage()
{
    hideAllButtons();

    ui->counter->show();
    ui->progressBar->show();
    ui->hamsterLVL->hide();
    ui->pushButton->hide();

    // Показываем кнопки для покупки пассивного дохода
    ui->buyPassiveButton1->show();
    ui->buyPassiveButton2->show();
    ui->buyPassiveButton3->show();
    ui->buyPassiveButton4->show();
    ui->buyPassiveButton5->show();
    ui->buyPassiveButton6->show();
    ui->buyPassiveButton7->show();
    ui->buyPassiveButton8->show();
    ui->buyPassiveButton9->show();

    lowerAllButtons();

    // Поднятие кнопок на верхний слой
    ui->buyPassiveButton1->raise();
    ui->buyPassiveButton2->raise();
    ui->buyPassiveButton3->raise();
    ui->buyPassiveButton4->raise();
    ui->buyPassiveButton5->raise();
    ui->buyPassiveButton6->raise();
    ui->buyPassiveButton7->raise();
    ui->buyPassiveButton8->raise();
    ui->buyPassiveButton9->raise();

    // Переключаемся на страницу с пассивным доходом
    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::showGiveMoneyPage(){
    hideAllButtons();
    ui->hamsterLVL->hide();
    ui->pushButton->hide();

    ui->give1000Button->show();
    ui->give5000Button->show();
    ui->give10000Button->show();


    lowerAllButtons();

    ui->give1000Button->raise();
    ui->give5000Button->raise();
    ui->give10000Button->raise();
}

