//
//  seminar.cpp
//  Praktise
//
//  Created by Алексей Крутов on 26/09/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include "seminar.hpp"


int main(){
  int a = 5020093;
  double v= 5.3939;
  int k =66;


  MyClass <int, int> A (a,a);
  MyClass <int, int> A2 (a,a);
  A.size();
  A2.size();
  //sum (A,A2);
  return 0;
}
