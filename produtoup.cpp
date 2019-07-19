#include "produtoup.h"
#include "ui_produtoup.h"

produtoUP::produtoUP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produtoUP)
{
    ui->setupUi(this);
}


void produtoUP::on_buttonBox_accepted()
{
    produtoscpp *c = new produtoscpp(ui->txtCod->text().toInt(),ui->txtNome->text(),ui->txtMod->text(),ui->txtDesc->text(),ui->txtQtd->text().toInt(),ui->txtPreco->text().toFloat());
    if(valida=="ED")
    {
        if(ui->txtNome->text().isEmpty() || ui->txtQtd->text().isEmpty() || ui->txtPreco->text().isEmpty() || ui->txtCod->text().isEmpty())
            QMessageBox::warning(this,"Alerta","Os campos Nome, Quantidade, Preço e Cod são obrigatórios",QMessageBox::Accepted,0);
        else
        {
            if(c->alteraProduto(*c))
            {
                QMessageBox::information(this,"Alerta","Cadastro alterado",QMessageBox::Accepted,0);
                ui->txtDesc->setText("");
                ui->txtMod->setText("");
                ui->txtNome->setText("");
                ui->txtPreco->setText("");
                ui->txtQtd->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Alteração não efetuada",QMessageBox::Accepted,0);
        }
    }
    else if(valida=="DEL")
    {

        if(ui->txtCod->text().isEmpty())
            QMessageBox::warning(this,"Alerta","O Cod é obrigatório",QMessageBox::Accepted,0);
        else
        {
            if(c->deletaProduto(c->CodProduto))
            {
                QMessageBox::information(this,"Alerta","Cadastro deletado",QMessageBox::Accepted,0);
                ui->txtDesc->setText("");
                ui->txtMod->setText("");
                ui->txtNome->setText("");
                ui->txtPreco->setText("");
                ui->txtQtd->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Exclusão não efetuada",QMessageBox::Accepted,0);
        }
    }

}
