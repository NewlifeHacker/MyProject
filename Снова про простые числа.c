//
//  Снова про простые числа.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 23/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include <math.h>


int is_simple (int n)
{
    int i;
    if (n=1)//1 не простое!
    {
        return 1;
    }
    for (i=2; i<=sqrt(n); i++)
        if ((n % i) == 0) return 0;
    return 1;
}

int summ (int n){
    int sum=0;
    while(n!=0)// сосчитали сумму числа простого
    {
        
        sum+=n%10;
        n/=10;
        
    }
    int s=sum;
    return s;
}

int main(){
    
    
    int  a,b,j,t,m,max;
    j=0;
    t=0;
    m=-1;
    //int count=0;
    max=0;
    
    scanf("%d %d", &a, &b);
    int i=a;
    for ( i=b; i>=a; i--)
    {
        if (is_simple(i))
        {
            
           if (summ(m)<summ(i))
           {
               m=i;
           }
        }
        
    }
    
    if (a==b && a==1 && b==1)
    {
        printf("-1" );
    }else {
        printf("%d", m);
    }
    
}
 
