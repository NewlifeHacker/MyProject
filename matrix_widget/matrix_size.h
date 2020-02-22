#ifndef MATRIX_SIZE_H
#define MATRIX_SIZE_H

#include <QDialog>
#include <QButtonGroup>
#include <QString>
#include <QDebug>

namespace Ui {
class matrix_size;
}

class matrix_size : public QDialog
{
    Q_OBJECT

public:
    explicit matrix_size(QWidget *parent = nullptr);
    ~matrix_size();
    int size_1;


private slots:


    int on_buttonBox_accepted();

private:
    Ui::matrix_size *ui;
};

#endif // MATRIX_SIZE_H
