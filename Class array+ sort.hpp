//
//  Class array+ sort.hpp
//  2Semestr
//
//  Created by Алексей Крутов on 04/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef Class_array__sort_hpp
#define Class_array__sort_hpp

#include <stdio.h>
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
    ~train(){};
    void set_train(string , string, int,int);
    void get_train();
    void input();
    void sort (train*, int);
    void randd ();
    bool operator == (train &other );
    bool operator < (train &other);
    bool operator > (train &other);
    
    
};

#endif /* Class_array__sort_hpp */
