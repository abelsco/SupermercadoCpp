/********************************************************************************
** Form generated from reading UI file 'buscaup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCAUP_H
#define UI_BUSCAUP_H

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

class Ui_buscaUP
{
public:
    QDialogButtonBox *buttonBox_2;
    QLabel *label_4;
    QLabel *label_3;
    QLineEdit *txtProd;
    QLineEdit *txtQtd;
    QLineEdit *txtCli;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_5;
    QLineEdit *txtCod;

    void setupUi(QDialog *buscaUP)
    {
        if (buscaUP->objectName().isEmpty())
            buscaUP->setObjectName(QStringLiteral("buscaUP"));
        buscaUP->resize(400, 300);
        buttonBox_2 = new QDialogButtonBox(buscaUP);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 230, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(buscaUP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 170, 121, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        label_3 = new QLabel(buscaUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 140, 81, 31));
        label_3->setFont(font);
        txtProd = new QLineEdit(buscaUP);
        txtProd->setObjectName(QStringLiteral("txtProd"));
        txtProd->setGeometry(QRect(150, 150, 191, 20));
        txtProd->setInputMethodHints(Qt::ImhDigitsOnly);
        txtQtd = new QLineEdit(buscaUP);
        txtQtd->setObjectName(QStringLiteral("txtQtd"));
        txtQtd->setGeometry(QRect(150, 180, 191, 20));
        txtQtd->setInputMethodHints(Qt::ImhDigitsOnly);
        txtCli = new QLineEdit(buscaUP);
        txtCli->setObjectName(QStringLiteral("txtCli"));
        txtCli->setGeometry(QRect(150, 120, 191, 20));
        txtCli->setInputMethodHints(Qt::ImhDigitsOnly);
        label = new QLabel(buscaUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(150, 10, 171, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_2 = new QLabel(buscaUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 71, 31));
        label_2->setFont(font);
        label_5 = new QLabel(buscaUP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(70, 80, 71, 31));
        label_5->setFont(font);
        txtCod = new QLineEdit(buscaUP);
        txtCod->setObjectName(QStringLiteral("txtCod"));
        txtCod->setGeometry(QRect(150, 90, 191, 20));
        txtCod->setInputMethodHints(Qt::ImhDigitsOnly);

        retranslateUi(buscaUP);

        QMetaObject::connectSlotsByName(buscaUP);
    } // setupUi

    void retranslateUi(QDialog *buscaUP)
    {
        buscaUP->setWindowTitle(QApplication::translate("buscaUP", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("buscaUP", "Quantidade:", Q_NULLPTR));
        label_3->setText(QApplication::translate("buscaUP", "Produto:", Q_NULLPTR));
        label->setText(QApplication::translate("buscaUP", "Pedidos", Q_NULLPTR));
        label_2->setText(QApplication::translate("buscaUP", "Cliente:", Q_NULLPTR));
        label_5->setText(QApplication::translate("buscaUP", "Cod:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class buscaUP: public Ui_buscaUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCAUP_H
