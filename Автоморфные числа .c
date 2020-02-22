//
//  Автоморфные числа Автоморфные числа Автоморфные числа.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 22/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

long long int maign(){
   unsigned long long int a,b,c,numb,count, ost,j;
   unsigned long long int k;
    count=1;
    numb=1;
    j=0;
    a=0;
    b=0;
    k=1;
    
    scanf("%llu %llu", &a, &b);
    
    c=b-a+1;
    
   unsigned long long int in[c];
   unsigned long long int out[c];
    //char arr[c];
    for (int i=0; i<c; i++)
    {
        in[i]=a;
        //arr[c]=a;
        a++;
    }
    for (int i=0; i<c; i++)
    {
        
        k=in[i];
        
        count=0;
        
        while (k!=0)
        {
            
            k=k/10;
            count++;// считаем, сколько цифр в начальном числе
            
        }
        
        
        k=in[i];
        k=k*k;
        numb=1;
        for (int i=0; i<count; i++)//нахоим сколько цифр с конца надо отделить
        {
            numb=numb*10;
        }
        
        ost=k%numb;//отделили числа
        
        if(in[i]==ost)//сравниваем равны или нет
        {
            out[j]=in[i];
            j++;
            printf("%llu ", out[j-1]);
        }
        
        
    }
    return 0;
}
    int main(){
        maign();
    }
    

