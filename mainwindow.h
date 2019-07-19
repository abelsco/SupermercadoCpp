#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include "tabela.h"
#include "cliente.h"
#include "administrador.h"
#include "produtos.h"
#include "funcionario.h"
#include "busca.h"
#include "clienteup.h"
#include "administradorup.h"
#include "produtoup.h"
#include "funcionarioup.h"
#include "buscaup.h"
#include <QMainWindow>
#include "login.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void usuario(QString Usuario, QString Nome);
    void bloqueia();

private:
    Ui::MainWindow *ui;

public slots:
    void showCli();
    void showLogin();
    void showFunc();
    void showAdmin();
    void showProd();
    void showPedido();
    void showCliED();
    void showFuncED();
    void showAdminED();
    void showProdED();
    void showPedidoED();
    void showCliDEL();
    void showFuncDEL();
    void showAdminDEL();
    void showProdDEL();
    void showPedidoDEL();
    void showGanhosMes();
    void showGanhosAno();
    void showListarCli();
    void showListarProd();
    void showListarPed();
    void showListarAdmin();
    void showListarFunc();

};

#endif // MAINWINDOW_H
