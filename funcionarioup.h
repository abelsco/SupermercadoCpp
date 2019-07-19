#ifndef FUNCIONARIOUP_H
#define FUNCIONARIOUP_H
#include <QString>
#include <QDialog>
#include "funcionariocpp.h"

namespace Ui {
class funcionarioUP;
}

class funcionarioUP : public QDialog
{
    Q_OBJECT

public:
    explicit funcionarioUP(QWidget *parent = 0);

    QString valida;

private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::funcionarioUP *ui;
};

#endif // FUNCIONARIOUP_H
