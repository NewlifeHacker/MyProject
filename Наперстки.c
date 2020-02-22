//
//  Наперстки.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 13/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include "math.h"
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
    if (s=='A'){
        a=m;
        b=k;
        
    }else if (s=='B'){
        c=m;
        b=t;
    }else if (s=='C'){
        while (s=='C') {
            a=t;
            c=k;
            
        }
        
    }
    printf("%d", a);
}
