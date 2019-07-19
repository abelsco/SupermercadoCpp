#include "funcionario.h"
#include "ui_funcionario.h"


funcionario::funcionario(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::funcionario)
{
    ui->setupUi(this);
}


void funcionario::on_buttonBox_2_accepted()
{
    if(ui->txtNome->text().isEmpty() || ui->txtCPF->text() =="..-" || ui->txtSenha->text().isEmpty())
        QMessageBox::warning(this,"Alerta","Os campos Senha, Nome e CPF são obrigatórios",QMessageBox::Accepted,0);
    else {
        funcionariocpp *c = new funcionariocpp(0,ui->txtNome->text(),ui->txtCPF->text(),ui->txtEmail->text(),ui->txtSenha->text());
        //ConexaoBanco *c = new ConexaoBanco();
        if(c->insereFuncionario(c->Nome,c->CPF,c->Email,c->Senha))
        {
            QMessageBox::information(this,"Alerta","Cadastro efetuado",QMessageBox::Accepted,0);
            ui->txtCPF->setText("");
            ui->txtEmail->setText("");
            ui->txtNome->setText("");
            ui->txtSenha->setText("");

        }else
            QMessageBox::warning(this,"Alerta","Cadastro não efetuado",QMessageBox::Accepted,0);
    }
}
