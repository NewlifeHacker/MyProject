//
//  Баскетбол.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main () {
    
    int a,b,c,d,f,g,k,l,h,t;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    scanf("%d %d",&f,&g);
    scanf("%d %d",&k,&l);
    
    h=a+c+f+k;
    t=b+d+g+l;
    if (h>t){
    printf("1");
           } else if (t>h){
               printf("2");
           }
           else {
               printf("DRAW");
           }
}
