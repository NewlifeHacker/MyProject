#include <stdio.h>
int main ()
{
 int c;
c = getchar();
while (c != EOF) {
    putchar(c);
    c = getchar ();
}
if (c==1)
{
printf("1");
}
else {
    printf("0");
}
    return 0;
    }