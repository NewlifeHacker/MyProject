//
//  Больше меньше.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main() {
    
    int a,b;
    scanf("%d %d",&a,&b);
    if (a==b){
        printf("=");
    }else if (a<b){
        printf("<");
    }else {
       printf(">");
    }
}
