//
//  2DZ Dinamick.c
//  2Semestr
//
//  Created by Алексей Крутов on 06/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//
//функция ввода матрицы
// функция заполнения матрицы
// функция 












#include <stdio.h>

#include <stdlib.h>

int main()

{
    int start=1;
    while (start!=0){
        
        int N,M;
        printf ("Ведите размер матрицы которую хотите создать \n");
        scanf("%d %d", &M, &N);
        int k=1;
        int i;
        int j;
        int **A;
        
        A=(int**)malloc(N*sizeof(int*));
        for(int i=0; i<N; i++){
            *(A+i)=(int*)malloc(M*sizeof(int));
        }
        
        
        
        

        int array=0;
        
        printf ("Будем вводить чтисла сами? если да то жми 0  \n") ;
        
        scanf ("%d" , &k);
        
        //здесь написать 2 функции 
        
        if (k!=0){
            printf("Вот твоя рандомная матрица \n");
            for (int i=0; i<N; i++){
                for (int j=0; j<M; j++){
                    *(*(A+i)+j)=rand()%10;
                    printf ("%d \t", *(*(A+i)+j));
                }
                printf("\n");
            }
        }
        
        else {
            printf("Ведите числа массива \n");
            
            for (int i=0; i<N; i++){
                for (int j=0; j<M; j++){
                    int zn=0;
                    scanf("%d", &zn);
                    *(*(A+i)+j)=zn;
                    printf ("%d \t", *(*(A+i)+j));
                }
                printf("\n");
            }
        }
        
        int dip1=0;
        
        int dip2=0;
        
        
        printf ("Ведите диапазон чисел  \n" );
        
        scanf ("%d %d", &dip1, &dip2);
        dip1=dip1;
        dip2=dip2;
        int *A2;
        A2=(int*)malloc(M*N*sizeof(int));
        
        int l=0;
        
        
        for (i=0; i<N; i++){
            
            for (j=0; j<M; j++){
                
                if (*(*(A+i)+j)>=dip1 && *(*(A+i)+j)<=dip2){
                    *(A2+l) = *(*(A+i)+j);
                    l=l+1;
                    
                }
                
            }
        }
        
        printf("Твой одномерный массив ");
        printf("\n");
        for (int i=0; i<l; i++){
            
            array= array +  (*(A2+i));
            printf ("%d ", *(A2+i));
        }
        
        float sred=0;
        
        
        
        sred = array/l;
        printf("\n");
        printf("Среднее значение =  %.2f \n",sred);
        
        printf("Хочешь повторить? если да то нажми 1 \n");
        scanf ("%d", &start);
    }
}
