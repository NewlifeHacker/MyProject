//
//  KR 3.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 24/04/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//


//1 задание//
/*
#include <iostream>
#include <string>
using namespace std;

class A{
    
protected:
    int x;
    int y;
    
public: A(int a, int b)
    {
        x=a;
        y=b;
        cout<<"k-r ВСТАВИЛ ПРОСТО ЧИСЛА- "<<endl;
        
    };
    
    //
    
    virtual void fun1() {
        cout<<"fun 11 УМНОЖИЛ 1 НА 2- "<<x*y<<endl;
        
    }
    
    void fun2() {
        cout<<"fun 12 СЛОЖИЛ ИХ - "<<x+y<<endl;
        
    }
    
    ~A() {
        cout<<"d-r A КАКАЯ ТО ХЕРЬ- "<<x<<endl;
        
    }
        
    };
    
class B: public A
    {
    public:
        B(int x, int y)
        :A(x,y)
        {
            cout<<"k-r B СОЗДАЛ Б И ХЗ ЧТО ДАЛЬШЕ"<<endl;
            
        };
        
        ~B()
        {
            cout<<"B ОЧИСТИЛ ВРОДЕ "<<endl;
            
        }
        void fun1() {cout<<"fun 21 ЭТО ФУНКЦИЯ ДЕЛЕНИЯ "<<x/y<<endl;}
        void fun2() {cout<<"fun 22 ВЫЧИТАНИЯ"<<x-y<<endl;}
    };
        
        
        int main(){
        A a (4,2);
        B b (9,3);
        {
            B c (5,5);
            c.fun1(); // 5/5
            
        }
        A *pa;//указатель типа класса А
        pa=&a;// адрес а(4,2)
            pa->fun1(); //X*Y //обращается к функции 1 в А 4*2=8
        pa->fun2();//X+Y //обращается к функции 2 в А  4+2=6
        pa=&b; // адрес на б(9,3)
        pa->fun1(); // 9/3=3
        pa->fun2(); // 9-3=6
        return 0;
        }
 */
/*

#include <iostream>
#include <string>
using namespace std;

class X {
private:
    float x=3;
    const int i;
public:
    X (int const z=0);
    X (float z=0);
    ~X ();
    void print ();
};
X::X  (int z ) :i(1) {
    
    x=z;
   
}
X::X (float z) :i(2){
    x=z;
    
    
}
X:: ~X (){
    cout<<x;
}
void X::print(){
    cout<<"x="<<x<<" i="<<i<<endl;
}
int main(){
float a=2.5;
    X x(3), y(a), c(float(0.5));
X d(float (4.5));
X z(2);
x.print();
y.print();
c.print();
d.print();
   
    X *px ;
px->print();
px=&z;
px->print ();
}



//
class point {
    
    
    
}
*/

#include <iostream>
#include <string>
using namespace std;

class B{
    int x;
    int y;
public:
    B(int a,int b){
        x=a;y=b; cout<<"k-r B "<<x<<endl;}
    ~B() {cout<<"d-r B "<<x+y<<endl;}
    
};

class A {
    B a;
public:
    A(int x, int y)
    :a(x,y){
        cout<<"k-r A "<<endl;};
    ~A() {cout<<"d-r A"<<endl;}
};
A a(1,1);
void f( A a, B b);
int main (){
    A b(2,2);
    B a(3,3);
    static A c(4,4);
    f(b,a);
    return 0;
}

void f (A a, B b){
    A f=a;
    B z=b;
    static B r(5,5);
}
