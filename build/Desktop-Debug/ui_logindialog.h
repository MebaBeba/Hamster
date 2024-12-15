/********************************************************************************
** Form generated from reading UI file 'logindialog.ui'
**
** Created by: Qt User Interface Compiler version 6.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINDIALOG_H
#define UI_LOGINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Form
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QPushButton *okButton;
    QLineEdit *loginLineEdit;
    QLabel *label;
    QLineEdit *passwordLineEdit;
    QPushButton *pushButton_2;

    void setupUi(QWidget *Form)
    {
        if (Form->objectName().isEmpty())
            Form->setObjectName("Form");
        Form->resize(310, 300);
        gridLayoutWidget = new QWidget(Form);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(0, 0, 311, 301));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 1, 1, 1);

        okButton = new QPushButton(gridLayoutWidget);
        okButton->setObjectName("okButton");

        gridLayout->addWidget(okButton, 2, 3, 1, 1);

        loginLineEdit = new QLineEdit(gridLayoutWidget);
        loginLineEdit->setObjectName("loginLineEdit");

        gridLayout->addWidget(loginLineEdit, 0, 2, 1, 1);

        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 1, 1, 1);
        void on_okButton_clicked();

        passwordLineEdit = new QLineEdit(gridLayoutWidget);
        passwordLineEdit->setObjectName("passwordLineEdit");
        passwordLineEdit->setEchoMode(QLineEdit::EchoMode::Password);

        gridLayout->addWidget(passwordLineEdit, 1, 2, 1, 1);

        pushButton_2 = new QPushButton(gridLayoutWidget);
        pushButton_2->setObjectName("pushButton_2");

        gridLayout->addWidget(pushButton_2, 2, 2, 1, 1);


        retranslateUi(Form);

        QMetaObject::connectSlotsByName(Form);
    } // setupUi

    void retranslateUi(QWidget *Form)
    {
        Form->setWindowTitle(QCoreApplication::translate("Form", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("Form", "Password: ", nullptr));
        okButton->setText(QCoreApplication::translate("Form", "\320\236\320\272", nullptr));
        label->setText(QCoreApplication::translate("Form", "Login:", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Form", "\320\236\321\202\320\274\320\265\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
void on_okButton_clicked();

QT_END_NAMESPACE

#endif // UI_LOGINDIALOG_H
