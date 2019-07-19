/********************************************************************************
** Form generated from reading UI file 'clienteup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTEUP_H
#define UI_CLIENTEUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_clienteUP
{
public:
    QLineEdit *txtEmail;
    QLineEdit *txtNome;
    QDialogButtonBox *buttonBox_2;
    QLabel *label;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *txtCPF;
    QLabel *label_4;
    QLineEdit *txtCod;
    QLabel *label_5;

    void setupUi(QDialog *clienteUP)
    {
        if (clienteUP->objectName().isEmpty())
            clienteUP->setObjectName(QStringLiteral("clienteUP"));
        clienteUP->resize(400, 300);
        txtEmail = new QLineEdit(clienteUP);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(130, 140, 191, 20));
        txtNome = new QLineEdit(clienteUP);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(130, 110, 191, 20));
        buttonBox_2 = new QDialogButtonBox(clienteUP);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 240, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(clienteUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 111, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_3 = new QLabel(clienteUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 130, 71, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_2 = new QLabel(clienteUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 100, 71, 31));
        label_2->setFont(font1);
        txtCPF = new QLineEdit(clienteUP);
        txtCPF->setObjectName(QStringLiteral("txtCPF"));
        txtCPF->setGeometry(QRect(130, 170, 191, 20));
        txtCPF->setInputMethodHints(Qt::ImhDigitsOnly);
        label_4 = new QLabel(clienteUP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 160, 71, 31));
        label_4->setFont(font1);
        txtCod = new QLineEdit(clienteUP);
        txtCod->setObjectName(QStringLiteral("txtCod"));
        txtCod->setGeometry(QRect(130, 80, 191, 20));
        txtCod->setInputMethodHints(Qt::ImhDigitsOnly);
        label_5 = new QLabel(clienteUP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 70, 71, 31));
        label_5->setFont(font1);

        retranslateUi(clienteUP);

        QMetaObject::connectSlotsByName(clienteUP);
    } // setupUi

    void retranslateUi(QDialog *clienteUP)
    {
        clienteUP->setWindowTitle(QApplication::translate("clienteUP", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("clienteUP", "Cliente", Q_NULLPTR));
        label_3->setText(QApplication::translate("clienteUP", "E-mail:", Q_NULLPTR));
        label_2->setText(QApplication::translate("clienteUP", "Nome:", Q_NULLPTR));
        txtCPF->setInputMask(QApplication::translate("clienteUP", "999.999.999-99", Q_NULLPTR));
        label_4->setText(QApplication::translate("clienteUP", "CPF:", Q_NULLPTR));
        label_5->setText(QApplication::translate("clienteUP", "Cod:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class clienteUP: public Ui_clienteUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTEUP_H
