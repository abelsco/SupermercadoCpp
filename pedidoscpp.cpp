#include "pedidoscpp.h"

Pedidoscpp::Pedidoscpp(int Cod, int Quantidade, int CodProduto, int CodCliente)
{
    this->CodPedido = Cod;
    this->Quantidades = Quantidade;
    this->CodProduto = CodProduto;
    this->CodClientes = CodCliente;
}
QString getMes(int mes)
{
    switch (mes) {
    case 1:{
        return "Janeiro";
    }break;
    case 2:{
        return "Fevereiro";
    }break;
    case 3:{
        return "Março";
    }break;
    case 4:{
        return "Abril";
    }break;
    case 5:{
        return "Maio";
    }break;
    case 6:{
        return "Junho";
    }break;
    case 7:{
        return "Julho";
    }break;
    case 8:{
        return "Agosto";
    }break;
    case 9:{
        return "Setembro";
    }break;
    case 10:{
        return "Outubro";
    }break;
    case 11:{
        return "Novembro";
    }break;
    case 12:{
        return "Dezembro";
    }break;
    }
    return "";
}




bool Pedidoscpp::inserePedido(int Quantidade, int CodProduto, int CodCliente)
{
    QSqlQuery query1,query2;
    int codPedido;
    float preco;
    QDateTime q;
    QDate a;
    a = q.currentDateTime().date();


    query1.prepare("SELECT Cliente.CodCliente, Produto.CodProduto, Produto.Quantidade, Produto.Preco from Cliente, Produto WHERE Cliente.CodCliente = :codCli "
                   "AND Produto.CodProduto = :codProd AND Produto.Quantidade >= :qtd");
    query1.bindValue(":codCli",CodCliente);
    query1.bindValue(":codProd",CodProduto);
    query1.bindValue(":qtd", Quantidade);
    query1.exec();
    if(query1.next()){
        preco = query1.value(3).toFloat();
        query2.prepare("INSERT INTO Pedidos(Quantidade, CodProduto, CodClientes, Mes, Ano) VALUES (:qtd, :codProd, :codCli, :mes, :ano)");
        query2.bindValue(":codCli",CodCliente);
        query2.bindValue(":codProd",CodProduto);
        query2.bindValue(":qtd", Quantidade);
        query2.bindValue(":mes",getMes(a.month()));
        query2.bindValue(":ano",QString::number(a.year()));
        query2.exec();
        query2.prepare("SELECT * FROM Pedidos WHERE Quantidade = :qtd AND CodProduto = :codP AND CodClientes = :codC");
        query2.bindValue(":codC", CodCliente);
        query2.bindValue(":codP", CodProduto);
        query2.bindValue(":qtd", Quantidade);
        query2.exec();
        if (query2.next()){
            codPedido = query2.value(0).toInt();
            query2.prepare("UPDATE Produto SET Quantidade = (Quantidade - :qtd) WHERE CodProduto = :codP");
            query2.bindValue(":qtd", Quantidade);
            query2.bindValue(":codP", CodProduto);
            query2.exec();
            query2.prepare("INSERT INTO Ganhos(GanhoMes, CodPedido) VALUES (:ganho, :codPedido)");
            query2.bindValue(":ganho", Quantidade*preco);
            query2.bindValue(":codPedido", codPedido);
            if(query2.exec())
                return true;
        }
    }

    return false;
}
bool Pedidoscpp::alteraPedido(Pedidoscpp pedido)
{
    QSqlQuery query;
    float preco;
    int qtdPedido, qtdProduto;
    query.prepare("SELECT * FROM Pedidos WHERE CodPedido = :codP");
    query.bindValue(":codP", pedido.CodPedido);
    query.exec();

    if(query.next())
    {
        qtdPedido = query.value("Quantidade").toInt();
        query.prepare("SELECT * FROM Produto WHERE CodProduto = :codPro AND Quantidade >= :qtd");
        query.bindValue(":codPro", pedido.CodProduto);
        query.bindValue(":qtd", (pedido.Quantidades-qtdPedido));
        query.exec();
        if(query.first()){
            preco = query.value("preco").toFloat();
            qtdProduto = query.value("Quantidade").toInt();
            query.prepare("SELECT * FROM Cliente WHERE CodCliente = :codCli");
            query.bindValue(":codCli", pedido.CodClientes);
            query.exec();
            if(query.first()){
                query.prepare("UPDATE Pedidos SET Quantidade = :qtd, CodProduto = :codPro, CodClientes = :codCli WHERE CodPedido = :codP");
                query.bindValue(":qtd", pedido.Quantidades);
                query.bindValue(":codPro", pedido.CodProduto);
                query.bindValue(":codCli", pedido.CodClientes);
                query.bindValue(":codP", pedido.CodPedido);
                query.exec();
                query.prepare("UPDATE Ganhos SET GanhoMes = :ganho WHERE CodPedido = :codP");
                query.bindValue(":ganho", preco*pedido.Quantidades);
                query.bindValue(":codP", pedido.CodPedido);
                query.exec();
                query.prepare("UPDATE Produto SET Quantidade = :ganho WHERE CodProduto = :codProd");
                query.bindValue(":ganho", qtdProduto - (pedido.Quantidades-qtdPedido));
                query.bindValue(":codProd", pedido.CodProduto);
                if(query.exec())
                    return true;
            }
        }
    }
    return false;
}
bool Pedidoscpp::deletaPedido(int Cod)
{
    QSqlQuery query;
    int qtd,codCli,codProd;
    query.prepare("SELECT * FROM Pedidos WHERE CodPedido = :codP");
    query.bindValue(":codP", Cod);
    query.exec();

    if(query.next())
    {
        qtd = query.value("Quantidade").toInt();
        codCli = query.value("CodClientes").toInt();
        codProd = query.value("CodProduto").toInt();
        query.prepare("UPDATE Cliente SET CodPedido = NULL WHERE CodPedido = :codP AND CodCliente = :codCli");
        query.bindValue(":codCli", codCli);
        query.bindValue(":codP", Cod);
        query.exec();
        query.prepare("UPDATE Produto SET Quantidade = (Quantidade + :qtd) WHERE CodProduto = :codP");
        query.bindValue(":codP", codProd);
        query.bindValue(":qtd", qtd);
        query.exec();
        query.prepare("DELETE FROM Pedidos WHERE CodPedido = :codP");
        query.bindValue(":codP", Cod);
        query.exec();
        query.prepare("DELETE FROM Ganhos WHERE CodPedido = :codP");
        query.bindValue(":codP", Cod);
        if(query.exec())
            return true;
    }
    return false;
}
