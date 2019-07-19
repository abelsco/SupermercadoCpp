#include "clienteup.h"
#include "ui_clienteup.h"


clienteUP::clienteUP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::clienteUP)
{
    ui->setupUi(this);
}



void clienteUP::on_buttonBox_2_accepted()
{
    clientecpp *c = new clientecpp(ui->txtCod->text().toInt(),ui->txtNome->text(),ui->txtCPF->text(),ui->txtEmail->text());
    //clientecpp *c = new clientecpp();


    if(valida=="ED")
    {
        if(ui->txtCod->text().isEmpty() || ui->txtNome->text().isEmpty() || ui->txtCPF->text() == "..-")
            QMessageBox::warning(this,"Alerta","Os campos Cod, Nome e CPF são obrigatórios",QMessageBox::Accepted,0);
        else {
            if(c->alteraCliente(*c))
                QMessageBox::information(this,"Alerta","Cadastro alterado",QMessageBox::Accepted,0);
            else
                QMessageBox::warning(this,"Alerta","Cadastro não alterado",QMessageBox::Accepted,0);
            ui->txtCod->setText("");
            ui->txtNome->setText("");
            ui->txtCPF->setText("");
            ui->txtEmail->setText("");


        }
    }
    else if(valida=="DEL")
    {
        if(ui->txtCod->text().isEmpty())
            QMessageBox::warning(this,"Alerta","O campos Cod é obrigatório",QMessageBox::Accepted,0);
        else
        {
            if(c->deletaCliente(c->CodCliente))
                QMessageBox::information(this,"Alerta","Cadastro deletado",QMessageBox::Accepted,0);
            else
                QMessageBox::warning(this,"Alerta","Cadastro não excluido",QMessageBox::Accepted,0);
            ui->txtCod->setText("");
            ui->txtNome->setText("");
            ui->txtCPF->setText("");
            ui->txtEmail->setText("");
        }
    }
}
