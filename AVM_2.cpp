//
//  AVM_2.cpp
//  Praktise
//
//  Created by Алексей Крутов on 20/07/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//


/*#include <iostream>
#include <thread>
#include <vector>
#include <mutex>

using namespace std;

mutex m;
void print (char ch){
    int n=100;
    m.lock();
    for (int i=0 ; i< n; i++){
        cout<<ch<<endl;
        m.unlock();
        
        
    }
    
}

int main (){
    char c='f';
    
    
    vector <thread*> v;
    {
        thread *th = new thread (print, c);
        v.push_back(th);
        
        
    }
    for (auto t: v ){
        if (t){
            t->join();
        }
    }
    
    
 }


*/

#include <iostream>

#include <vector>

#include <chrono>

#include <thread>

#include <mutex>

using namespace std;

using namespace chrono;

mutex mt;

int** init(int n);

void clear(int**m, int n);

void sum(int*v, int n, int*res, int k);

int main()

{
    
    int n=1000;
    
    int*res=new int[n];
    
    vector <thread*> ths;
    
    int**m=init(n);
    
    auto beg=system_clock::now();
    
    for(int i=0;i<n;i++)
        
    {
        
        auto th=new thread(sum,m[i],n,res,i);
        
        ths.push_back(th);
        
    }
    
    for(auto t:ths)
        
        t->join();
    
    int s=0;
    
    for(int i=0;i<n;i++)
        
        s+=res[i];
    
    auto fin=system_clock::now();
    
    cout<<duration_cast<microseconds>(fin-beg).count()<<endl;
    
    cout<<s<<endl;
    
    delete [] res;
    
    clear(m,n);
    
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

void sum(int*v, int n, int*res, int k)

{
    
    int s=0;
    
    for(int i=0;i<n;i++)
        
        s+=v[i];
    
    mt.lock();
    
    cout<<k<<"\t"<<s<<endl;
    
    mt.unlock();
    
    res[k]=s;
    
}


