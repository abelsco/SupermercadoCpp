#ifndef ADMINISTRADORUP_H
#define ADMINISTRADORUP_H
#include <QString>
#include <QDialog>
#include "administradorcpp.h"

namespace Ui {
class administradorUP;
}

class administradorUP : public QDialog
{
    Q_OBJECT

public:
    explicit administradorUP(QWidget *parent = 0);

    QString valida;

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::administradorUP *ui;
};

#endif // ADMINISTRADORUP_H
