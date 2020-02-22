#ifndef MATRIX_H
#define MATRIX_H

#include <QMainWindow>
#include <matrix_size.h>
#include <QTableWidget>
#include <QVBoxLayout>
#include <QPushButton>


QT_BEGIN_NAMESPACE
namespace Ui { class matrix; }
QT_END_NAMESPACE

class matrix : public QMainWindow
{
    Q_OBJECT

public:
    matrix(QWidget *parent = nullptr);
    ~matrix();

    QTableWidget *table;
     QTableWidget *table_input;
      QTableWidget *table_output;
    QVBoxLayout * Layout;
    QPushButton *button ;
    QWidget *window_table;



private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
    void add_table();

private:
    Ui::matrix *ui;
    matrix_size *size;

};
#endif // MATRIX_H
