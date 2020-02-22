#include "dialog.h"
#include "ui_dialog.h"
#include "GL.h"
#include <QGLWidget>



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

void Dialog::on_pushButton_clicked()
{
   name = ui->lineEdit->text();
   //window app;
    //app.show();
}

void Dialog::on_lineEdit_textEdited(const QString &arg1)
{

}

void Dialog::on_radioButton_clicked()
{
    size = 44;
}

void Dialog::on_radioButton_2_clicked()
{
    size = 46;
}

void Dialog::on_radioButton_3_clicked()
{
    size = 66;
}
