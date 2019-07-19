#ifndef CLIENTECPP_H
#define CLIENTECPP_H
#include "QString"
#include "conexaobanco.h"

class clientecpp
{
public:
    clientecpp(int Cod, QString Nome, QString CPF, QString Email);

    int CodCliente;
    QString  Nome, CPF, Email;
    bool insereCliente(QString Nome, QString CPF, QString Email);
    bool alteraCliente(clientecpp cliente);
    bool deletaCliente(int Cod);


};

#endif // CLIENTECPP_H
