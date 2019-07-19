/********************************************************************************
** Form generated from reading UI file 'funcionarioup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIOUP_H
#define UI_FUNCIONARIOUP_H

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

class Ui_funcionarioUP
{
public:
    QLineEdit *txtEmail;
    QDialogButtonBox *buttonBox_2;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *txtCPF;
    QLabel *label_2;
    QLabel *label_4;
    QLineEdit *txtSenha;
    QLineEdit *txtNome;
    QLabel *label_5;
    QLineEdit *txtCod;
    QLabel *label_6;

    void setupUi(QDialog *funcionarioUP)
    {
        if (funcionarioUP->objectName().isEmpty())
            funcionarioUP->setObjectName(QStringLiteral("funcionarioUP"));
        funcionarioUP->resize(400, 300);
        txtEmail = new QLineEdit(funcionarioUP);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(130, 130, 191, 20));
        buttonBox_2 = new QDialogButtonBox(funcionarioUP);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 240, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(funcionarioUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 231, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        label_3 = new QLabel(funcionarioUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 71, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        txtCPF = new QLineEdit(funcionarioUP);
        txtCPF->setObjectName(QStringLiteral("txtCPF"));
        txtCPF->setGeometry(QRect(130, 160, 191, 20));
        label_2 = new QLabel(funcionarioUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 71, 31));
        label_2->setFont(font1);
        label_4 = new QLabel(funcionarioUP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 150, 71, 31));
        label_4->setFont(font1);
        txtSenha = new QLineEdit(funcionarioUP);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(130, 190, 191, 20));
        txtSenha->setEchoMode(QLineEdit::Password);
        txtNome = new QLineEdit(funcionarioUP);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(130, 100, 191, 20));
        label_5 = new QLabel(funcionarioUP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 180, 71, 31));
        label_5->setFont(font1);
        txtCod = new QLineEdit(funcionarioUP);
        txtCod->setObjectName(QStringLiteral("txtCod"));
        txtCod->setGeometry(QRect(130, 70, 191, 20));
        txtCod->setInputMethodHints(Qt::ImhDigitsOnly);
        label_6 = new QLabel(funcionarioUP);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(60, 60, 71, 31));
        label_6->setFont(font1);

        retranslateUi(funcionarioUP);

        QMetaObject::connectSlotsByName(funcionarioUP);
    } // setupUi

    void retranslateUi(QDialog *funcionarioUP)
    {
        funcionarioUP->setWindowTitle(QApplication::translate("funcionarioUP", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("funcionarioUP", "Funcion\303\241rio", Q_NULLPTR));
        label_3->setText(QApplication::translate("funcionarioUP", "E-mail:", Q_NULLPTR));
        txtCPF->setInputMask(QApplication::translate("funcionarioUP", "999.999.999-99", Q_NULLPTR));
        label_2->setText(QApplication::translate("funcionarioUP", "Nome:", Q_NULLPTR));
        label_4->setText(QApplication::translate("funcionarioUP", "CPF:", Q_NULLPTR));
        label_5->setText(QApplication::translate("funcionarioUP", "Senha:", Q_NULLPTR));
        label_6->setText(QApplication::translate("funcionarioUP", "Cod:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class funcionarioUP: public Ui_funcionarioUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIOUP_H
