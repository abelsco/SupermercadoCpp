/********************************************************************************
** Form generated from reading UI file 'cliente.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENTE_H
#define UI_CLIENTE_H

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

class Ui_cliente
{
public:
    QLabel *label_4;
    QLabel *label_3;
    QLabel *label_2;
    QLineEdit *txtCPF;
    QDialogButtonBox *buttonBox_2;
    QLabel *label;
    QLineEdit *txtEmail;
    QLineEdit *txtNome;

    void setupUi(QDialog *cliente)
    {
        if (cliente->objectName().isEmpty())
            cliente->setObjectName(QStringLiteral("cliente"));
        cliente->resize(400, 300);
        label_4 = new QLabel(cliente);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(60, 130, 71, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_3 = new QLabel(cliente);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 100, 71, 31));
        label_3->setFont(font);
        label_2 = new QLabel(cliente);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 70, 71, 31));
        label_2->setFont(font);
        txtCPF = new QLineEdit(cliente);
        txtCPF->setObjectName(QStringLiteral("txtCPF"));
        txtCPF->setGeometry(QRect(130, 140, 191, 20));
        txtCPF->setInputMethodHints(Qt::ImhDigitsOnly);
        buttonBox_2 = new QDialogButtonBox(cliente);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 210, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(cliente);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(160, 20, 111, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        txtEmail = new QLineEdit(cliente);
        txtEmail->setObjectName(QStringLiteral("txtEmail"));
        txtEmail->setGeometry(QRect(130, 110, 191, 20));
        txtNome = new QLineEdit(cliente);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(130, 80, 191, 20));

        retranslateUi(cliente);

        QMetaObject::connectSlotsByName(cliente);
    } // setupUi

    void retranslateUi(QDialog *cliente)
    {
        cliente->setWindowTitle(QApplication::translate("cliente", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("cliente", "CPF:", Q_NULLPTR));
        label_3->setText(QApplication::translate("cliente", "E-mail:", Q_NULLPTR));
        label_2->setText(QApplication::translate("cliente", "Nome:", Q_NULLPTR));
        txtCPF->setInputMask(QApplication::translate("cliente", "999.999.999-99", Q_NULLPTR));
        txtCPF->setText(QApplication::translate("cliente", "..-", Q_NULLPTR));
        label->setText(QApplication::translate("cliente", "Cliente", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class cliente: public Ui_cliente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENTE_H
