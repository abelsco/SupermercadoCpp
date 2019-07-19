#include "administradorcpp.h"

administradorcpp::administradorcpp(int Cod, QString Nome, QString SenhaPessoal, QString Senha)
{
    CodAdmin = Cod;
    this->Nome = Nome;
    this->senha = Senha;
    this->senhaP = SenhaPessoal;
}

bool administradorcpp::insereAdminstrador(QString Nome, QString SenhaPessoal, QString Senha)
{
    QSqlQuery query;

    query.prepare("INSERT INTO Administrador(Nome, SenhaPessoal, Senha)"
                  "VALUES (:nome, :senhaP, :senha)");
    query.bindValue(":nome", Nome);
    query.bindValue(":senhaP", SenhaPessoal);
    query.bindValue(":senha", Senha);
    if(query.exec())
        return true;

    return false;

}
bool administradorcpp::alteraAdminstrador(administradorcpp Adm)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Administrador WHERE CodAdmin = :codA AND SenhaPessoal = :senha");
    query.bindValue(":codA", Adm.CodAdmin);
    query.bindValue(":senha", Adm.senhaP);
    query.exec();

    if(query.next())
    {
        query.prepare("UPDATE Administrador SET Nome = :nome, Senha = :senha WHERE CodAdmin = :codA");
        query.bindValue(":nome", Adm.Nome);
        query.bindValue(":senha", Adm.senha);
        query.bindValue(":codA", Adm.CodAdmin);
        if(query.exec())
            return true;
    }

    return false;

}
bool administradorcpp::deletaAdminstrador(int Cod, QString SenhaPessoal)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Administrador WHERE CodAdmin = :codA AND SenhaPessoal = :senha");
    query.bindValue(":codA", Cod);
    query.bindValue(":senha", SenhaPessoal);
    query.exec();

    if(query.next())
    {
        query.prepare("DELETE FROM Administrador WHERE CodAdmin = :codA");
        query.bindValue(":codA", Cod);
        if(query.exec())
            return true;
    }

    return false;

}
