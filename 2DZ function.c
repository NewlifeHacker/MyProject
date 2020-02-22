//
//  2DZ function.c
//  2Semestr
//
//  Created by Алексей Крутов on 14/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int ** rndom (int **A, int M, int N);
int ** norndom (int **A, int M, int N);
int * create(int **A, int *A2, int M, int N, int dip1, int dip2);
void out(int *A2, int count);


//MAIN

int main()
{
    int start=1;
    while (start!=0){
        
        //Выделение памяти
        
        int N,M;
        printf ("Ведите размер матрицы которую хотите создать \n");
        scanf("%d %d", &M, &N);
        int k=1;
        int **A;
        int array=0;
        
        
        //Выделение памяти
        
        A=(int**)malloc(N*sizeof(int*));
        for(int i=0; i<N; i++){
            *(A+i)=(int*)malloc(M*sizeof(int));
        }
        
        //Вопрос
        
        printf ("Будем вводить чтисла сами? если да то жми 0  \n") ;
        scanf ("%d" , &k);
        
        
        //Заполнение
        
        if (k!=0){
            rndom(A,M, N);
        }else {
            
            norndom(A, M, N);
        }
        
        
        //Диапазон
        
        int dip1=0;
        int dip2=0;
        printf ("Ведите диапазон чисел  \n" );
        scanf ("%d %d", &dip1, &dip2);
        
        // Счетчик для выделения памяти
        
        int count=0;
        for (int i=0; i<N; i++){
            
            for (int j=0; j<M; j++){
        if (*(*(A+i)+j)>=dip1 && *(*(A+i)+j)<=dip2){
            
            count++;
            
        }
        }
        }
        
        //Выделение памяти
        
        int *A2;
        A2=(int*)malloc(count*sizeof(int));
        
        //Заполнение
       
        create(A, A2, M, N, dip1,  dip2);
        
        //
        printf("Твой одномерный массив ");
        printf("\n");
        
        //Вывод
        
        out (A2, count);
    
        //
        for (int i=0; i<count; i++){
            
            array= array + (*(A2+i));
        
        }
        
        float sred=0;
        sred = array/count;
        
        printf("\n");
        printf("Среднее значение =  %.2f \n",sred);
        
        printf("Хочешь повторить? если да то нажми 1 \n");
        scanf ("%d", &start);
    }
        
}
    

//FUNCTION
int ** rndom ( int **A ,int M,int N){
    printf("Вот твоя рандомная матрица \n");
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            *(*(A+i)+j)=rand()%10;
            printf ("%d \t", *(*(A+i)+j));
        }
        printf("\n");
    }return A;
    
}

int ** norndom (int **A, int M, int N){
    printf("Ведите числа массива \n");
    
    for (int i=0; i<N; i++){
        for (int j=0; j<M; j++){
            int zn=0;
            scanf("%d", &zn);
            *(*(A+i)+j)=zn;
            printf ("%d \t", *(*(A+i)+j));
        }
        printf("\n");
    }return A;
}

int * create(int **A, int *A2, int M, int N, int dip1, int dip2){
    
   int l=0;
    for (int i=0; i<N; i++){
        
        for (int j=0; j<M; j++){
            
            
            if (*(*(A+i)+j)>=dip1 && *(*(A+i)+j)<=dip2){
                *(A2+l) = *(*(A+i)+j);
                l+=1;
                
            }
            
        }
    } return A2;
    
}

void out(int *A2, int count){
    for (int i=0; i<count; i++){
        
        printf ("%d ", *(A2+i));
    }
}
