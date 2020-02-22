//
//  Class array+ sort1.cpp
//  2Semestr
//
//  Created by Алексей Крутов on 16/05/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#ifndef Class_array__sort1_hpp
#define Class_array__sort1_hpp

#include <iostream>
#include <string>

#include "Class array+ sort.hpp"
#include <stdio.h>

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
bool train::operator==(train &other){
    return (this->placeA == other.placeA && this->plB == other.plB &&this->hour == other.hour &&this->minutes == other.minutes);
    
}

bool train::operator < (train &other){
    if(this->hour < other.hour && this->minutes < other.minutes){
        return true;
    }
    if (this->hour > other.hour || (this->hour <= other.hour &&  this->minutes > other.minutes) ){
        return false;
    }
    else{
        return false;
    }
}
bool train::operator > (train &other){
    if(this->hour > other.hour && this->minutes > other.minutes){
        return true;
    }
    if (this->hour < other.hour || (this->hour >= other.hour &&  this->minutes < other.minutes) ){
        return false;
    }
    else{
        return false;
    }
}

void sort (train *arr, int n) { //по возрастанию
    
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1] < arr[j]){
                train temp=arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0; i<n-1; ++i){
        for (int j=0; j<n-1; ++j){
            if(arr[j+1] < arr[j]){
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
            if(arr[j+1] > arr[j]){
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

#endif
