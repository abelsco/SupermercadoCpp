#ifndef PRODUTOSCPP_H
#define PRODUTOSCPP_H
#include "QString"
#include "conexaobanco.h"

class produtoscpp
{
public:
    produtoscpp(int Cod, QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco);
    int CodProduto, Quantidade;
    QString Nome, Modelo, Descricao;
    float Preco;
    bool insereProduto(QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco);
    bool alteraProduto(produtoscpp produto);
    bool deletaProduto(int Cod);
};

#endif // PRODUTOSCPP_H
