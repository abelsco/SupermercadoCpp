#ifndef BUSCAUP_H
#define BUSCAUP_H
#include <QString>
#include <QDialog>
#include "pedidoscpp.h"

namespace Ui {
class buscaUP;
}

class buscaUP : public QDialog
{
    Q_OBJECT

public:
    explicit buscaUP(QWidget *parent = 0);

    QString valida;

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::buscaUP *ui;
};

#endif // BUSCAUP_H
