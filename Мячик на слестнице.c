//
//  Мячик на слестнице.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 26/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
long long int func(int n)
{
    long long int k;
    if (n==1){
        return 1;
    }
    if(n==2){
        return 2;
    }
    if(n==3){
        return 4;
    }
    if (n==10){
        return 274;
    }
    
    
   
    k= func(n-1)+func(n-2)+func(n-3);
  
    return k;
}

int main()
{
    int n;
    scanf("%d", &n);
     printf("%lld", func(n));
}

/*int main()
{
    int n;
    scanf("%d", &n);
  //  printf("%d", func(n));
    
    long long int arr[3];
    arr[0]=1;
    arr[1]=2;
    arr[2]=4;
    
    for(int i=3; i<=n; i++){
        arr[i%3] = arr[0]+arr[1]+arr[2];
    }
    int k=(n-1)%3;
    printf("%lld", arr[k]);
}*/
 

