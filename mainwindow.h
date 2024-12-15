#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();
    void showHomePage();
    void showMarketPage();
    void showPassiveIncomePage();
    void showGiveMoneyPage();
    void buyItem1();
    void buyItem2();
    void buyItem3();
    void buyItem4();
    void buyItem5();
    void buyItem6();
    void buyItem7();
    void buyItem8();
    void startPassiveIncome();
    void updatePassiveIncome();
    void buyPassiveItem1();
    void buyPassiveItem2();
    void buyPassiveItem3();
    void buyPassiveItem4();
    void buyPassiveItem5();
    void buyPassiveItem6();
    void buyPassiveItem7();
    void buyPassiveItem8();
    void buyPassiveItem9();
    void giveMoney1000();
    void giveMoney5000();
    void giveMoney10000();
    void hideAllButtons();
    void lowerAllButtons();
private:
    Ui::MainWindow *ui;
    int count;
    int coinsPerClick;
    int coinsPerSecond;
};

#endif // MAINWINDOW_H
