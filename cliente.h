#ifndef CLIENTE_H
#define CLIENTE_H

#include <QDialog>
#include "clientecpp.h"

namespace Ui {
class cliente;
}

class cliente : public QDialog
{
    Q_OBJECT

public:
    explicit cliente(QWidget *parent = 0);

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::cliente *ui;
};

#endif // CLIENTE_H
