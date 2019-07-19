#include "administrador.h"
#include "ui_administrador.h"


administrador::administrador(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::administrador)
{
    ui->setupUi(this);
}


void administrador::on_buttonBox_2_accepted()
{
    //ConexaoBanco *c = new ConexaoBanco;
    if(ui->txtNome->text().isEmpty() || ui->txtSenha->text().isEmpty() || ui->txtNome->text().isEmpty())
    {
        QMessageBox::warning(this,"Alerta","Os campos marcados com * são obrigatórios",QMessageBox::Accepted,0);
    }
    else
    {
        administradorcpp *c = new administradorcpp(0,ui->txtNome->text(),ui->txtSenhaP->text(),ui->txtSenha->text());
        if(c->insereAdminstrador(c->Nome,c->senhaP,c->senha)){
            QMessageBox::information(this,"Alerta","Cadastro efetuado",QMessageBox::Accepted,0);
            ui->txtNome->setText("");
            ui->txtSenha->setText("");
            ui->txtSenhaP->setText("");
        }
        else
            QMessageBox::warning(this,"Alerta","Cadastro não efetuado",QMessageBox::Accepted,0);
    }
}
