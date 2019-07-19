#include "buscaup.h"
#include "ui_buscaup.h"

buscaUP::buscaUP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::buscaUP)
{
    ui->setupUi(this);
}


void buscaUP::on_buttonBox_2_accepted()
{
    Pedidoscpp *c = new Pedidoscpp(ui->txtCod->text().toInt(),ui->txtQtd->text().toInt(),ui->txtProd->text().toInt(),ui->txtCli->text().toInt());
    if(valida == "ED")
    {
        //ConexaoBanco *c = new ConexaoBanco();
        if(ui->txtCod->text().isEmpty() || ui->txtQtd->text().isEmpty() || ui->txtProd->text().isEmpty() || ui->txtCli->text().isEmpty())
        {
            QMessageBox::warning(this,"Alerta","Todos os campos são obrigatórios",QMessageBox::Accepted,0);
        }
        else
        {
            if(c->alteraPedido(*c))
            {
                QMessageBox::information(this,"Alerta","Cadastro alterado",QMessageBox::Accepted,0);
                ui->txtCli->setText("");
                ui->txtCod->setText("");
                ui->txtProd->setText("");
                ui->txtQtd->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Alteração não efetuada",QMessageBox::Accepted,0);
        }

    }
    else if(valida == "DEL")
    {
        //ConexaoBanco *c = new ConexaoBanco();
        if(ui->txtCod->text().isEmpty())
            QMessageBox::information(this,"Alerta","O campo Cod é obrigatório",QMessageBox::Accepted,0);
        else
        {
            if(c->deletaPedido(c->CodPedido))
            {
                ui->txtCli->setText("");
                ui->txtCod->setText("");
                ui->txtProd->setText("");
                ui->txtQtd->setText("");
                QMessageBox::information(this,"Alerta","Cadastro excluido",QMessageBox::Accepted,0);
            }
            else
                QMessageBox::warning(this,"Alerta","Exclusão não efetuada",QMessageBox::Accepted,0);
        }
    }
}
