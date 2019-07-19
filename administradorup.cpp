#include "administradorup.h"
#include "ui_administradorup.h"


administradorUP::administradorUP(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::administradorUP)
{
    ui->setupUi(this);
}



void administradorUP::on_buttonBox_2_accepted()
{


    if(valida == "ED")
    {
        if(ui->txtCod->text().isEmpty() || ui->txtNome->text().isEmpty() || ui->txtSenhaP->text().isEmpty() || ui->txtSenha->text().isEmpty())
        {
            QMessageBox::warning(this,"Alerta","Os campos marcados são obrigatórios",QMessageBox::Accepted,0);
        }
        else
        {
            administradorcpp *c = new administradorcpp(ui->txtCod->text().toInt(),ui->txtNome->text(),ui->txtSenhaP->text(),ui->txtSenha->text());
            //ConexaoBanco *c = new ConexaoBanco();
            if(c->alteraAdminstrador(*c)){
                QMessageBox::information(this,"Alerta","Alteração efetuada",QMessageBox::Accepted,0);
                ui->txtCod->setText("");
                ui->txtNome->setText("");
                ui->txtSenha->setText("");
                ui->txtSenhaP->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Alteração não efetuada",QMessageBox::Accepted,0);
        }
    }
    else if(valida == "DEL")
    {
        if(ui->txtCod->text().isEmpty() || ui->txtSenhaP->text().isEmpty())
        {
            QMessageBox::warning(this,"Alerta","Os campos Cod e Senha Pessoal são obrigatórios",QMessageBox::Accepted,0);
        }
        else
        {
            //ConexaoBanco *c = new ConexaoBanco();
            administradorcpp *c = new administradorcpp(ui->txtCod->text().toInt(),ui->txtNome->text(),ui->txtSenhaP->text(),ui->txtSenha->text());
            if(c->deletaAdminstrador(c->CodAdmin,c->senhaP)){
                QMessageBox::information(this,"Alerta","Exclusão efetuada",QMessageBox::Accepted,0);
                ui->txtCod->setText("");
                ui->txtNome->setText("");
                ui->txtSenha->setText("");
                ui->txtSenhaP->setText("");
            }
            else
                QMessageBox::warning(this,"Alerta","Exclusão não efetuada",QMessageBox::Accepted,0);
        }
    }
}
