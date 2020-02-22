//
//  Эволюция.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 30/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
int main()
{
   
    long long int a,n,b,c, del1, del2,k;
    scanf("%lld %lld %lld",&n, &a, &b);
    k=0;
    if (a<b)
    {
        c=a;
    }else {
        c=b;
    }
    
    if (c==2)
    {
        k=1;
    }
    
    del1=a;
    del2=b;
    
    while(del1!=del2)
    {
        if(del1>del2){
            del1=del1/2;
        }else{
        del2=del2/2;
        }
    }
    if(k!=1)
    {
        printf("%lld ",del1);
    }else{
        printf("%lld ",k);
    }
}

