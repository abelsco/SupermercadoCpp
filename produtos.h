#ifndef PRODUTOS_H
#define PRODUTOS_H

#include <QDialog>
#include "produtoscpp.h"

namespace Ui {
class produtos;
}

class produtos : public QDialog
{
    Q_OBJECT

public:
    explicit produtos(QWidget *parent = 0);

private slots:
    void on_buttonBox_accepted();

private:
    Ui::produtos *ui;
};

#endif // PRODUTOS_H
