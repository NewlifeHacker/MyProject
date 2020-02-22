//
//  Class.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 11/04/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <iostream>
#include <string>

using namespace std;


class train

{ private:
    string placeA;
    string plB;
    int hour;
    int minutes;
    
public:
    
    train (string A, string B, int a, int b);
    void set_train(string , string, int,int);
    void get_train();
    
   

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
    minutes=h;
    hour=m;
}

void train::get_train(){
    if (minutes<=9){
    cout<<"Место отправления- "<<placeA <<endl <<"Место прибытия- " << plB<<endl<<"Время отправленя-"<<hour<<":0"<<minutes<< endl;
    }else{
        cout<<"Место отправления- "<<placeA <<endl <<"Место прибытия- " << plB<<endl<<"Время отправленя-"<<hour<<":"<<minutes<< endl;
    }
}

int main(){
 
    train l("Москва", "Санкт-Петербург", 11, 64);
  
    l.get_train();
}
