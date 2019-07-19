#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <QDialog>
#include "funcionariocpp.h"

namespace Ui {
class funcionario;
}

class funcionario : public QDialog
{
    Q_OBJECT

public:
    explicit funcionario(QWidget *parent = 0);


private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::funcionario *ui;
};

#endif // FUNCIONARIO_H
