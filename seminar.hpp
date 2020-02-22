//
//  seminar.hpp
//  Praktise
//
//  Created by Алексей Крутов on 26/09/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef seminar_hpp
#define seminar_hpp
#include <stdio.h>
#include<iostream>

using namespace std;

template <typename T1, typename T2 >
class MyClass
{

private:
  T1 value;
  T2 value2;
    

public:
  MyClass (T1 value, T2 value2 ){
    this -> value = value;
    this -> value2 = value2;
  }
    template <typename T3>
    T3 poww (T3 a){
        cout<< a*a;
      return a*a ;
  }

  

  void size(){
    cout <<sizeof(value)<<"   -1 type"<<endl;
    cout <<sizeof(value2)<<"  -2 type"<<endl;

  }
    

};

//template <typename T>
//T sum (T a, T b){
   // cout<<"aaaaaaa"<< a+b <<endl;
 // return a + b;
//}

#endif /* seminar_hpp */
