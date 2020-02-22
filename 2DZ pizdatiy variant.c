//
//  2DZ pizdatiy variant.c
//  2Semestr
//
//  Created by Алексей Крутов on 28/02/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

#include <stdlib.h>

#define M 5

#define N 4

int main()

{
    int start=1;
    while (start!=0){
        
        int k=1;
        int i;
        int j;
        int arr [M][N];
        
        
        float array=0;
        
        printf ("Будем вводить чтисла сами? если да то жми 0  \n") ;
        
        scanf ("%d" , &k);
        
        if (k!=0){
            printf("Вот твоя рандомная матрица \n");
            for (i=0; i<M; i++){
                
                for (j=0; j<N; j++){
                    
                    arr[i][j]=rand()%10;
                    printf ("%d \t", arr[i][j]);
                }
                printf("\n");
            }
        }
        
        else {
            printf("Ведите числа массива \n");
            
            for (i=0; i<M; i++){
                
                for (j=0; j<N; j++){
                    
                    scanf ("%d", &arr[i][j] );
                    
                    printf ("%d \t", arr[i][j]);
                    
                }
                printf("\n");
            }
        }
        
        
        
        
        
        int dip1=0;
        
        int dip2=0;
        
        
        
        printf ("Ведите диапазон чисел  \n" );
        
        scanf ("%d %d", &dip1, &dip2);
        dip1=dip1-1;
        dip2=dip2-1;
        int ll=dip2-dip1;
        int array2[ll*N];
        int el=0;
        for (int i=0; i<M; i++){
            
            for (int j=dip1; j<=dip2; j++){
                
                array=array+ arr[i][j];
                
                array2[el]=arr[i][j];;
                el=el+1;
            }
            
            
            
        }
        printf("Твой одномерный массив ");
        printf("\n");
        for (int i=0; i<el; i++){
            printf ("%d ", array2[i]);
        }
        
        float sred=0;
        float m=0;
        m=M*(dip2-dip1 +1);
        
        sred = array/m;
        printf("\n");
        printf("Среднее значение =  %.2f \n",sred);
        
        printf("Хотишь повторить? если да то нажми 1 \n");
        scanf ("%d", &start);
    }
}
