//
//  Временной ключ.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 16/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include "math.h"

int main() {
    

    int i=0;
   
    int n,c;
    
    scanf("%d", &n);
    c=n;
    while(n!=0){
        if (n%2!=0)
        {
            i++;
            n=n/2;
        }else {
            n=n/2;
        }
    }
    
        printf("%d",c+i);
}
    

