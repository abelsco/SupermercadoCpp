#ifndef ADMINISTRADORCPP_H
#define ADMINISTRADORCPP_H
#include "QString"
#include "conexaobanco.h"


class administradorcpp
{
public:
    administradorcpp(int Cod, QString Nome, QString SenhaPessoal, QString Senha);

    int CodAdmin;
    QString Nome, senhaP, senha;
    bool insereAdminstrador(QString Nome, QString SenhaPessoal, QString Senha);
    bool alteraAdminstrador(administradorcpp Adm);
    bool deletaAdminstrador(int Cod, QString SenhaPessoal);
};

#endif // ADMINISTRADORCPP_H
