#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H
#include <QDialog>
#include "administradorcpp.h"


namespace Ui {
class administrador;
}

class administrador : public QDialog
{
    Q_OBJECT

public:
    explicit administrador(QWidget *parent = 0);


private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::administrador *ui;
};

#endif // ADMINISTRADOR_H
