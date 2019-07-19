#include "funcionariocpp.h"

funcionariocpp::funcionariocpp(int Cod, QString Nome, QString CPF, QString Email, QString Senha)
{
    this->CodFunc = Cod;
    this->Nome = Nome;
    this->CPF = CPF;
    this->Email = Email;
    this->Senha = Senha;

}
bool funcionariocpp::insereFuncionario(QString Nome, QString CPF, QString Email, QString Senha)
{
    QSqlQuery query;

    query.prepare("INSERT INTO Funcionario(Nome, CPF, Email, Senha) VALUES (:nome, :cpf, :email, :senha)");
    query.bindValue(":nome", Nome);
    query.bindValue(":cpf", CPF);
    query.bindValue(":email", Email);
    query.bindValue(":senha", Senha);
    if(query.exec())
        return true;

    return false;
}
bool funcionariocpp::alteraFuncionario(funcionariocpp funcionario)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM Funcionario WHERE CodFunc = :codF AND Senha = :senha");
    query.bindValue(":codF", funcionario.CodFunc);
    query.bindValue(":senha", funcionario.Senha);
    query.exec();

    if(query.next())
    {
        query.prepare("UPDATE Funcionario SET Nome = :nome, CPF = :cpf, Email = :email WHERE CodFunc = :codF");
        query.bindValue(":nome", funcionario.Nome);
        query.bindValue(":cpf", funcionario.CPF);
        query.bindValue(":email", funcionario.Email);
        query.bindValue(":senha", funcionario.Senha);
        query.bindValue(":codF", funcionario.CodFunc);
        if(query.exec())
            return true;
    }

    return false;
}
bool funcionariocpp::deletaFuncionario(int Cod, QString Senha)
{
    QSqlQuery query;

    query.prepare("SELECT * FROM Funcionario WHERE CodFunc = :codF AND Senha = :senha");
    query.bindValue(":codF", Cod);
    query.bindValue(":senha", Senha);
    query.exec();

    if(query.next())
    {
        query.prepare("DELETE FROM Funcionario WHERE CodFunc = :codF");
        query.bindValue(":codF", Cod);
        if(query.exec())
            return true;
    }

    return false;
}
