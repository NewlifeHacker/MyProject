//
//  Модуль суммы.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 20/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//ЗДЕСЬ ЖЕ НАЖО ВЫДЕЛИТЬ ПОДПОСЛЕДОВАТЕЛЬНОСТЬ
// КАК ЭТО СДЕЛАТЬ? НАДО ВСЕ СЛУЧАИ РАССМОТРЕТЬ, КАК??
//

#include <stdio.h>

int main(){
    
    int n,c,i,j,MAX;
    int arr[10000];
    scanf("%d",&n);
    scanf("%d",&arr[10000]);
    
    MAX=0;
    
    for (i=0; i<n; i++){
        
        for (j=1;j < (n-1); j++ ){
            c=arr[j]-arr[i];
            if(MAX<c){
                MAX=c;
            }else {
                printf("%d %d", i,j);
            }
    }
        
}
    



    
    
    
    
}

