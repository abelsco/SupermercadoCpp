#include "produtoscpp.h"

produtoscpp::produtoscpp(int Cod, QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco)
{
    this->CodProduto = Cod;
    this->Nome = Nome;
    this->Modelo = Modelo;
    this->Descricao = Descricao;
    this->Quantidade = Quantidade;
    this->Preco = Preco;

}
bool produtoscpp::insereProduto(QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco)
{
    QSqlQuery query;

    query.prepare("INSERT INTO Produto(Nome, Modelo, Descricao, Quantidade, Preco)"
                  "VALUES (:nome, :modelo, :descricao, :qtd, :preco)");
    query.bindValue(":nome", Nome);
    query.bindValue(":modelo", Modelo);
    query.bindValue(":descricao", Descricao);
    query.bindValue(":qtd", Quantidade);
    query.bindValue(":preco", Preco);
    if(query.exec())
        return true;

    return false;


}
bool produtoscpp::alteraProduto(produtoscpp produto)
{
    QSqlQuery query;
    query.prepare("SELECT * FROM Produto WHERE CodProduto = :codP");
    query.bindValue(":codP", produto.CodProduto);
    query.exec();

    if(query.next())
    {
        query.prepare("UPDATE Produto SET Nome = :nome, Modelo = :modelo, Descricao = :descricao, Quantidade = :qtd, Preco = :preco "
                      "WHERE CodProduto = :codP");
        query.bindValue(":nome", produto.Nome);
        query.bindValue(":modelo", produto.Modelo);
        query.bindValue(":descricao", produto.Descricao);
        query.bindValue(":qtd", produto.Quantidade);
        query.bindValue(":preco", produto.Preco);
        query.bindValue(":codP", produto.CodProduto);
        if(query.exec())
            return true;
    }
    return false;
}
bool produtoscpp::deletaProduto(int Cod)
{
    QSqlQuery query, query2;
    query.prepare("SELECT * FROM Produto WHERE CodProduto = :codP");
    query.bindValue(":codP", Cod);
    query.exec();

    if(query.next())
    {
        query.prepare("DELETE FROM Produto WHERE CodProduto = :codP");
        query.bindValue(":codP", Cod);
        if(query.exec())
            return true;
    }
    return false;
}
