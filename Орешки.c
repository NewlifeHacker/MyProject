//
//  Орешки.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 12/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main () {
    
    int n,m,k;
    
    scanf("%d %d %d", &n, &m, &k);
    if (n*m>=k){
        printf("YES");
    }else {
        printf("NO");
    }
}
