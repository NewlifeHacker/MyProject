//Задача на таблицы:
//Есть квадратная матрица. Найти строку с максимальной суммой и поместить значения строки на побочную диагональ.


#include "matrix.h"
#include "matrix_size.h"


#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    matrix w;


    w.resize(600,600);

    w.show();

    return a.exec();
}
