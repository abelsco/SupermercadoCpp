/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionCadastroCli;
    QAction *actionEdCli;
    QAction *actionDELCli;
    QAction *actionCadastroFun;
    QAction *actionEdFun;
    QAction *actionCadastroPed;
    QAction *actionEdi_o_3;
    QAction *actionCadastroAdm;
    QAction *actionCadastroPro;
    QAction *actionEdPedido;
    QAction *actionDELFunc;
    QAction *actionDELPedido;
    QAction *actionEdAdmin;
    QAction *actionDELAdmin;
    QAction *actionEdProd;
    QAction *actionDELProd;
    QAction *actionMes;
    QAction *actionAnual;
    QAction *actionSair;
    QAction *actionListarCli;
    QAction *actionListarFunc;
    QAction *actionListarPed;
    QAction *actionListarAdmin;
    QAction *actionListarProd;
    QWidget *centralwidget;
    QLabel *lblUsu;
    QLabel *lblNome;
    QLabel *label;
    QLabel *label_2;
    QMenuBar *menuBar;
    QMenu *menuFuncionarios;
    QMenu *menuPedidos;
    QMenu *menuAdministrador;
    QMenu *menuCliente;
    QMenu *menuProduto;
    QMenu *menuGanhos;
    QMenu *menuSair;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(800, 600);
        actionCadastroCli = new QAction(MainWindow);
        actionCadastroCli->setObjectName(QStringLiteral("actionCadastroCli"));
        actionEdCli = new QAction(MainWindow);
        actionEdCli->setObjectName(QStringLiteral("actionEdCli"));
        actionEdCli->setCheckable(false);
        actionEdCli->setEnabled(true);
        actionDELCli = new QAction(MainWindow);
        actionDELCli->setObjectName(QStringLiteral("actionDELCli"));
        actionCadastroFun = new QAction(MainWindow);
        actionCadastroFun->setObjectName(QStringLiteral("actionCadastroFun"));
        actionEdFun = new QAction(MainWindow);
        actionEdFun->setObjectName(QStringLiteral("actionEdFun"));
        actionCadastroPed = new QAction(MainWindow);
        actionCadastroPed->setObjectName(QStringLiteral("actionCadastroPed"));
        actionEdi_o_3 = new QAction(MainWindow);
        actionEdi_o_3->setObjectName(QStringLiteral("actionEdi_o_3"));
        actionCadastroAdm = new QAction(MainWindow);
        actionCadastroAdm->setObjectName(QStringLiteral("actionCadastroAdm"));
        actionCadastroPro = new QAction(MainWindow);
        actionCadastroPro->setObjectName(QStringLiteral("actionCadastroPro"));
        actionEdPedido = new QAction(MainWindow);
        actionEdPedido->setObjectName(QStringLiteral("actionEdPedido"));
        actionDELFunc = new QAction(MainWindow);
        actionDELFunc->setObjectName(QStringLiteral("actionDELFunc"));
        actionDELPedido = new QAction(MainWindow);
        actionDELPedido->setObjectName(QStringLiteral("actionDELPedido"));
        actionEdAdmin = new QAction(MainWindow);
        actionEdAdmin->setObjectName(QStringLiteral("actionEdAdmin"));
        actionDELAdmin = new QAction(MainWindow);
        actionDELAdmin->setObjectName(QStringLiteral("actionDELAdmin"));
        actionEdProd = new QAction(MainWindow);
        actionEdProd->setObjectName(QStringLiteral("actionEdProd"));
        actionDELProd = new QAction(MainWindow);
        actionDELProd->setObjectName(QStringLiteral("actionDELProd"));
        actionMes = new QAction(MainWindow);
        actionMes->setObjectName(QStringLiteral("actionMes"));
        actionAnual = new QAction(MainWindow);
        actionAnual->setObjectName(QStringLiteral("actionAnual"));
        actionSair = new QAction(MainWindow);
        actionSair->setObjectName(QStringLiteral("actionSair"));
        actionListarCli = new QAction(MainWindow);
        actionListarCli->setObjectName(QStringLiteral("actionListarCli"));
        actionListarFunc = new QAction(MainWindow);
        actionListarFunc->setObjectName(QStringLiteral("actionListarFunc"));
        actionListarPed = new QAction(MainWindow);
        actionListarPed->setObjectName(QStringLiteral("actionListarPed"));
        actionListarAdmin = new QAction(MainWindow);
        actionListarAdmin->setObjectName(QStringLiteral("actionListarAdmin"));
        actionListarProd = new QAction(MainWindow);
        actionListarProd->setObjectName(QStringLiteral("actionListarProd"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        lblUsu = new QLabel(centralwidget);
        lblUsu->setObjectName(QStringLiteral("lblUsu"));
        lblUsu->setGeometry(QRect(110, 40, 171, 17));
        lblNome = new QLabel(centralwidget);
        lblNome->setObjectName(QStringLiteral("lblNome"));
        lblNome->setGeometry(QRect(120, 70, 161, 17));
        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 121, 20));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 70, 121, 17));
        MainWindow->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 800, 22));
        menuFuncionarios = new QMenu(menuBar);
        menuFuncionarios->setObjectName(QStringLiteral("menuFuncionarios"));
        menuPedidos = new QMenu(menuBar);
        menuPedidos->setObjectName(QStringLiteral("menuPedidos"));
        menuAdministrador = new QMenu(menuBar);
        menuAdministrador->setObjectName(QStringLiteral("menuAdministrador"));
        menuCliente = new QMenu(menuBar);
        menuCliente->setObjectName(QStringLiteral("menuCliente"));
        menuProduto = new QMenu(menuBar);
        menuProduto->setObjectName(QStringLiteral("menuProduto"));
        menuGanhos = new QMenu(menuBar);
        menuGanhos->setObjectName(QStringLiteral("menuGanhos"));
        menuSair = new QMenu(menuBar);
        menuSair->setObjectName(QStringLiteral("menuSair"));
        MainWindow->setMenuBar(menuBar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menuBar->addAction(menuCliente->menuAction());
        menuBar->addAction(menuFuncionarios->menuAction());
        menuBar->addAction(menuPedidos->menuAction());
        menuBar->addAction(menuAdministrador->menuAction());
        menuBar->addAction(menuProduto->menuAction());
        menuBar->addAction(menuGanhos->menuAction());
        menuBar->addAction(menuSair->menuAction());
        menuFuncionarios->addAction(actionCadastroFun);
        menuFuncionarios->addAction(actionEdFun);
        menuFuncionarios->addAction(actionDELFunc);
        menuFuncionarios->addAction(actionListarFunc);
        menuPedidos->addAction(actionCadastroPed);
        menuPedidos->addAction(actionEdPedido);
        menuPedidos->addAction(actionDELPedido);
        menuPedidos->addAction(actionListarPed);
        menuAdministrador->addAction(actionCadastroAdm);
        menuAdministrador->addAction(actionEdAdmin);
        menuAdministrador->addAction(actionDELAdmin);
        menuAdministrador->addAction(actionListarAdmin);
        menuCliente->addAction(actionCadastroCli);
        menuCliente->addAction(actionEdCli);
        menuCliente->addAction(actionDELCli);
        menuCliente->addAction(actionListarCli);
        menuProduto->addAction(actionCadastroPro);
        menuProduto->addAction(actionEdProd);
        menuProduto->addAction(actionDELProd);
        menuProduto->addAction(actionListarProd);
        menuGanhos->addSeparator();
        menuGanhos->addAction(actionMes);
        menuGanhos->addAction(actionAnual);
        menuSair->addAction(actionSair);

        retranslateUi(MainWindow);
        QObject::connect(actionCadastroCli, SIGNAL(triggered()), MainWindow, SLOT(showCli()));
        QObject::connect(actionCadastroFun, SIGNAL(triggered()), MainWindow, SLOT(showFunc()));
        QObject::connect(actionCadastroAdm, SIGNAL(triggered()), MainWindow, SLOT(showAdmin()));
        QObject::connect(actionCadastroPro, SIGNAL(triggered()), MainWindow, SLOT(showProd()));
        QObject::connect(actionCadastroPed, SIGNAL(triggered()), MainWindow, SLOT(showPedido()));
        QObject::connect(actionEdCli, SIGNAL(triggered()), MainWindow, SLOT(showCliED()));
        QObject::connect(actionDELCli, SIGNAL(triggered()), MainWindow, SLOT(showCliDEL()));
        QObject::connect(actionEdFun, SIGNAL(triggered()), MainWindow, SLOT(showFuncED()));
        QObject::connect(actionDELFunc, SIGNAL(triggered()), MainWindow, SLOT(showFuncDEL()));
        QObject::connect(actionEdPedido, SIGNAL(triggered()), MainWindow, SLOT(showPedidoED()));
        QObject::connect(actionDELPedido, SIGNAL(triggered()), MainWindow, SLOT(showPedidoDEL()));
        QObject::connect(actionEdAdmin, SIGNAL(triggered()), MainWindow, SLOT(showAdminED()));
        QObject::connect(actionDELAdmin, SIGNAL(triggered()), MainWindow, SLOT(showAdminDEL()));
        QObject::connect(actionEdProd, SIGNAL(triggered()), MainWindow, SLOT(showProdED()));
        QObject::connect(actionDELProd, SIGNAL(triggered()), MainWindow, SLOT(showProdDEL()));
        QObject::connect(actionMes, SIGNAL(triggered()), MainWindow, SLOT(showGanhosMes()));
        QObject::connect(actionAnual, SIGNAL(triggered()), MainWindow, SLOT(showGanhosAno()));
        QObject::connect(actionSair, SIGNAL(triggered()), MainWindow, SLOT(showLogin()));
        QObject::connect(actionListarCli, SIGNAL(triggered()), MainWindow, SLOT(showListarCli()));
        QObject::connect(actionListarFunc, SIGNAL(triggered()), MainWindow, SLOT(showListarFunc()));
        QObject::connect(actionListarPed, SIGNAL(triggered()), MainWindow, SLOT(showListarPed()));
        QObject::connect(actionListarProd, SIGNAL(triggered()), MainWindow, SLOT(showListarProd()));
        QObject::connect(actionListarAdmin, SIGNAL(triggered()), MainWindow, SLOT(showListarAdmin()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionCadastroCli->setText(QApplication::translate("MainWindow", "Cadastro", Q_NULLPTR));
        actionEdCli->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionDELCli->setText(QApplication::translate("MainWindow", "Exclus\303\243o", Q_NULLPTR));
        actionCadastroFun->setText(QApplication::translate("MainWindow", "Cadastro", Q_NULLPTR));
        actionEdFun->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionCadastroPed->setText(QApplication::translate("MainWindow", "Cadastro", Q_NULLPTR));
        actionEdi_o_3->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionCadastroAdm->setText(QApplication::translate("MainWindow", "Cadastro", Q_NULLPTR));
        actionCadastroPro->setText(QApplication::translate("MainWindow", "Cadastro", Q_NULLPTR));
        actionEdPedido->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionDELFunc->setText(QApplication::translate("MainWindow", "Exclus\303\243o", Q_NULLPTR));
        actionDELPedido->setText(QApplication::translate("MainWindow", "Exclus\303\243o", Q_NULLPTR));
        actionEdAdmin->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionDELAdmin->setText(QApplication::translate("MainWindow", "Exclus\303\243o", Q_NULLPTR));
        actionEdProd->setText(QApplication::translate("MainWindow", "Edi\303\247\303\243o", Q_NULLPTR));
        actionDELProd->setText(QApplication::translate("MainWindow", "Exclus\303\243o", Q_NULLPTR));
        actionMes->setText(QApplication::translate("MainWindow", "Mensal", Q_NULLPTR));
        actionAnual->setText(QApplication::translate("MainWindow", "Anual", Q_NULLPTR));
        actionSair->setText(QApplication::translate("MainWindow", "Sair", Q_NULLPTR));
        actionListarCli->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarFunc->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarPed->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarAdmin->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        actionListarProd->setText(QApplication::translate("MainWindow", "Listar", Q_NULLPTR));
        lblUsu->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        lblNome->setText(QApplication::translate("MainWindow", "-", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "N\303\255vel de Usuario:", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Nome do Usuario:", Q_NULLPTR));
        menuFuncionarios->setTitle(QApplication::translate("MainWindow", "Funcionarios", Q_NULLPTR));
        menuPedidos->setTitle(QApplication::translate("MainWindow", "Pedidos", Q_NULLPTR));
        menuAdministrador->setTitle(QApplication::translate("MainWindow", "Administrador", Q_NULLPTR));
        menuCliente->setTitle(QApplication::translate("MainWindow", "Cliente", Q_NULLPTR));
        menuProduto->setTitle(QApplication::translate("MainWindow", "Produto", Q_NULLPTR));
        menuGanhos->setTitle(QApplication::translate("MainWindow", "Ganhos", Q_NULLPTR));
        menuSair->setTitle(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
