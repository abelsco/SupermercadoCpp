/********************************************************************************
** Form generated from reading UI file 'tabela.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABELA_H
#define UI_TABELA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_tabela
{
public:
    QTableView *tableView;

    void setupUi(QDialog *tabela)
    {
        if (tabela->objectName().isEmpty())
            tabela->setObjectName(QStringLiteral("tabela"));
        tabela->resize(812, 565);
        tableView = new QTableView(tabela);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 791, 511));

        retranslateUi(tabela);

        QMetaObject::connectSlotsByName(tabela);
    } // setupUi

    void retranslateUi(QDialog *tabela)
    {
        tabela->setWindowTitle(QApplication::translate("tabela", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tabela: public Ui_tabela {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TABELA_H
