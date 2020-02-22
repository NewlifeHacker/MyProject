//
//  11Number of DZ.hpp
//  2Semestr
//
//  Created by Алексей Крутов on 09/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef _1Number_of_DZ_hpp
#define _1Number_of_DZ_hpp

#include <stdio.h>
#include <iostream>
#include <string>
#include <cmath>
#define P 3.141592
using namespace std;

class figures {
public:
    virtual void V()=0;
    virtual void SP()=0;
    virtual void randd()=0;
    virtual void seter()=0;
    
};

class ball: public figures {
public:
    float r;
    float s;
    float v;
    ball(){ r=0; };
    ball(float r){ this-> r=r;};
    ~ball(){cout<<"Объект удален "<<endl;};

    void seter() override{
        
    U:
        float r=0;
        cout<<"Задайте радиус шара"<<endl;
        cin>>r;
        if(r<=0){
            cout<<"Неверное значение"<<endl;
            goto U;
            
        }
        
        this -> r=r;
    }
    
    void V() override{
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Радиус шара равен - "<< r <<endl;
        
       float  k=1.333333;
        v = k * P * pow(r,3);
        cout<<"Объем шара равен - "<< v <<endl;
        cout<<""<<endl;
    }
    void SP() override{
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Радиус шара равен - "<< r <<endl;
        
        
        s = 4 * P * pow(r,2);
        cout<<"Площадь полной поверхности равна - "<< s <<endl;
        cout<<""<<endl;

    }
    void randd() override{
        r=rand()%10;
        
    }
    
    
    
};

class cone: public ball{
public:
    float h;
    float l;
    cone (){ h=0; l=0;};
    ~cone(){cout<<" "<<endl;};
    cone (float r, float h, float l){this->r=r; this->h=h; this->l=l; };
    
    void V() override {
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Радиус основания конуса равен - "<< r <<endl;
        cout<<"Высота конуса равна - "<< h <<endl;
        cout<<"Длина образующей конуса равна - "<< l <<endl;
        

        float  k=0.333333;
        v = k * P * pow(r,2) * h;
        cout<<"Объем конуса равен - "<< v<<endl;
        cout<<""<<endl;

    }
    
    void SP() override{
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Радиус основания конуса равен - "<< r <<endl;
        cout<<"Высота конуса равна - "<< h <<endl;
        cout<<"Длина образующей конуса равна - "<< l <<endl;
        

        s = P * r * (r+l);
        cout<<"Площадь конуса равна - "<< s <<endl;
        cout<<""<<endl;

    }
    void randd() override{
        r=rand()%10;
        h=rand()%10;
        l=rand()%10;
    }
    void seter() override{
    U:
        float r=0;
        float h=0;
        float l=0;
        cout<<"Задайте радиус конуса"<<endl;
        cin>>r;
        cout<<"Задайте высоту конуса"<<endl;
        cin>>h;
        cout<<"Задайте образующую конуса"<<endl;
        cin>>l;
        if(r<=0||h<=0||l<=0) {
            cout<<"Неверное значение"<<endl;
            goto U;
        }
        this -> r=r;
        this -> h=h;
        this -> l=l;
    }
    
};


class pyramid : public cone {
public:
    float sb;
    float so;
    pyramid(){sb=0;};
    pyramid(float so, float sb, float h){this->so=so ;this->sb=sb; this->h=h;};
    ~pyramid(){cout<<" "<<endl; };
    void V() override{
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Площадь основания пирамиды равна - "<< so <<endl;
        cout<<"Высота прамиды равна - "<< h <<endl;
        cout<<"Площадь боковой поверхности равна - "<< sb <<endl;
        
        
        float  k=0.333333;
        v = k * so * h;
        cout<<"Объем пирамиды равен - "<<v<<endl;
        cout<<""<<endl;

    }
    void SP() override{
        cout<<"Параметры фигуры:"<<endl;
        cout<<"Площадь основания пирамиды равна - "<< so <<endl;
        cout<<"Высота прамиды равна - "<< h <<endl;
        cout<<"Площадь боковой поверхности равна - "<< sb <<endl;
        

        s = so+sb;
        cout<<"Площадь полной поверхности равна - "<<s<<endl;
        cout<<""<<endl;

    }
    void randd() override{
        so=rand()%10;
        sb=rand()%10;
        h=rand()%10;
    }
    void seter() override{
    U:
        float so=0;
        float h=0;
        float sb=0;
        cout<<"Задайте площадь основания пирамиды"<<endl;
        cin>>so;
        
        cout<<"Задайте высоту пирамиды"<<endl;
        cin>>h;
        
        cout<<"Задайте площадь боковой поверхности"<<endl;
        cin>>sb;
        
        
        if(so<=0||h<=0||sb<=0) {
            cout<<"Неверное значение"<<endl;
            goto U;
        }
        this -> sb=sb;
        this -> h=h;
        this -> so=so;
    }
};

#endif /* _1Number_of_DZ_hpp */
