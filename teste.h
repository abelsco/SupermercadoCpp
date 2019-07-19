#ifndef TESTE_H
#define TESTE_H
#include "QString"

class teste
{
public:
    teste();    
    bool testeLoginAdm(QString Nome, QString Senha);
    bool testeLoginFunc(QString Nome, QString Senha);
    bool testeCadCli(QString Nome, QString CPF, QString Email);
    bool testeCadProd(QString Nome, QString Modelo, QString Descricao, int Quantidade, float Preco);
    bool testeCadAdmin(QString Nome, QString SenhaPessoal, QString Senha);
    bool testeCadFunc(QString Nome, QString CPF, QString Email, QString Senha);
    bool testeCad();
};

#endif // TESTE_H
