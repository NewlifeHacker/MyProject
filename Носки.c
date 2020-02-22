//
//  Носки.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 20/12/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//

#include "stdio.h"
int main() {
    
   long int N, a,b,c,k, n1,n2,n3;
    
    scanf("%ld",&N);
    k=N%144;
    n1=(N-k)/144;
    
    n2=(k-k%12)/12;
    
    n3=N-n1*144-n2*12;
   
    if (n3*105>1025) {
        
        n2=n2+1;
        n3=0;
    }
    if (n2*1025+n3*105>11400){
        
        n1=n1+1;
        n2=0;
        n3=0;
    }
    printf("%ld %ld %ld", n1,n2,n3);
    
}
