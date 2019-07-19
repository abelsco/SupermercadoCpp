#ifndef PRODUTOUP_H
#define PRODUTOUP_H
#include <QString>
#include <QDialog>
#include "produtoscpp.h"
namespace Ui {
class produtoUP;
}

class produtoUP : public QDialog
{
    Q_OBJECT

public:
    explicit produtoUP(QWidget *parent = 0);
    QString valida;

private slots:
    void on_buttonBox_accepted();

private:
    Ui::produtoUP *ui;
};

#endif // PRODUTOUP_H
