#include <stdio.h>
#include <math.h>


int main(){

    float res=1;
    

for (long int i=1; i< 90000000000; i++){

    res= res*(1+1/i);
}

printf ("%f", res);

}