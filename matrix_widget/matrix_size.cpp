#include "matrix_size.h"
#include "ui_matrix_size.h"

matrix_size::matrix_size(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::matrix_size)
{
    ui->setupUi(this);
}

matrix_size::~matrix_size()
{
    delete ui;
}



int matrix_size::on_buttonBox_accepted()
{
   size_1= ui->lineEdit->text().toInt();

   return size_1;

}
