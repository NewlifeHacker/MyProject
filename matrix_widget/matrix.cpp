#include "matrix.h"
#include "ui_matrix.h"
#include <QWidget>
#include "QtWidgets"
#include <QObject>
#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <QTime>
#include <QTextStream>
#include "matrix_size.h"
#include <QMessageBox>
#include <QTableWidget>



matrix::matrix(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::matrix)

{
//создание матрицы и поля доступны только для чтения
matrix_size second;

ui->setupUi(this);
ui->plainTextEdit->setReadOnly(true);
ui->plainTextEdit_2->setReadOnly(true);



}

matrix::~matrix()
{
    delete ui;
}

//по нажатию кнопки "задать размер" вылезает окно
void matrix::on_pushButton_clicked()
{

size = new matrix_size(this);
size->show();

}


// не рандомное заполнение
void matrix::add_table() {

    int n =size->size_1;
    QVector < QVector <int> > Matrix;
    Matrix.resize(n);
    QVector <int> v1;
    QVector<int> temp;


    if (button->isChecked()==true){
        window_table->hide();
        for (int i=0;i<n;i++){
             for (int j=0;j<n;j++){
                temp.push_back( table->takeItem(i,j)->text().toInt());
          }
             Matrix[i]=temp;
             temp.clear();
          }
    }




QString first_matrix;

for (int i =0 ; i < n ; i++){
    for (int j = 0; j<Matrix.size(); j++){
        ui->tableWidget->setItem(i,j,new QTableWidgetItem (QString::number(Matrix[i][j])));
    }
}

for (int i=0; i!=n; i++){
   first_matrix +="\n \n";
    for (int j=0; j<Matrix.size(); j++){
 first_matrix+= QString::number(Matrix[i][j]) ;
 first_matrix += "      ";

}
}



ui->plainTextEdit->setPlainText(first_matrix);

int max_sum=0;
int max=0;
int string=0;

for (int i=0; i<n; i++){
    max=0;
    for (int j = 0 ; j<n; j++){
        max += Matrix[i][j];
        if (max > max_sum){
            max_sum=max;
            string=i;
        }
    }
}

int l=0;
int j=0;
QVector <int> m2;
for (int i=0; i<n; i++){
m2.push_back(Matrix[string][i]);

}
    for (int k=0; k<n; k++){

                 Matrix[k][n-1-l]=m2.at(l);
                 l=l+1;
                 j=j+1;

}


QString second_matrix;

for (int i =0 ; i < n ; i++){
    for (int j = 0; j<Matrix.size(); j++){
        ui->tableWidget_2->setItem(i,j,new QTableWidgetItem (QString::number(Matrix[i][j])));
    }
}

    for (int i=0; i!=n; i++){
        second_matrix +="\n \n";
        for (int j=0; j<Matrix.size(); j++){
            second_matrix+= QString::number(Matrix[i][j]) ;
            second_matrix += "      ";
    }
    }
    ui->plainTextEdit_2->setPlainText(second_matrix);
    window_table->close();
}



//по нажатию кнопки "получить результат"
void matrix::on_pushButton_2_clicked()
{
   int n = size->size_1;

   ui->tableWidget->setColumnCount(size->size_1);
   ui->tableWidget->setRowCount(size->size_1);
   ui->tableWidget->update();
   ui->tableWidget_2->setColumnCount(size->size_1);
   ui->tableWidget_2->setRowCount(size->size_1);
   ui->tableWidget_2->update();
   QMessageBox msBox;

   msBox.setText("Заполнить матрицу рандомно?");
   msBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
   int h_r= msBox.exec();

   QVector < QVector <int> > Matrix;
   Matrix.resize(n);
   QVector <int> v1;







   if (h_r== QMessageBox::No){

     Layout = new QVBoxLayout;
     table = new QTableWidget;
     button = new QPushButton ;
     window_table = new QWidget;


     table->setRowCount(size->size_1);
     table->setColumnCount(size->size_1);
     table->resize(600,300);
     Layout->addWidget(table);
     button->setText("Ok");
     button->setCheckable(true);
     Layout->addWidget(button);
     window_table->setLayout(Layout);
     window_table->show();

button->setChecked(false);
connect (button, SIGNAL(clicked()), SLOT(add_table()));




}else  {

       QTableWidgetItem *item = new QTableWidgetItem;

       item->setTextAlignment(Qt::AlignCenter);

   qsrand(QTime::currentTime().msec());
   for (int i=0; i<n; i++){
       for(int j=0; j != n; j++) {
         Matrix[j] << (qrand()%10);

       }
   }

   for (int i =0 ; i < n ; i++){
       for (int j = 0; j<Matrix.size(); j++){
           ui->tableWidget->setItem(i,j,new QTableWidgetItem (QString::number(Matrix[i][j])));
       }
   }

   QString first_matrix;

      for (int i=0; i!=n; i++){
         first_matrix +="\n \n";
          for (int j=0; j<Matrix.size(); j++){
       first_matrix+= QString::number(Matrix[i][j]) ;
       first_matrix += "        ";

      }
      }
      ui->plainTextEdit->setPlainText(first_matrix);

      int max_sum=0;
      int max=0;
      int string=0;

      for (int i=0; i<n; i++){
          max=0;
          for (int j = 0 ; j<n; j++){
              max += Matrix[i][j];
              if (max > max_sum){
                  max_sum=max;
                  string=i;
              }
          }
      }

   int l=0;
   int j=0;

   QVector <int> m2;
   for (int i=0; i<n; i++){
      m2.push_back(Matrix[string][i]);

   }
          for (int k=0; k<n; k++){

                       Matrix[k][n-1-l]=m2.at(l);
                       l=l+1;
                       j=j+1;

      }


   QString second_matrix;
   for (int i =0 ; i < n ; i++){
       for (int j = 0; j<Matrix.size(); j++){
           ui->tableWidget_2->setItem(i,j,new QTableWidgetItem (QString::number(Matrix[i][j])));
       }
   }
          for (int i=0; i!=n; i++){
              second_matrix +="\n \n";
              for (int j=0; j<Matrix.size(); j++){
                  second_matrix+= QString::number(Matrix[i][j]) ;
                  second_matrix += "        ";
          }
          }
          ui->plainTextEdit_2->setPlainText(second_matrix);
   }
   }



