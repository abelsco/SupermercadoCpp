#ifndef BUSCA_H
#define BUSCA_H
#include "pedidoscpp.h"

#include <QDialog>

namespace Ui {
class busca;
}

class busca : public QDialog
{
    Q_OBJECT

public:
    explicit busca(QWidget *parent = 0);


private slots:
    void on_buttonBox_2_accepted();

private:
    Ui::busca *ui;
};

#endif // BUSCA_H
