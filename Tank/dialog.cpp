#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_buttonBox_accepted()
{
    h = ui->lineEdit->text().toInt();
    w = ui->lineEdit_2->text().toInt();
    speed = ui->lineEdit_3->text().toInt();
    size = ui->lineEdit_4->text().toInt();
}
