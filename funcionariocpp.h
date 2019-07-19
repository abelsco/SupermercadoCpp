#ifndef FUNCIONARIOCPP_H
#define FUNCIONARIOCPP_H
#include "QString"
#include "conexaobanco.h"

class funcionariocpp
{
public:
    funcionariocpp(int Cod, QString Nome, QString CPF, QString Email, QString Senha);
    int CodFunc;
    QString Nome, CPF, Email, Senha;
    bool insereFuncionario(QString Nome, QString CPF, QString Email, QString Senha);
    bool alteraFuncionario(funcionariocpp funcionario);
    bool deletaFuncionario(int Cod, QString Senha);
};

#endif // FUNCIONARIOCPP_H
