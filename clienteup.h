#ifndef CLIENTEUP_H
#define CLIENTEUP_H
#include <QString>
#include <QDialog>
#include "clientecpp.h"

namespace Ui {
class clienteUP;
}

class clienteUP : public QDialog
{
    Q_OBJECT

public:
    explicit clienteUP(QWidget *parent = 0);

    QString valida;
private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::clienteUP *ui;
};

#endif // CLIENTEUP_H
