//
//  Арифметическая прогрессия.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 13/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main (){
    
    int a,b,d,n, A;
    
    scanf("%d %d %d", &a, &b, &n );
    d=b-a;
    A= a + d*(n-1);
    printf("%d \n", A);
}
