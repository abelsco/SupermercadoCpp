#include "teste.h"
#include "conexaobanco.h"
#include "pedidoscpp.h"
#include "administradorcpp.h"
#include "funcionariocpp.h"
#include "produtoscpp.h"
#include "clientecpp.h"
#include <QTextStream>

teste::teste()
{

}

bool teste::testeLoginFunc(QString Nome, QString Senha)
{
    ConexaoBanco *c = new ConexaoBanco();
    QTextStream out(stdout);
    if(c->buscaLoginFunc(Nome,Senha)){
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}

bool teste::testeLoginAdm(QString Nome, QString Senha)
{
    ConexaoBanco *c = new ConexaoBanco();
    QTextStream out(stdout);
    if(c->buscaLoginAdm(Nome,Senha)){
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}

bool teste::testeCadCli(QString Nome, QString CPF, QString Email)
{
    //ConexaoBanco *c = new ConexaoBanco();
    clientecpp *c = new clientecpp(0,Nome,CPF,Email);
    QTextStream out(stdout);
    if(c->insereCliente(Nome,CPF,Email))
    {
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}


bool teste::testeCadProd(QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco)
{
    //ConexaoBanco *c = new ConexaoBanco();
    produtoscpp *c = new produtoscpp(0,Nome,Modelo,Descricao,Quantidade,Preco);
    QTextStream out(stdout);
    if(c->insereProduto(Nome,Modelo,Descricao,Quantidade,Preco))
    {
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}
bool teste::testeCadAdmin(QString Nome, QString SenhaPessoal, QString Senha)
{
    //ConexaoBanco *c = new ConexaoBanco();
    administradorcpp *c = new administradorcpp(0,Nome,SenhaPessoal,Senha);
    QTextStream out(stdout);
    if(c->insereAdminstrador(Nome,SenhaPessoal,Senha))
    {
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}
bool teste::testeCadFunc(QString Nome, QString CPF, QString Email, QString Senha)
{
    //ConexaoBanco *c = new ConexaoBanco();
    funcionariocpp *c = new funcionariocpp(0,Nome,CPF,Email,Senha);
    QTextStream out(stdout);
    if(c->insereFuncionario(Nome,CPF,Email,Senha))
    {
        out << "Passou\n";
    }
    else
    {
        out << "Não passou\n";
    }
}
