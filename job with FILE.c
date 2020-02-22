//
//  job with FILE.c
//  2Semestr
//
//  Created by Алексей Крутов on 14/03/2019.
//  Copyright © 2019 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main(){
    char str[1000];
    char str2 [200]="New life is going";
    FILE *f;
    f=fopen("/Users/newlife/KeyOneT.txt", "r+a");
    if(f!=NULL){
        printf("Слушай, ты создал файл\n");
        fputs(str2,f);
       fgets(str, 100, f );// Получение данных из файла /куда сколько и откуда
       printf("%s", str);
        while (!feof (f)){
            
        fscanf(f, "%s", str );
        
        }
        
    }else{
        printf("Попробуй в следующий разок\n");
        return 0;
        
    }
    
}
