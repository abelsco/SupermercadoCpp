#include "clientecpp.h"

clientecpp::clientecpp(int Cod, QString Nome, QString CPF, QString Email)
{
    this->CodCliente = Cod;
    this->Nome = Nome;
    this->CPF = CPF;
    this->Email = Email;

}
bool clientecpp::insereCliente(QString Nome, QString CPF, QString Email)
{
    QSqlQuery query;

    query.prepare("INSERT INTO Cliente(Nome, CPF, Email) VALUES (:nome, :cpf, :email)");
    query.bindValue(":nome", Nome);
    query.bindValue(":cpf", CPF);
    query.bindValue(":email", Email);
    if(query.exec())
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool clientecpp::alteraCliente(clientecpp cliente)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM Cliente WHERE CodCliente = :codC");
    query.bindValue(":codC", cliente.CodCliente);
    query.exec();
    if(query.next())
    {
        query.prepare("UPDATE Cliente SET Nome = :nome, CPF = :cpf, Email = :email WHERE CodCliente = :codC");
        query.bindValue(":nome", cliente.Nome);
        query.bindValue(":cpf", cliente.CPF);
        query.bindValue(":email", cliente.Email);
        query.bindValue(":codC", cliente.CodCliente);
        if(query.exec())
            return true;
    }
    return false;
}
bool clientecpp::deletaCliente(int Cod)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM Cliente WHERE CodCliente = :codC");
    query.bindValue(":codC", Cod);
    query.exec();
    if(query.next())
    {
        query.prepare("DELETE FROM Cliente WHERE CodCliente = :codC");
        query.bindValue(":codC", Cod);
        if(query.exec())
            return true;
    }
    return false;
}
