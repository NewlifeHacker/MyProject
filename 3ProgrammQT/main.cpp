//Найти наибольший четный элемент массива и поменять его местами с наименьшим нечетным элементом.
//Если одного из таких элементов нет,
// то всем элементам массива присвоить занчение равное 0


#include<QList>
#include <QDebug>
#include <QCoreApplication>
#include <QTime>


int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

int start=1;
while (start!=0){
    QList <int> list; //= {"1", "1","1"};


    QTextStream(stdout) << "Set matrix size ";

    int n=0;
   QTextStream (stdin) >> n;
   QTextStream(stdout) << "Chose hand or rand? 0 / 1 ";
   int h_r=0;
   QTextStream (stdin) >> h_r;

   if (h_r==0){

           for (int j=0;j<n;j++){
                  int x;
                  QTextStream (stdin) >> x;
                  list.push_back(x);
       }

    }else{

//заполним лист рандомными числами

   qsrand(QTime::currentTime().msec());
   for (int i=0; i< n; i++){
        list.push_back(qrand()% 100);

    }
   }
   qDebug()<<"Изначальный массив"<<endl;

   for ( int i=0; i<list.length(); i++){
         QTextStream(stdout) << list.at(i)<< " ";
   }
    qDebug()<<" ";

//проверка листа на пустоту
    if (list.isEmpty()){
        qDebug()<<"Array is empty";
        return 0;
    }

    int max = 0;
    int i_position=0;
    int j_position=0;


    for (int i = 0; i < list.size(); i++)
        if (max < list.at(i) && list.at(i)%2==0){
            i_position=i;
            max = list.at(i);
    }

    if (max%2!=0 || max ==0){
    qDebug()<<"Максимального четного элемента нет" ;
    }else{
    qDebug()<<"Максимальный четный элемент равен" << max;
    }

int min = list.at(1);

for (int i = 0; i < list.size(); i++)  {
    if (min > list.at(i) && list.at(i)%2!=0){
    j_position=i;
        min = list.at(i);
}
    if (min%2==0)
    {
        min = list.at(i);
        j_position=i;
    }
}

if (min%2==0){
qDebug()<<"Минимального нечетного элемента нет" ;
}else{
qDebug()<<"Минимальный нечетный элемент" << min;
}

if (max!=0||min!=max){
list.swap(i_position, j_position);
}

if (max==0 || min%2==0){
    for (int i=0; i<list.size(); i++){
        list[i]=0;
    }
}


//вывод
qDebug()<<"Итоговый массив"<<endl;
    for ( int i=0; i<list.length(); i++){
      QTextStream(stdout) << list.at(i)<< " ";

    }

    QTextStream(stdout) << "\n" <<"Restar the programm? 1-Yes 0-No"<< "\n";


   QTextStream (stdin) >> start;

   if (start == 0)  return a.exec();
}

    return a.exec();
}
