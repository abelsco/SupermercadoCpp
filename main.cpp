#include "login.h"
#include "mainwindow.h"
#include "conexaobanco.h"
#include <QApplication>
#include "teste.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Login w;
    ConexaoBanco *c = new ConexaoBanco();
    w.show();
    //mainwindow w;
    /*teste *c = new teste();
    ConexaoBanco *con = new ConexaoBanco();
    c->testeLoginAdm("admin","admin");
    c->testeLoginAdm("admin","");
    c->testeLoginFunc("admin","admin");
    c->testeLoginFunc("admin","");
    c->testeCadCli("teste","teste","teste");*/

    return a.exec();
}
