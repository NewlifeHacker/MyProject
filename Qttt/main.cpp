#include <QCoreApplication>
#include <QString>
#include <stdio.h>
#include <QFile>
#include <QDebug>

// дано 2 строки в них слова разделенные пробелами выписать в 3 строку слова, которые встречаются только в одной из строк


using namespace std;

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

 QFile file("/Users/newlife/Desktop/std.txt");
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
qDebug()<<"Ихначальные строки" <<"\n"<< str <<"\n"<< str2<<"\n";

         //Делим строку на слова разделенные пробелом
         QStringList lst, lst2, out;
                lst = str.split(" ");
                lst2= str2.split(" ");
              //  int k=0;


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


            QFile file2 ("/Users/newlife/Desktop/std2.txt");
            if (file2.open(QIODevice::ReadWrite)) {
                QTextStream stream(&file2);


for (int i=0;i<out.size(); i++){
    qDebug()<<out.at(i);
    stream << out.at(i);
    stream<<" ";
     }

            }
            file2.close();

 }
     else
     {
         qDebug()<< "don't open file";
     }


file.close();


return a.exec();
}


