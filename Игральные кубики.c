//
//  Игральные кубики.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 13/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
int main() {
    
    int n, max, min;
    
    scanf("%d",&n);
    
    min =0;
    
    max=n*6;
    if (n%11==0){
        min=n/6;
        
    }else if (n%6==0) {
        min = n/6;
    }else if (n%5==0) {
        min = (n/5)*2;
    }else if (n%4==0){
        min= (n/4)*3;
    }else if (n%3==0){
        min= (n/3)*4;
    }else if (n%2==0){
        min= (n/2)*5;
    }      else if (n%7==0){
        min= (((n-1)/6) + 6);
    
    }else if (n%8==0){
        min= (n%6)*5 + n-n%6;
    }else if (n%1==0){
        min= (n/1)*6;
    }else if (n%1==0){
        min= (n/1)*6;
    }else if (n%1==0){
        min= (n/1)*6;
    }else if (n%1==0){
        min= (n/1)*6;
    }
    printf("%d %d", min, max);
    
}
