//
//  FirstDZ.c
//  2Semestr
//
//  Created by Алексей Крутов on 13/02/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.


#include <stdio.h>

int main()

{
    
   
    int yes=1;
    

    
    
    while (yes!=0) {
        int n=1;
        float x;
        float s;
        int k=1;
        float m=1;
        int l=1;
        
    printf("Введите сначала N затем X " );
    scanf("%d",&n );
    scanf("%f",&x );
    
    if (n==0||x==0) {
        printf("error \n");
        return 0;
        
    }
    
    s=k/(x+k);
    m=(x+k);
    for(k=2 ; k<=n; k++) {
        
        m=m*(x+k);
        l=l*k;
        s=s+l/m;
    
        
    }
    
    float r;
    r = 1/(x-1);
    float t;
    t=r-s;
    printf("Приближенное значение= %.3f Точное значение= %.3f Разность= %.3f \n", s , r, t );
        printf ("Запустить программу еще раз? Нажмите 1 чтобы продолжить " );
        scanf ("%d", &yes);
    }
  
    
}
