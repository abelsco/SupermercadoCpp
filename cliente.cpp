#include "cliente.h"
#include "ui_cliente.h"

#include "conexaobanco.h"

cliente::cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cliente)
{
    ui->setupUi(this);
}


void cliente::on_buttonBox_2_accepted()
{
    //ConexaoBanco *c = new ConexaoBanco();
    if(ui->txtNome->text() == "" || ui->txtCPF->text() == "..-")
        QMessageBox::warning(this,"Alerta","Os campos Nome e CPF são obrigatórios",QMessageBox::Accepted,0);
    else
    {
        clientecpp *c = new clientecpp(0,ui->txtNome->text(),ui->txtCPF->text(),ui->txtEmail->text());
        if(c->insereCliente(c->Nome,c->CPF,c->Email))
        {
            ui->txtCPF->setText("");
            ui->txtNome->setText("");
            ui->txtEmail->setText("");
            QMessageBox::information(this,"Alerta","Cadastro efetuado",QMessageBox::Accepted,0);
        }
        else
            QMessageBox::warning(this,"Alerta","Cadastro não efetuado",QMessageBox::Accepted,0);
    }
}
