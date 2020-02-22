//
//  Автобусная экскурсия Автобусная экскурсия Автобусная экскурсия Автобусная экскурсия.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
int main(){
    
    
    int n,i;
    int h=437;
    int mos[10000];
    
    scanf("%d",&n);
    
    for ( i=0; i<n; i++){
        scanf("%d", &mos[i]);
    }
    
    i=0;
  
    
    
    
    for (i=0; i<n; i++){
    if (h>=mos[i]){
        printf ("Crash %d \n", i+1);
        return 0;
    }
    }
        
        for (i=0; i<n; i++){
            if (h<mos[i]){
                printf ("No crash");
                return 0;
            }
        }
}
