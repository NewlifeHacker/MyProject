//
//  AVM.cpp
//  Praktise
//
//  Created by Алексей Крутов on 21/07/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <iostream>

#include <vector>

#include <chrono>

#include <thread>

#include <mutex>

using namespace std;

using namespace chrono;

mutex mt;

void sum(int*v, int n, int*res, int k)

{
    
    int s=0;
    
    for(int i=0; i<n; i++)
        
        s+=v[i];
    
    mt.lock();
    
    cout << k << "\t" << s << endl;
    
    mt.unlock();
    
    res[k]=s;
    
}

int** init(int n)

{
    
    int**m= new int*[n];
    
    for(int i=0;i<n;i++)
        
    {
        
        m[i]= new int[n];
        
        for(int j=0;j<n;++j)
            
            m[i][j]=0;
        
    }
    
    return m;
    
}

void clear(int**m, int n)

{
    
    for(int i=0;i<n;i++)
        
        delete[] m[i];
    
    delete[] m;
    
}

int main()

{
    
    int n=10;
    
    int*res=new int[n];
    
    vector<thread*> ths;
    
    int**m=init(n);
    
    auto st=system_clock::now();
    
   /* for(int i=0; i<n; i++)
        
    {
        
        auto th = new thread(sum, m[i], n, res, i);
        
        ths.push_back(th);
        
    }
    
    for(auto t:ths)
        
        t->join();
   */
    int s=0;
    
    for(int i=0; i<n; i++)
        
        s+=res[i];
    
    auto fin=system_clock::now();
    
    cout << duration_cast<microseconds>(fin-st).count() << endl;
    
    delete [] res;
    
    clear(m,n);
    
}
