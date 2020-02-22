//
//  Экзамены.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 19/11/2018.
//  Copyright © 2018 Алексей Крутов. All rights reserved.
//N абитуриентов, из них M – сдали математику, F – сдали физику, а L – не сдали ни одного
#include <stdio.h>
#include <math.h>
int main(){
    
    long long int N,M,F,L,c,d,k;
    long long int t, p, j;
    
    
    scanf("%lld %lld %lld %lld",&N,&M,&F,&L);
    
    c=fmin(M,F);
    
    //cдали только математику
    t=M-(M+F-N+L);
    //только физику
    p=F-(M+F-N+L);
    //оба сдали
    j=M+F-N+L;
    
     if(M==0||F==0){
     c=0;
     
     }
     if (M+F+L==N){
     c=0;
     }
     d=N-F-L;
     k=N-M-L;
     
     
    
    printf("%lld %lld %lld",j,t,p);
    
    
}
