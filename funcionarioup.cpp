#include "funcionarioup.h"
#include "ui_funcionarioup.h"

funcionarioUP::funcionarioUP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::funcionarioUP)
{
    ui->setupUi(this);
}



void funcionarioUP::on_buttonBox_2_accepted()
{
    funcionariocpp *c = new funcionariocpp(ui->txtCod->text().toInt(),ui->txtNome->text(),ui->txtCPF->text(),ui->txtEmail->text(),ui->txtSenha->text());
    if(valida=="ED")
    {
        if(ui->txtNome->text().isEmpty() || ui->txtCPF->text() =="..-" || ui->txtSenha->text().isEmpty() || ui->txtCod->text().isEmpty())
            QMessageBox::warning(this,"Alerta","Os campos Senha, Nome e CPF são obrigatórios",QMessageBox::Accepted,0);
        else
        {
            if(c->alteraFuncionario(*c))
            {
                QMessageBox::information(this,"Alerta","Cadastro alterado",QMessageBox::Accepted,0);
                ui->txtCPF->setText("");
                ui->txtEmail->setText("");
                ui->txtNome->setText("");
                ui->txtSenha->setText("");
                ui->txtCod->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Alteração não efetuada",QMessageBox::Accepted,0);
        }
    }
    else if(valida=="DEL")
    {
        if(ui->txtSenha->text().isEmpty() || ui->txtCod->text().isEmpty())
            QMessageBox::warning(this,"Alerta","Os campos Senha e Cod  são obrigatórios",QMessageBox::Accepted,0);
        else
        {
            if(c->deletaFuncionario(c->CodFunc,c->Senha))
            {
                QMessageBox::information(this,"Alerta","Cadastro deletado",QMessageBox::Accepted,0);
                ui->txtCPF->setText("");
                ui->txtEmail->setText("");
                ui->txtNome->setText("");
                ui->txtSenha->setText("");
                ui->txtCod->setText("");
            }else
                QMessageBox::warning(this,"Alerta","Exclusão não efetuada",QMessageBox::Accepted,0);
        }
    }

}
