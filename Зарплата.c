//
//  Зарплата.c
//  ACMPtasks
//
//  Created by Алексей Крутов on 20/12/2018.
\
#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c,d,g,s,k,m;
    scanf("%d %d %d", &a, &b, &c);
    k=fmin(b,c);
    d=fmin(a,k);
    m=fmax(b,c);
    g=fmax(a,m);
    s=g-d;
    printf("%d",s);
}
