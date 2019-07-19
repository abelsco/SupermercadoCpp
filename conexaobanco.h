#ifndef CONEXAOBANCO_H
#define CONEXAOBANCO_H
#include <QString>
#include <QtSql>
#include <QVariant>
#include <QMessageBox>


class ConexaoBanco
{
public:
    QSqlDatabase db;
    ConexaoBanco();
    ~ConexaoBanco();

    bool buscaLoginAdm(QString Nome, QString Senha);
    bool buscaLoginFunc(QString Nome, QString Senha);


};

void criaBanco();

#endif // CONEXAOBANCO_H
