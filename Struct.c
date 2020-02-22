//
//  shto za pizdetc error.c
//  2Semestr
//
//  Created by Алексей Крутов on 12/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>


struct Train
{
    char placeA[20];
    char plB[20];
    int hour;
    int minutes;
} ;
typedef struct Train train;

void input(train *p);
void output(train *p);





int main() {
    
    train k,l,m;
    train *pt=&k;

    input (pt);
    output(pt);
   
    
}

//
void input (train *p ) {
A:
    printf("Введите место отправления \n");
    scanf("%s", p->placeA);
    printf("Введите место прибытия \n");
    scanf ("%s", &p->plB[0]);

    printf("Введите время отправления \n");
    scanf ("%d %d", &p->hour, &p->minutes );
    if(p->hour<0 || p->hour>24 ||p->minutes<0 ){
        printf("Время не в том формате \n");
        goto A;
    }
    
    while (p->minutes>=60 ){
        p->minutes=p->minutes-60;
        p->hour+=1;
    }
    
}


void output (train *p){
    if (p->minutes <10){
        
        
        printf ("%s \n%s \n%d:0%d \n",p->placeA, p->plB, p->hour, p->minutes);
        
    }else {
        printf ("%s \n%s \n%d:%d \n",p->placeA, p->plB, p->hour, p->minutes);
    }
}
