//
//  Class C++.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 10/04/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//


//#include <stdio.h>
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
   
    void input (train *p) {
    A:
        cout << "Введите место отправления \n"<< endl;
        cin >> p->placeA;
        cout<< "Введите место прибытия \n"<< endl;
        cin >>  p->plB;
        cout<<"Введите время отправления \n"<< endl;
        cin >> p->hour >> p->minutes;
        
        if(p->hour<0 || p->hour>24 ||p->minutes<0 ){
            cout<<"Время не в том формате \n"<<endl;
            goto A;
        }
        
        while (p->minutes>=60 ){
            p->minutes=p->minutes-60;
            p->hour+=1;
        }
    }
    
    void output (train *p){
        if (p->minutes <10){
            
            cout<< p->placeA << p->plB << p->hour<<":"<< p->minutes<<endl;
            
        }else {
            cout<< p->placeA << p->plB << p->hour<< ":0"<< p->minutes<< endl;
        }
    }
} ;

//train::input (train *p);
//train::output (train *p);

int main() {
    
   // setlocale(LC_ALL, "ru");
    
    train *pt;
    train a,b;
    

        a.input(pt);
    
    cout<<"\n"<<endl;
    
    
        a.output(pt);
    
    
    
    
}

//

    

    





