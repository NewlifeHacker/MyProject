//
//  SemAVM.cpp
//  Praktise
//
//  Created by Алексей Крутов on 24/07/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <iostream>
#include <vector>
#include <thread>
#include <mutex>

using namespace std;
mutex mt;


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
       // delete []m[i];
        
    }
    
}

void SumVector ( int * row, int n, int * res, int index){
    res[index] = 0;
    for (int i =0 ; i< n; i++ )
        res[index] += row[i];
        mt.lock();
    
    cout << index << " : " << res[index] <<endl;
      mt.unlock();

}

int main () {
    
     vector <thread*> ths;
 
    int s=0;
    int n = 5 ;
    auto m = create(n);
    int* res = new int[n+1];
    for (int i = 0; i<n; i++){
      
       auto th = new thread (SumVector, m[i], n, res, i);
        
         ths.push_back(th);
        
    }
    for (auto t : ths){
        t->join();
    }
    //нужно дождаться выполнения всех потоков
    //нам понадобится join
    //возникает борьба за общие ресурсы поэтому в терминале мы видим все в перемешку
        SumVector(res, n, res, n);//гонка вычислений
        cout<<s<<endl;

}
