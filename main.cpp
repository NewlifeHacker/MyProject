//
//  main.cpp
//  Praktise
//
//  Created by Алексей Крутов on 11/07/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <iostream>
#include <ctime>
#include <chrono>
#include <fstream>
#include <string>
#include <iomanip>


using namespace std;
using namespace chrono;

int ** create( int n)
{
    int**M=new int*[n];
    for (int i=0; i<n; ++i){
        
        *(M+i)= new int [n];
        for ( int j=0; j<n; ++j){
            M[i][j]=1;
        }
    }
    return M;
    
}
void clear(int **m, int n){
    for (int i=0; i<n; i++){
        delete []m[i];
        
    }
    
}
int sumgood(int** m, int n){
    int sum=0;
    
    for (int i=0; i<n; i++ ){
        for (int j =0; j<n; j++){
            
        
            sum+=m[i][j];
        }
    }
     //cout<<"Sum="<<sum<<endl<<endl;
    
    return sum;
}

int sumnogood(int**m, int n){
       int sum=0;
    
    for (int i=0; i<n; i++ ){
        for (int j =0; j<n; j++){
            
            
            sum+=m[j][i];
        }
    }
   // cout<<"Sum="<<sum<<endl<<endl;
    return sum;
}

void print (int**m, int n){
    
    ofstream f;
    f.open("/Users/newlife/file1.txt", ios::out);
    
    for (int i=0; i<n; i++ ){
        for (int j =0; j<n; j++){
            
            
            f<<m[i][j];
            
        }
    }
    f.close();
   
}

int main( ) {

   // int n;
   //cout<<"Введите размер матрицы"<<endl;
   // cin>>n;
    
    
    for (int n=6; n<2000; n*=6){
        
    create(n);
        
    auto start= system_clock::now();
    
    sumgood(create (n), n);
   
    auto afrerstart=system_clock::now();
    
    cout<<"time good: ";
    cout<<duration_cast<microseconds>(afrerstart-start).count()<<endl;
   
    clear(create (n), n);
    auto start_2=system_clock::now();
    sumnogood(create(n), n);
        
    auto afrerstart_2=system_clock::now();
    cout<<"time no good:";
    
    cout<<duration_cast<microseconds>(afrerstart_2-start_2).count()<<endl;
       
    auto start_3= system_clock::now();
        
        print(create(n), n);
    
    
        
    auto afrerstart_3=system_clock::now();
        
        cout<<"FILE = ";
        
         cout<<duration_cast<microseconds>(afrerstart_3-start_3).count()<<endl;
        
    }
    
    
}
