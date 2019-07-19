#ifndef TABELA_H
#define TABELA_H
#include <QString>
#include <QDialog>

namespace Ui {
class tabela;
}

class tabela : public QDialog
{
    Q_OBJECT

public:
    explicit tabela(QWidget *parent = 0);
    ~tabela();
    void criaTabela(QString query);

private:
    Ui::tabela *ui;
};

#endif // TABELA_H
