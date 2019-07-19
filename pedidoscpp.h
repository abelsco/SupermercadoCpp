#ifndef PEDIDOSCPP_H
#define PEDIDOSCPP_H
#include <QString>
#include "conexaobanco.h"

class Pedidoscpp
{
public:
    Pedidoscpp(int Cod, int Quantidade, int CodProduto, int CodCliente);
    int CodPedido, CodProduto, CodClientes, Quantidades;
    bool inserePedido(int Quantidade, int CodProduto, int CodCliente);
    bool alteraPedido(Pedidoscpp pedido);
    bool deletaPedido(int Cod);
};

#endif // PEDIDOSCPP_H
