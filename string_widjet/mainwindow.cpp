#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QFile>
#include <QString>
#include <QMessageBox>
#include <QTextStream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    QString file_name;

   ui->setupUi(this);
   ui->plainTextEdit->setReadOnly(true);
   ui->plainTextEdit_2->setReadOnly(true);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_2_clicked()
{

  file_name = QFileDialog:: getOpenFileName(this, " ", "/User/Desktop/");
 QFile file(file_name);
 if (!file.open(QFile::ReadOnly|QFile::Text)){
     QMessageBox ::warning(this, "No open", "ERROR");

 }
 QTextStream in (&file) ;
 QString text = in.readAll();

ui->plainTextEdit->setPlainText(text);



}

void MainWindow::on_pushButton_clicked()
{
    if ( ui->lineEdit->text()!= "Наберите первую строку"| ui->lineEdit_2->text()!= "Наберите вторую строку"){
      ui->plainTextEdit->insertPlainText(ui->lineEdit_2->text());
      ui->plainTextEdit->insertPlainText(" ");
      ui->plainTextEdit->insertPlainText(ui->lineEdit->text());


        QString str,str2;
        str= ui->lineEdit->text();
        str2 = ui->lineEdit_2->text();
        str=str.simplified();

        //Делим строку на слова разделенные пробелом
        QStringList lst, lst2, out;
               lst = str.split(" ");
               lst2= str2.split(" ");



               for (int i=0; i<lst.size(); i++){
                   if (!str2.contains(lst.at(i))){
                      //qDebug()<<lst.at(i);
                      out.push_back(lst.at(i));
                   }
               }
                   for (int j=0; j<lst2.size(); j++){
                       if (!str.contains(lst2.at(j))){
                         // qDebug()<<lst2.at(j);
                          out.push_back(lst2.at(j));
                       }
                   }
QString text;

QString text1 =" ";
for (int i =0; i<out.size(); i++){
text= text + out.at(i)+text1;
}
ui->plainTextEdit_2->setPlainText(text);
QMessageBox::information(this,"Res", "Результат во второй вкладке");



    }else{

 QFile file(file_name);

 QString str,str2;

    if(file.open(QIODevice::ReadOnly |QIODevice::Text))
        {
            while(!file.atEnd())
            {
                //Читаем строку
                str = file.readLine();
                str2= file.readLine();


            }
            str=str.simplified();

            //Делим строку на слова разделенные пробелом
            QStringList lst, lst2, out;
                   lst = str.split(" ");
                   lst2= str2.split(" ");



                   for (int i=0; i<lst.size(); i++){
                       if (!str2.contains(lst.at(i))){
                          out.push_back(lst.at(i));
                       }
                   }
                       for (int j=0; j<lst2.size(); j++){
                           if (!str.contains(lst2.at(j))){
                              out.push_back(lst2.at(j));
                           }
                       }
QString text;
QString text1 =" ";
for (int i =0; i<out.size(); i++){
    text= text + out.at(i)+text1;
}
ui->plainTextEdit_2->setPlainText(text);
QMessageBox::information(this,"Res", "Результат во второй вкладке");

}
}

}
