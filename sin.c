#include <stdio.h>
#include <math.h>

int factorial (int k){

    int fact = 1;

    for (int i=1; i<=k; i++){
        fact = i * fact;
        }
    return fact;
}

int main(){
    double c,x = 0.0,m, fak = 0.0,  factor = -1;

    printf("Enter gradus\n");
    scanf("%lf", &x);
    printf("Enter accuracy\n");
    scanf("%lf", &m);

    if(m==0|m>20)
    {
        printf("Accurcy must will be>0 and<20\n ");
        return 0;
    }

    x=x * 3.14 / 180;
    c=sin(x);

    for (int i=1 ; i <= m; i=i+2)
    {
        factor *= -1;
        fak = fak + factor * pow(x,i) / factorial(i);
    }

    printf("%.6f with math libraries\n", c);
    printf("%.6f sin with my function \n", fak);
    return 0;
}
