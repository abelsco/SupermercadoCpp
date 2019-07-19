#include "produtos.h"
#include "ui_produtos.h"


produtos::produtos(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::produtos)
{
    ui->setupUi(this);
}


void produtos::on_buttonBox_accepted()
{
    //ConexaoBanco *c = new ConexaoBanco();
    if(ui->txtNome->text().isEmpty() || ui->txtQtd->text().isEmpty() || ui->txtPreco->text().isEmpty())
        QMessageBox::warning(this,"Alerta","Os campos Nome, Quantidade e Preço são obrigatórios",QMessageBox::Accepted,0);
    else
    {
        produtoscpp *c = new produtoscpp(0,ui->txtNome->text(),ui->txtMod->text(),ui->txtDesc->text(),ui->txtQtd->text().toInt(),ui->txtPreco->text().toFloat());
        if(c->insereProduto(c->Nome,c->Modelo,c->Descricao,c->Quantidade,c->Preco))
        {
            QMessageBox::information(this,"Alerta","Cadastro efetuado",QMessageBox::Accepted,0);
            ui->txtDesc->setText("");
            ui->txtMod->setText("");
            ui->txtNome->setText("");
            ui->txtPreco->setText("");
            ui->txtQtd->setText("");
        }
        else
            QMessageBox::warning(this,"Alerta","Cadastro não efetuado",QMessageBox::Accepted,0);
    }

}
