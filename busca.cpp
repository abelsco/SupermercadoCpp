#include "busca.h"
#include "ui_busca.h"
#include "conexaobanco.h"


busca::busca(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::busca)
{
    ui->setupUi(this);
}



void busca::on_buttonBox_2_accepted()
{
    //ConexaoBanco *c = new ConexaoBanco();
    Pedidoscpp *c = new Pedidoscpp(0,ui->txtQtd->text().toInt(),ui->txtProd->text().toInt(),ui->txtCli->text().toInt());

    if(ui->txtCli->text().isEmpty() || ui->txtQtd->text().isEmpty() || ui->txtProd->text().isEmpty())
    {
        QMessageBox::warning(this,"Alerta","Todos os campos são obrigatórios",QMessageBox::Accepted,0);
    }
    else
    {
        if(c->inserePedido(c->Quantidades,c->CodProduto,c->CodClientes)){
            ui->txtCli->setText("");
            ui->txtQtd->setText("");
            ui->txtProd->setText("");
            QMessageBox::information(this,"Alerta","Cadastro efetuado",QMessageBox::Accepted,0);
        }
        else
            QMessageBox::warning(this,"Alerta","Cadastro não efetuado",QMessageBox::Accepted,0);
    }
}
