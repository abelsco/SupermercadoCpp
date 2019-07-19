/********************************************************************************
** Form generated from reading UI file 'produtoup.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUTOUP_H
#define UI_PRODUTOUP_H

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

class Ui_produtoUP
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_4;
    QLineEdit *txtPreco;
    QLineEdit *txtMod;
    QLabel *label_3;
    QLineEdit *txtQtd;
    QLabel *label_2;
    QLabel *label_6;
    QLabel *label;
    QLabel *label_5;
    QLineEdit *txtNome;
    QLineEdit *txtDesc;
    QLabel *label_7;
    QLineEdit *txtCod;

    void setupUi(QDialog *produtoUP)
    {
        if (produtoUP->objectName().isEmpty())
            produtoUP->setObjectName(QStringLiteral("produtoUP"));
        produtoUP->resize(465, 422);
        buttonBox = new QDialogButtonBox(produtoUP);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(110, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label_4 = new QLabel(produtoUP);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 150, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_4->setFont(font);
        txtPreco = new QLineEdit(produtoUP);
        txtPreco->setObjectName(QStringLiteral("txtPreco"));
        txtPreco->setGeometry(QRect(190, 130, 191, 20));
        txtPreco->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        txtMod = new QLineEdit(produtoUP);
        txtMod->setObjectName(QStringLiteral("txtMod"));
        txtMod->setGeometry(QRect(190, 160, 191, 20));
        label_3 = new QLabel(produtoUP);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 120, 71, 31));
        label_3->setFont(font);
        txtQtd = new QLineEdit(produtoUP);
        txtQtd->setObjectName(QStringLiteral("txtQtd"));
        txtQtd->setGeometry(QRect(190, 200, 191, 20));
        txtQtd->setInputMethodHints(Qt::ImhDigitsOnly);
        label_2 = new QLabel(produtoUP);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 81, 31));
        label_2->setFont(font);
        label_6 = new QLabel(produtoUP);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 230, 101, 31));
        label_6->setFont(font);
        label = new QLabel(produtoUP);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 10, 131, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        label_5 = new QLabel(produtoUP);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 190, 121, 31));
        label_5->setFont(font);
        txtNome = new QLineEdit(produtoUP);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(190, 100, 191, 20));
        txtDesc = new QLineEdit(produtoUP);
        txtDesc->setObjectName(QStringLiteral("txtDesc"));
        txtDesc->setGeometry(QRect(190, 240, 191, 81));
        label_7 = new QLabel(produtoUP);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(70, 60, 81, 31));
        label_7->setFont(font);
        txtCod = new QLineEdit(produtoUP);
        txtCod->setObjectName(QStringLiteral("txtCod"));
        txtCod->setGeometry(QRect(190, 70, 191, 20));
        txtCod->setInputMethodHints(Qt::ImhDigitsOnly);

        retranslateUi(produtoUP);

        QMetaObject::connectSlotsByName(produtoUP);
    } // setupUi

    void retranslateUi(QDialog *produtoUP)
    {
        produtoUP->setWindowTitle(QApplication::translate("produtoUP", "Dialog", Q_NULLPTR));
        label_4->setText(QApplication::translate("produtoUP", "Modelo:", Q_NULLPTR));
        label_3->setText(QApplication::translate("produtoUP", "Pre\303\247o:", Q_NULLPTR));
        label_2->setText(QApplication::translate("produtoUP", "Produto:", Q_NULLPTR));
        label_6->setText(QApplication::translate("produtoUP", "Descri\303\247\303\243o:", Q_NULLPTR));
        label->setText(QApplication::translate("produtoUP", "Produtos", Q_NULLPTR));
        label_5->setText(QApplication::translate("produtoUP", "Quantidade:", Q_NULLPTR));
        label_7->setText(QApplication::translate("produtoUP", "Cod:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class produtoUP: public Ui_produtoUP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUTOUP_H
