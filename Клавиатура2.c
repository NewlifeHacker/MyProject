//
//  Клавиатура2.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main(){
    int i=0;
    char n;
    const char al[]="qwertyuiopasdfghjklzxcvbnm";
   
    
    
    scanf("%c",&n);
    for (i=0; i<26;i++){
        if (al[i]==n){
            printf("%c", al[i+1]);
        }else if (n=='m'){
            i=0;
            printf("%c",al[i]);
            return 0;
        }
        }
    
}
