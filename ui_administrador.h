/********************************************************************************
** Form generated from reading UI file 'administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADOR_H
#define UI_ADMINISTRADOR_H

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

class Ui_administrador
{
public:
    QLabel *label;
    QLineEdit *txtNome;
    QLineEdit *txtSenha;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *txtSenhaP;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_5;
    QLabel *label_4;

    void setupUi(QDialog *administrador)
    {
        if (administrador->objectName().isEmpty())
            administrador->setObjectName(QStringLiteral("administrador"));
        administrador->resize(462, 337);
        label = new QLabel(administrador);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 281, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        txtNome = new QLineEdit(administrador);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(200, 100, 191, 20));
        txtSenha = new QLineEdit(administrador);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(200, 180, 191, 20));
        txtSenha->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_3 = new QLabel(administrador);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 130, 131, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_3->setFont(font1);
        label_2 = new QLabel(administrador);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(110, 90, 71, 31));
        label_2->setFont(font1);
        txtSenhaP = new QLineEdit(administrador);
        txtSenhaP->setObjectName(QStringLiteral("txtSenhaP"));
        txtSenhaP->setGeometry(QRect(200, 140, 191, 20));
        txtSenhaP->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        buttonBox_2 = new QDialogButtonBox(administrador);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(280, 280, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_5 = new QLabel(administrador);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 170, 161, 31));
        label_5->setFont(font1);
        label_4 = new QLabel(administrador);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 230, 211, 20));

        retranslateUi(administrador);

        QMetaObject::connectSlotsByName(administrador);
    } // setupUi

    void retranslateUi(QDialog *administrador)
    {
        administrador->setWindowTitle(QApplication::translate("administrador", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("administrador", "Administrador", Q_NULLPTR));
        label_3->setText(QApplication::translate("administrador", "Senha pessoal:", Q_NULLPTR));
        label_2->setText(QApplication::translate("administrador", "Nome:", Q_NULLPTR));
        label_5->setText(QApplication::translate("administrador", "Senha do Sistema:", Q_NULLPTR));
        label_4->setText(QApplication::translate("administrador", "Todos os campos s\303\243o obrigat\303\263rios.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administrador: public Ui_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADOR_H
