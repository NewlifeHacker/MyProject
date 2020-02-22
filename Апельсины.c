//
//  Апельсины.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 23/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include <stdio.h>

int main(){
    
    int N,w,d,P,Pn,dif,k;
    Pn=0;
    N=0;
    w=0;
    d=0;
    P=0;
    
    scanf("%d %d %d %d", &N, &w, &d, &P);
    
    for (int i=1; i<N; i++){
        
        Pn=Pn+i*w;
    }
    
    
    dif=Pn - P ;
    k=dif/(w-d);
    
    
    printf("%d", k);
}
