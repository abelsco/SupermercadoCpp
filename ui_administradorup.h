/********************************************************************************
** Form generated from reading UI file 'administradorup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRADORUP_H
#define UI_ADMINISTRADORUP_H

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

class Ui_administradorUP
{
public:
    QLineEdit *txtSenha;
    QLineEdit *txtSenhaP;
    QLabel *label_5;
    QLineEdit *txtNome;
    QLabel *label;
    QDialogButtonBox *buttonBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtCod;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *administradorUP)
    {
        if (administradorUP->objectName().isEmpty())
            administradorUP->setObjectName(QStringLiteral("administradorUP"));
        administradorUP->resize(519, 392);
        txtSenha = new QLineEdit(administradorUP);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(240, 190, 191, 20));
        txtSenha->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        txtSenhaP = new QLineEdit(administradorUP);
        txtSenhaP->setObjectName(QStringLiteral("txtSenhaP"));
        txtSenhaP->setGeometry(QRect(240, 150, 191, 20));
        txtSenhaP->setEchoMode(QLineEdit::Password);
        label_5 = new QLabel(administradorUP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 180, 161, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_5->setFont(font);
        txtNome = new QLineEdit(administradorUP);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(240, 110, 191, 20));
        label = new QLabel(administradorUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 10, 281, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        buttonBox_2 = new QDialogButtonBox(administradorUP);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(330, 350, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_2 = new QLabel(administradorUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(140, 100, 71, 31));
        label_2->setFont(font);
        label_3 = new QLabel(administradorUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 140, 131, 31));
        label_3->setFont(font);
        label_4 = new QLabel(administradorUP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(150, 70, 71, 31));
        label_4->setFont(font);
        txtCod = new QLineEdit(administradorUP);
        txtCod->setObjectName(QStringLiteral("txtCod"));
        txtCod->setGeometry(QRect(240, 80, 191, 20));
        txtCod->setInputMethodHints(Qt::ImhDigitsOnly);
        label_6 = new QLabel(administradorUP);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(120, 230, 251, 31));
        label_6->setFont(font);
        label_7 = new QLabel(administradorUP);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(10, 280, 501, 31));
        label_7->setFont(font);

        retranslateUi(administradorUP);

        QMetaObject::connectSlotsByName(administradorUP);
    } // setupUi

    void retranslateUi(QDialog *administradorUP)
    {
        administradorUP->setWindowTitle(QApplication::translate("administradorUP", "Dialog", Q_NULLPTR));
        label_5->setText(QApplication::translate("administradorUP", "Senha do Sistema:", Q_NULLPTR));
        label->setText(QApplication::translate("administradorUP", "Administrador", Q_NULLPTR));
        label_2->setText(QApplication::translate("administradorUP", "Nome:", Q_NULLPTR));
        label_3->setText(QApplication::translate("administradorUP", "Senha pessoal:", Q_NULLPTR));
        label_4->setText(QApplication::translate("administradorUP", "Cod:", Q_NULLPTR));
        txtCod->setText(QString());
        label_6->setText(QApplication::translate("administradorUP", "*Todos os campos s\303\243o obrigatorios.", Q_NULLPTR));
        label_7->setText(QApplication::translate("administradorUP", "* Caso deseje excluir os campos Cod e Senha pessoal s\303\243o obrigat\303\263rios.", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class administradorUP: public Ui_administradorUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRADORUP_H
