//
//  File + Streuct.c
//  2Semestr
//
//  Created by Алексей Крутов on 28/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

//#include <stdlib.h>

struct Train
{
    char placeA[30];
    char plB[30];
    int hour;
    int minutes;
} ;
typedef struct Train train;

void input(train *p);
void output(train *p);
void sort (train **pt, int n);


int main() {
    
    FILE *file1, *file2;
    
    train *pt;
    int i,n;
    printf("Введите сколько будет поездов \n");
    scanf("%d", &n);
    pt = (train*)malloc(n * sizeof(train));
    
    for (i=0; i<n; i++ ){
        input(pt+i);
    }
    
    
    file1 = fopen("/Users/newlife/file1.txt", "w");
 
    
    if (file1 == NULL) {
        
        printf("Error opening file");
        
        return 1;
        
    }
    
    else {
        fprintf(file1, "%d",n);
        fprintf(file1, "\n");
        for (i = 0; i<n; i++){
            fprintf (file1, "%s %s ", (pt +i)->placeA, (pt+i)->plB);
            fprintf (file1, "%d %d\n", (pt + i)->hour, (pt+i)->minutes);
        fprintf(file1, "\n");
            
        }
    }
            fclose(file1);
    
    
    file1 = fopen("/Users/newlife/file1.txt", "r+");
    
    file2 = fopen("/Users/newlife/file2.txt", "w");
   /*
    int k;
    int j;
    char str[40];
    char str2[40];
   */
    if (file2 == NULL) {
        printf("Error opening file");
        return 1;
    }
    
    else {
       fscanf(file1, "%d", &n);
       train *ptt;
        train **pt;
        pt=(train**)malloc(n*sizeof(train*));
       ptt = (train*)malloc(n * sizeof(train));
        
        for (i=0; i<n; i++){
            fscanf(file1, "%s\n%s\n %d %d",(ptt+i)->placeA, (ptt+i)->plB, &((ptt+i)->hour), &((ptt+i)->minutes));
        }
        
        for (i=0; i<n; i++){
            pt[i]=&ptt[i];
        
        }
        
        sort(pt,n);
        
        for (i=0; i<n; i++){
            fprintf(file2, "%s %s %d:%d\n",pt[i]->placeA, pt[i]->plB, pt[i]->hour, pt[i]->minutes);
        }
        
        
    }
       fclose(file2);
   
}

void input (train *p ) {
A:
    printf("Введите место отправления \n");
    scanf("%s", p->placeA);
    printf("Введите место прибытия \n");
    scanf ("%s", &p->plB[0]);
    
    printf("Введите время отправления \n");
    scanf ("%d %d", &p->hour, &p->minutes );
    if(p->hour<0 || p->hour>24 ||p->minutes<0 ){
        printf("Не корректное введено время \n");
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
        printf ("%s \n%s \n%d:%d\n",p->placeA, p->plB, p->hour, p->minutes);
    }
}

void sort (train **pt, int n){
    for (int i=0; i<n; i++){
        for (int j=0; j<n-i-1; j++){
            if(pt[j]->hour > pt[j+1]->hour){
                train *temp=pt[j];
                pt[j]=pt[j+1];
                pt[j+1]=temp;
            }
        }
    }
}
