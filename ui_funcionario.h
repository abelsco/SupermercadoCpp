/********************************************************************************
** Form generated from reading UI file 'funcionario.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FUNCIONARIO_H
#define UI_FUNCIONARIO_H

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

class Ui_funcionario
{
public:
    QDialogButtonBox *buttonBox_2;
    QLineEdit *txtCPF;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *txtSenha;
    QLabel *label_2;
    QLineEdit *txtEmail;
    QLineEdit *txtNome;
    QLabel *label;
    QLabel *label_5;

    void setupUi(QDialog *funcionario)
    {
        if (funcionario->objectName().isEmpty())
            funcionario->setObjectName(QStringLiteral("funcionario"));
        funcionario->resize(400, 300);
        buttonBox_2 = new QDialogButtonBox(funcionario);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 260, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtCPF = new QLineEdit(funcionario);
        txtCPF->setObjectName(QStringLiteral("txtCPF"));
        txtCPF->setGeometry(QRect(130, 160, 191, 20));
        txtCPF->setInputMethodHints(Qt::ImhDigitsOnly);
        label_3 = new QLabel(funcionario);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 71, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_4 = new QLabel(funcionario);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 150, 71, 31));
        label_4->setFont(font);
        txtSenha = new QLineEdit(funcionario);
        txtSenha->setObjectName(QStringLiteral("txtSenha"));
        txtSenha->setGeometry(QRect(130, 190, 191, 20));
        txtSenha->setEchoMode(QLineEdit::PasswordEchoOnEdit);
        label_2 = new QLabel(funcionario);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(60, 90, 71, 31));
        label_2->setFont(font);
        txtEmail = new QLineEdit(funcionario);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(130, 130, 191, 20));
        txtNome = new QLineEdit(funcionario);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(130, 100, 191, 20));
        label = new QLabel(funcionario);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 231, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_5 = new QLabel(funcionario);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(60, 180, 71, 31));
        label_5->setFont(font);

        retranslateUi(funcionario);

        QMetaObject::connectSlotsByName(funcionario);
    } // setupUi

    void retranslateUi(QDialog *funcionario)
    {
        funcionario->setWindowTitle(QApplication::translate("funcionario", "Dialog", Q_NULLPTR));
        txtCPF->setInputMask(QApplication::translate("funcionario", "999.999.999-99", Q_NULLPTR));
        label_3->setText(QApplication::translate("funcionario", "E-mail:", Q_NULLPTR));
        label_4->setText(QApplication::translate("funcionario", "CPF:", Q_NULLPTR));
        label_2->setText(QApplication::translate("funcionario", "Nome:", Q_NULLPTR));
        label->setText(QApplication::translate("funcionario", "Funcion\303\241rio", Q_NULLPTR));
        label_5->setText(QApplication::translate("funcionario", "Senha:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class funcionario: public Ui_funcionario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FUNCIONARIO_H
