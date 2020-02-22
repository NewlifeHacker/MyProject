//
//  Два бандита.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main () {
    
    int a,b,c;
    scanf("%d %d",&a,&b);
    
    c=a+b-1;
    a=c-a;
    b=c-b;
    printf("%d %d", a, b);
    
}
