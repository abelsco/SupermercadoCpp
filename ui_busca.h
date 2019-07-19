/********************************************************************************
** Form generated from reading UI file 'busca.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUSCA_H
#define UI_BUSCA_H

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

class Ui_busca
{
public:
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label;
    QLineEdit *txtProd;
    QDialogButtonBox *buttonBox_2;
    QLineEdit *txtCli;
    QLineEdit *txtQtd;
    QLabel *label_4;

    void setupUi(QDialog *busca)
    {
        if (busca->objectName().isEmpty())
            busca->setObjectName(QStringLiteral("busca"));
        busca->resize(400, 300);
        label_3 = new QLabel(busca);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(60, 120, 81, 31));
        QFont font;
        font.setFamily(QStringLiteral("Century Gothic"));
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        label_3->setFont(font);
        label_2 = new QLabel(busca);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 90, 71, 31));
        label_2->setFont(font);
        label = new QLabel(busca);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 30, 171, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("Century Gothic"));
        font1.setPointSize(20);
        font1.setBold(false);
        font1.setWeight(50);
        label->setFont(font1);
        txtProd = new QLineEdit(busca);
        txtProd->setObjectName(QStringLiteral("txtProd"));
        txtProd->setGeometry(QRect(150, 130, 191, 20));
        txtProd->setInputMethodHints(Qt::ImhDigitsOnly);
        buttonBox_2 = new QDialogButtonBox(busca);
        buttonBox_2->setObjectName(QStringLiteral("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(220, 210, 156, 23));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        txtCli = new QLineEdit(busca);
        txtCli->setObjectName(QStringLiteral("txtCli"));
        txtCli->setGeometry(QRect(150, 100, 191, 20));
        txtCli->setInputMethodHints(Qt::ImhDigitsOnly);
        txtQtd = new QLineEdit(busca);
        txtQtd->setObjectName(QStringLiteral("txtQtd"));
        txtQtd->setGeometry(QRect(150, 160, 191, 20));
        txtQtd->setInputMethodHints(Qt::ImhDigitsOnly);
        label_4 = new QLabel(busca);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 150, 121, 31));
        label_4->setFont(font);

        retranslateUi(busca);

        QMetaObject::connectSlotsByName(busca);
    } // setupUi

    void retranslateUi(QDialog *busca)
    {
        busca->setWindowTitle(QApplication::translate("busca", "Dialog", Q_NULLPTR));
        label_3->setText(QApplication::translate("busca", "Produto:", Q_NULLPTR));
        label_2->setText(QApplication::translate("busca", "Cliente:", Q_NULLPTR));
        label->setText(QApplication::translate("busca", "Pedidos", Q_NULLPTR));
        label_4->setText(QApplication::translate("busca", "Quantidade:", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class busca: public Ui_busca {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUSCA_H
