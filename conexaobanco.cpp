#include "conexaobanco.h"
#include <QtSql>
#include <QVariant>
#include <ctime>

ConexaoBanco::ConexaoBanco()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setPort(3306);
    //criaBanco();
    db.setDatabaseName("projeto");
    db.setUserName("root");
    db.setPassword("");
    
    if(db.open())
        qDebug() << "Conectado" << db.hostName();
    
}

ConexaoBanco::~ConexaoBanco()
{
    QSqlDatabase::removeDatabase("projeto");
    db.close();
}

bool ConexaoBanco::buscaLoginAdm(QString Nome, QString Senha)
{
    QSqlQuery query;
    
    query.prepare("SELECT Nome, Senha FROM Administrador where Nome = :nome and Senha = :senha");
    query.bindValue(":nome", Nome);
    query.bindValue(":senha", Senha);
    query.exec();
    while(query.next()){
        return true;
    }
    
    return false;
}

bool ConexaoBanco::buscaLoginFunc(QString Nome, QString Senha)
{
    QSqlQuery query;
    
    query.prepare("SELECT Nome, Senha FROM Funcionario where Nome = :nome and Senha = :senha");
    query.bindValue(":nome", Nome);
    query.bindValue(":senha", Senha);
    query.exec();
    while(query.next()){
        return true;
    }
    
    return false;
}



