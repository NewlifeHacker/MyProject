//
//  Наперстки2.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 15/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
//swich case

int main () {
    
    int a,b,c,k, m, t;
    a=1;
    k=1;
    m=2;
    t=3;
    b=2;
    c=3;
    char s;
    
    s=getchar();
    
    switch (s) {
        case 'A':
            a = a + b;
            b = b - a;
            b = -b;
            a = a - b;
            break;
            
            case 'B':
            b = b + c;
            c = c - b;
            c = -c;
            b = b - c;
            
            break;
            
            case 'C':
            
            a = a + c;
            c = c - a;
            c = -c;
            a = a - c;
            
            break;
    
    }
    
    printf("%d",a);

}
