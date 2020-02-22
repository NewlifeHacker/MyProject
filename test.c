#include <stdio.h>
int main ()
{
 float far, cel, low, step, upper;
 step = 4;
 low = -273;
 upper = 273;
 printf ("  C    F\n");
 for (cel = low; cel <= upper; cel+=step){
     far = (cel*9.0)/5.0 + 32;
     printf ("%3.0f %2.1f\n", cel, far );

 }
    return 0;
} 