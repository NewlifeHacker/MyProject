//Задача на таблицы:
//Есть квадратная матрица. Найти строку с максимальной суммой и поместить значения строки на побочную диагональ.

#include <QCoreApplication>
#include <QVector>
#include <QDebug>
#include <QTime>
#include <QTextStream>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    QVector < QVector <int> > Matrix;

    QTextStream(stdout) << "Set matrix size ";

    int n=0;
   QTextStream (stdin) >> n;
   QTextStream(stdout) << "Chose hand or rand? 0 / 1 ";
   int h_r=0;
   QTextStream (stdin) >> h_r;
    Matrix.resize(n);
   QVector<int> v1;
   if (h_r==0){
       for (int i=0;i<n;i++){
           for (int j=0;j<n;j++){
                  int x;
                  QTextStream (stdin) >> x;
                  v1.push_back(x);
       }
           Matrix[i]=v1;
           v1.clear();
       }

       //qDebug()<<Matrix;

}else{
    qsrand(QTime::currentTime().msec());
    for (int i=0; i<n; i++){
        for(int j=0; j != n; j++)
          Matrix[j] << (qrand()%10);
    }
}
    qDebug()<<"Изначальный массив"<<endl;

    for (int i=0; i!=n; i++){
        qDebug() << "\n";
        for (int j=0; j<Matrix.size(); j++){
          QTextStream(stdout) << Matrix[i][j]<<" ";

    }
    }

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
    qDebug()<< " ";
    qDebug()<<"max sum = "<< max_sum;
    qDebug()<< "string with max sum = "<<string+1;

int l=0;
int j=0;
QVector <int> m2;
for (int i=0; i<n; i++){
    m2.push_back(Matrix[string][i]);
}
qDebug()<<m2;


        for (int k=0; k<n; k++){

                     Matrix[k][n-1-l]=m2.at(l);
                     l=l+1;
                     j=j+1;

    }


qDebug()<<"Итоговый массив"<<endl;

        for (int i=0; i!=n; i++){
            qDebug() << "\n";
            for (int j=0; j<Matrix.size(); j++){
              QTextStream(stdout) << Matrix[i][j]<<" ";

        }
        }



    return a.exec();
}
