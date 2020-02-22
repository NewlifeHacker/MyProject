//
//  Class array.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 04/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


class train

{
    friend  void sort(train*, int);
    friend  void sort(train*, int, int);
private:
    string placeA;
    string plB;
    int hour;
    int minutes;
    
public:
    train ();
    train (string A, string B, int a, int b);
    ~train(){cout<<"Distructor"<<endl;};
    void set_train(string , string, int,int);
    void get_train();
    void input();
    void sort (train*, int);
    void randd ();


};
train::train(string A, string B, int a, int b )
{
    if(a<0 || a>24 ||b<0 ){
        cout<<"Время не в том формате \n"<<endl;
        a=0;
        b=0;
        
    }
    
    while (b>=60 ){
        b=b-60;
        a+=1;
    }
    placeA=A;
    plB=B;
    minutes=b;
    hour=a;
    
}

train::train()
{
    placeA=" ";
    plB=" ";
    minutes=00;
    hour=0;
    
}

void train::set_train(string PLA , string PLB, int h,int m){
    
    if(h<0 || h>24 ||m<0 ){
        cout<<"Время не в том формате \n"<<endl;
        h=0;
        m=0;
        
    }
    
    while (m>=60 ){
        m=m-60;
        h+=1;
    }
    placeA=PLA;
    plB=PLB;
    minutes=m;
    hour=h;
}
void train::input () {
A:
    int h,m;
    string a,b;
    cout << "Введите место отправления"<< endl;
    cin >> a;
    placeA = a;
    cout<< "Введите место прибытия"<< endl;
    cin >> b;
    plB = b;
    cout<<"Введите время отправления"<< endl;
    cin >> h >> m ;
    hour = h;
    minutes = m ;
    
    if(h<0 || h>24 || m<0 ){
        cout<<"Время не в том формате \n"<<endl;
        goto A;
    }
    
    while (m>=60 ){
        m=m-60;
        h+=1;
        hour = h;
        minutes = m;
    }
}


void train::get_train(){
    if (minutes<=9){
        cout<<"Место отправления- "<<placeA <<endl <<"Место прибытия- " << plB<<endl<<"Время отправленя-"<<hour<<":0"<<minutes<< endl;
    }else{
        cout<<"Место отправления- "<<placeA <<endl <<"Место прибытия- " << plB<<endl<<"Время отправленя-"<<hour<<":"<<minutes<< endl;
    }
}
void train::randd(){
   string A[] = { "Moskow", "Saint-Peterburg","Ulyanovsk", "Kazan" };
     string B[] = { "Vologda", "Magadan","Vladivostok", "Tula" };
    int i= rand()%4;
    placeA= A[i];
    i=rand()%4;
    plB=B[i];
    hour=rand()%24;
    minutes=rand()%60;
}

void sort (train *arr, int n) { //по возрастанию
 
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1].hour < arr[j].hour){
                train temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1].minutes < arr[j].minutes){
                train temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}
void sort (train *arr, int n, int h) {// по убыванию
    
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1].hour > arr[j].hour){
                train temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1].minutes > arr[j].minutes){
                train temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
}



//
int main(){
    
    int N;
    cout<<"Введите количество объектов класса"<<endl;
    cin>>N;
        cout<<"Будем заполнять рандомно? Если да- нажмите 1, иначе 0"<<endl;
    int h=0;
    cin>>h;
    train* arr = new train[N];
    if (h==1){
        for (int i=0; i<N; i++){
            arr[i].randd();
        }
        
    }else {
    for (int i=0; i<N; i++){
        arr[i].input();
    }
    }
    sort(arr, N);// по возрастанию
    
    
    cout<<"Сколько объектов класса вывести на экран?"<<endl;
    int n;
    cin>>n;
    
    for (int i=0; i<N; i++){
        if (N==0){
            return 0;
        }
        else{ arr[i].get_train(); }
        cout<<"\n";
    }
    sort(arr, N, 2);//по убыванию
    for (int i=0; i<N; i++){
        if (N==0){
            return 0;
        }
        else{ arr[i].get_train(); }
        cout<<"\n";
    }
}
