//
//  Клетки.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 13/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//
#include <stdio.h>

int main (){
    char C;
    int k;
    
    scanf("%c %d",&C, &k );
    
    if (((C=='A')|| (C=='C') ||  (C=='E') || (C=='G')) && (k%2!=0)){
        printf("BLACK");
    }else if (((C=='B')|| (C=='D') || (C=='F')|| (C=='H')) && (k%2==0) ) {
        printf("BLACK");
        }else {
            printf("WHITE");
        }
     }

