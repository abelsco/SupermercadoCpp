#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

}
void MainWindow::usuario(QString Usuario, QString Nome)
{
    ui->lblNome->setText(Nome);
    ui->lblUsu->setText(Usuario);
}
void MainWindow::bloqueia()
{
    if(ui->lblUsu->text() == "Funcionario")
    {
        ui->actionEdPedido->setEnabled(false);
        ui->actionDELPedido->setEnabled(false);
        ui->actionEdAdmin->setEnabled(false);
        ui->actionDELAdmin->setEnabled(false);
    }
    if(ui->lblUsu->text() == "Administrador")
    {
        ui->actionEdPedido->setEnabled(true);
        ui->actionDELPedido->setEnabled(true);
        ui->actionEdAdmin->setEnabled(true);
        ui->actionDELAdmin->setEnabled(true);
    }
}
void MainWindow::showLogin()
{
    Login *a = new Login();
    this->close();
    a->show();
}


//--------------------------------------------------
void MainWindow::showCli()
{
    cliente *c = new cliente();
    c->setWindowTitle("Cliente");
    c->show();
}
void MainWindow::showCliED()
{
    tabela *tab = new tabela();
    clienteUP *c = new clienteUP();
    c->valida = "ED";
    c->setWindowTitle("Cliente - EDIÇÃO");
    tab->setWindowTitle("Cliente");
    tab->criaTabela("SELECT * FROM Cliente ORDER BY CodCliente");
    c->show();
}
void MainWindow::showCliDEL()
{
    tabela *tab = new tabela();
    clienteUP *c = new clienteUP();
    c->valida = "DEL";
    c->setWindowTitle("Cliente - EXCLUSÃO");
    tab->setWindowTitle("Cliente");
    tab->criaTabela("SELECT * FROM Cliente ORDER BY CodCliente");

    c->show();
}
void MainWindow::showListarCli()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Cliente");
    tab->criaTabela("SELECT * FROM Cliente");
}

//--------------------------------------------------
void MainWindow::showFunc()
{
    funcionario *c = new funcionario();
    c->setWindowTitle("Funcionário");
    c->show();
}
void MainWindow::showFuncED()
{
    tabela *tab = new tabela();
    funcionarioUP *c = new funcionarioUP();
    c->valida = "ED";
    c->setWindowTitle("Funcionário - EDIÇAÕ");
    tab->setWindowTitle("Funcionário");
    tab->criaTabela("SELECT CodFunc, Nome, CPF, Email FROM Funcionario ORDER BY CodFunc");
    c->show();
}
void MainWindow::showFuncDEL()
{
    tabela *tab = new tabela();
    funcionarioUP *c = new funcionarioUP();
    c->valida = "DEL";
    c->setWindowTitle("Funcionário - EXCLUSÃO");
    tab->setWindowTitle("Funcionário");
    tab->criaTabela("SELECT CodFunc, Nome, CPF, Email FROM Funcionario ORDER BY CodFunc");

    c->show();
}

void MainWindow::showListarFunc()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Funcionário");
    tab->criaTabela("SELECT CodFunc, Nome, CPF, Email FROM Funcionario ORDER BY CodFunc");
}
//--------------------------------------------------
void MainWindow::showAdmin()
{
    administrador *c = new administrador();
    c->setWindowTitle("Administrador");
    c->show();
}
void MainWindow::showAdminED()
{
    tabela *tab = new tabela();
    administradorUP *c = new administradorUP();
    c->valida = "ED";
    c->setWindowTitle("Administrador - EDIÇÃO");
    tab->setWindowTitle("Administrador");
    tab->criaTabela("SELECT CodAdmin, Nome FROM Administrador");
    c->show();
}
void MainWindow::showAdminDEL()
{
    tabela *tab = new tabela();
    administradorUP *c = new administradorUP();
    c->valida = "DEL";
    c->setWindowTitle("Administrador - EXCLUSÃO");
    tab->setWindowTitle("Administrador");
    tab->criaTabela("SELECT CodAdmin, Nome FROM Administrador");

    c->show();
}
void MainWindow::showListarAdmin()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Administrador");
    tab->criaTabela("SELECT CodAdmin, Nome FROM Administrador");
}
//--------------------------------------------------
void MainWindow::showProd()
{
    produtos *c = new produtos();
    c->setWindowTitle("Produtos");
    c->show();
}

void MainWindow::showProdED()
{
    tabela *tab = new tabela();
    produtoUP *c = new produtoUP();
    c->valida = "ED";
    c->setWindowTitle("Produtos - EDIÇÃO");
    tab->setWindowTitle("Produtos");
    tab->criaTabela("SELECT * FROM Produto");

    c->show();
}
void MainWindow::showProdDEL()
{
    tabela *tab = new tabela();
    produtoUP *c = new produtoUP();
    c->valida = "DEL";
    c->setWindowTitle("Produtos - EXCLUSÃO");
    tab->setWindowTitle("Produtos");
    tab->criaTabela("SELECT * FROM Produto");

    c->show();
}
void MainWindow::showListarProd()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Produtos");
    tab->criaTabela("SELECT * FROM Produto");
}
//--------------------------------------------------
void MainWindow::showPedido()
{
    tabela *tab1 = new tabela();
    tabela *tab2 = new tabela();
    busca *c = new busca();

    tab1->setWindowTitle("Cliente");
    tab2->setWindowTitle("Produtos");
    tab1->criaTabela("SELECT * FROM Cliente");
    tab2->criaTabela("SELECT * FROM Produto");
    c->setWindowTitle("Pedidos");
    c->show();
}
void MainWindow::showPedidoED()
{
    tabela *tab = new tabela();
    buscaUP *c = new buscaUP();
    c->valida = "ED";
    tab->setWindowTitle("Pedidos");
    tab->criaTabela("SELECT * FROM Pedidos");
    c->setWindowTitle("Pedidos - EDIÇÃO");

    c->show();
}
void MainWindow::showPedidoDEL()
{
    tabela *tab = new tabela();
    buscaUP *c = new buscaUP();
    c->valida = "DEL";
    c->setWindowTitle("Pedidos - EXCLUSÃO");
    tab->setWindowTitle("Pedidos");
    tab->criaTabela("SELECT * FROM Pedidos");
    c->show();
}
void MainWindow::showListarPed()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Pedidos");
    tab->criaTabela("SELECT * FROM Pedidos");

}
//--------------------------------------------------
void MainWindow::showGanhosMes()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Ganhos Mês");
    tab->criaTabela("Select sum(Ganhos.GanhoMes) as 'Ganhos do mês', count(Pedidos.CodPedido) as 'Numero de de pedidos', Pedidos.Mes as 'Mês', Pedidos.Ano as 'Ano'"
                    "from Ganhos  right join Pedidos on Ganhos.CodPedido = Pedidos.CodPedido group BY Pedidos.Mes order by Pedidos.Ano");
}
void MainWindow::showGanhosAno()
{
    tabela *tab = new tabela();
    tab->setWindowTitle("Ganhos Anual");
    tab->criaTabela("Select sum(Ganhos.GanhoMes) as 'Ganhos do ano', count(Pedidos.CodPedido) as 'Numero de de pedidos', Pedidos.Mes as 'Mês', Pedidos.Ano as 'Ano' "
                    "from Ganhos  right join Pedidos on Ganhos.CodPedido = Pedidos.CodPedido group BY Pedidos.Ano");
}
MainWindow::~MainWindow()
{
    delete ui;
}
