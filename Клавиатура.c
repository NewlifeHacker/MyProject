//
//  Клавиатура.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main(){
    int i=0;
    char n='q';
    const char al[]="qwertyuiopasdfghjklzxcvbnm";
    FILE *fin, *fout;
    
    fin = fopen("input.txt", "r");
    fout = fopen("input.txt", "w");
    
    fscanf(fin,"%c",&n);
    for (i=0; i<25;i++){
        if (al[i]==n){
            fprintf(fout,"%c", al[i+1]);
        }else if (i==25){
            fprintf(fout,"q");
        }
       
    }
    fclose(fin);
    fclose(fout);
    return 0;
}
