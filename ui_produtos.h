/********************************************************************************
** Form generated from reading UI file 'produtos.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUTOS_H
#define UI_PRODUTOS_H

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

class Ui_produtos
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QLineEdit *txtNome;
    QLineEdit *txtPreco;
    QLabel *label_2;
    QLineEdit *txtMod;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *txtQtd;
    QLabel *label_6;
    QLineEdit *txtDesc;

    void setupUi(QDialog *produtos)
    {
        if (produtos->objectName().isEmpty())
            produtos->setObjectName(QStringLiteral("produtos"));
        produtos->resize(460, 411);
        buttonBox = new QDialogButtonBox(produtos);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(100, 360, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        label = new QLabel(produtos);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 361, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(20);
        font.setBold(false);
        font.setWeight(50);
        label->setFont(font);
        txtNome = new QLineEdit(produtos);
        txtNome->setObjectName(QStringLiteral("txtNome"));
        txtNome->setGeometry(QRect(190, 100, 191, 20));
        txtPreco = new QLineEdit(produtos);
        txtPreco->setObjectName(QStringLiteral("txtPreco"));
        txtPreco->setGeometry(QRect(190, 130, 191, 20));
        txtPreco->setInputMethodHints(Qt::ImhFormattedNumbersOnly);
        label_2 = new QLabel(produtos);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 81, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(11);
        font1.setBold(false);
        font1.setWeight(50);
        label_2->setFont(font1);
        txtMod = new QLineEdit(produtos);
        txtMod->setObjectName(QStringLiteral("txtMod"));
        txtMod->setGeometry(QRect(190, 160, 191, 20));
        label_3 = new QLabel(produtos);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 120, 71, 31));
        label_3->setFont(font1);
        label_4 = new QLabel(produtos);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(70, 150, 81, 31));
        label_4->setFont(font1);
        label_5 = new QLabel(produtos);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(50, 190, 121, 31));
        label_5->setFont(font1);
        txtQtd = new QLineEdit(produtos);
        txtQtd->setObjectName(QStringLiteral("txtQtd"));
        txtQtd->setGeometry(QRect(190, 200, 191, 20));
        txtQtd->setInputMethodHints(Qt::ImhDigitsOnly);
        label_6 = new QLabel(produtos);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(50, 230, 101, 31));
        label_6->setFont(font1);
        txtDesc = new QLineEdit(produtos);
        txtDesc->setObjectName(QStringLiteral("txtDesc"));
        txtDesc->setGeometry(QRect(190, 240, 191, 81));
        txtDesc->setInputMethodHints(Qt::ImhMultiLine);

        retranslateUi(produtos);
        QObject::connect(buttonBox, SIGNAL(accepted()), produtos, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), produtos, SLOT(reject()));

        QMetaObject::connectSlotsByName(produtos);
    } // setupUi

    void retranslateUi(QDialog *produtos)
    {
        produtos->setWindowTitle(QApplication::translate("produtos", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("produtos", "Cadastro de Produtos", Q_NULLPTR));
        label_2->setText(QApplication::translate("produtos", "Produto:", Q_NULLPTR));
        label_3->setText(QApplication::translate("produtos", "Pre\303\247o:", Q_NULLPTR));
        label_4->setText(QApplication::translate("produtos", "Modelo:", Q_NULLPTR));
        label_5->setText(QApplication::translate("produtos", "Quantidade:", Q_NULLPTR));
        label_6->setText(QApplication::translate("produtos", "Descri\303\247\303\243o:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class produtos: public Ui_produtos {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUTOS_H
