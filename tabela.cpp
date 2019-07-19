#include "tabela.h"
#include "ui_tabela.h"
#include <QSqlQueryModel>
#include <QTableView>
#include <QSqlTableModel>

tabela::tabela(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tabela)
{
    ui->setupUi(this);
}

tabela::~tabela()
{
    delete ui;
}
 void tabela::criaTabela(QString query){
     QSqlQueryModel *model = new QSqlQueryModel();
     model->setQuery(query);
     ui->tableView->setModel(model);
     this->show();
 }
