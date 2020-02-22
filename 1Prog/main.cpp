
#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <vector>
#define a "! .,;?:"

using namespace std;

int main() {
vector <string> v1,v2,v3;
ifstream text;
text.open("/Users/newlife/Desktop/std.txt");

if (!text.is_open()){
    cout<<"Error 404";

}
else{

    cout<<"File is open \n "<<endl;
    string str2 ,str1,tmp;

string word;
getline(text, str1);
getline(text, str2);



cout<<endl<<"Проверка"<<endl;

char * Ukaz_element,* Ukaz_element1;
        Ukaz_element1=strtok(const_cast<char*>(str1.c_str()), a);
        v1.push_back( Ukaz_element1);
        while ( ( Ukaz_element1 = strtok(nullptr, a) )  ){
         v1.push_back( Ukaz_element1);

}
         Ukaz_element=strtok(const_cast<char*>(str2.c_str()), a);

         v2.push_back( Ukaz_element);
                while ( ( Ukaz_element = strtok(nullptr, a) )  ){

                v2.push_back( Ukaz_element);

        }


        for (unsigned int i=0; i < v1.size(); i++)
                      {
                          cout<<v1.at(i);
                          cout<<" ";

        }
             cout<<" "<<endl;
        for (unsigned int i=0; i < v2.size(); i++)
                      {
                          cout<<v2.at(i);
                          cout<<" ";

        }

cout<<endl<<"Проверка";

cout<<endl;



    for (unsigned int i=0; i < v1.size(); i++)
    {
        for (unsigned int j=0; j<v2.size(); j++){
            if (v1.at(i)==v2.at(j)){
                v1.erase(v1.begin() + i);
                v2.erase(v2.begin() + j);
        }
    }
    }

    ofstream out;
                     out.open("/Users/newlife/Desktop/std2.txt"); // окрываем файл для записи
                     if (out.is_open())
                     {
                         cout << "File is open \n " << endl;

    for (unsigned int i=0; i < v1.size(); i++)
                  {
                      cout<<v1.at(i);
                      cout<<" ";
                      out<<v1.at(i);
                      out<<" ";
                  }
    for (unsigned int i=0; i < v2.size(); i++)
                  {
                      cout<<v2.at(i);
                      cout<<" ";
                      out<<v2.at(i);
                      out<<" ";
                  }
}
                     text.close();

}
}

