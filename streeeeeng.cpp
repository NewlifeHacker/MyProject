//
//  streeeeeng.cpp
//  Praktise
//
//  Created by Алексей Крутов on 25/09/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

// Даны две строки состоящие из слов разделенных пробелами. Сформировать строку  //состоящую из сдов, которые встречаются только в одной из строк
   //считать строки полностью
//разделить слова из строк
//сравнить слова
//вписать их в одну строку



#include <stdio.h>
#include <string.h>
#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


int main() {
    
    ifstream text;
    text.open("/Users/newlife/Desktop/std.txt");
    
    if (!text.is_open()){
        cout<<"Error";
        
    }
    else{
        
        cout<<"File is open "<<endl;
        string str2 ,str1,tmp;
        
        
        while ( !text.eof()){
            getline(text, str1);
            getline(text, tmp);
            cout<< str1<<endl;
            cout<< tmp<<endl;
            str2=tmp;
            tmp = " ";
        }
        
      
        
        
       
    }
      text.close();
        
    }
    
      
