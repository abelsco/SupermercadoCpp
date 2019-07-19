#include "login.h"
#include "ui_login.h"
#include "conexaobanco.h"
#include <QMessageBox>
#include "mainwindow.h"

Login::Login(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Login)
{
    ui->setupUi(this);
}
void Login::showMain()
{
    MainWindow *c = new MainWindow();
    c->show();

}
Login::~Login()
{
    delete ui;
}

void Login::on_buttonBox_accepted()
{
    ConexaoBanco *c = new ConexaoBanco();
    MainWindow *a = new MainWindow();
    if(ui->txtNome->text().isEmpty() || ui->txtNome->text().isEmpty())
    {
        QMessageBox::critical(this,"Alerta","Login inválido",QMessageBox::Accepted,NULL);
        this->show();
    }
    else
    {
        if(ui->rbtAdm->isChecked())
        {
            if(c->buscaLoginAdm(ui->txtNome->text(),ui->txtSenha->text()))
            {
                a->usuario("Administrador",ui->txtNome->text());
                //showMain();
                a->bloqueia();
                a->show();
            }
            else
            {
                QMessageBox::information(this,"Alerta","Login ou senha inválidos",QMessageBox::Accepted,NULL);
                this->show();
            }
        }
        else  if(ui->rbtFuncionario->isChecked())
        {
            if(c->buscaLoginFunc(ui->txtNome->text(),ui->txtSenha->text()))
            {
                a->usuario("Funcionario",ui->txtNome->text());
                a->bloqueia();
                a->show();

            }
            else
            {
                QMessageBox::information(this,"Alerta","Login ou senha inválidos",QMessageBox::Accepted,NULL);
                this->show();
            }
        }
    }
}


