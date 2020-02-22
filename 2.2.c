#include <stdio.h>
#define lim 10

int main() {
int i, d;
char str[lim];

for (i=0; i<lim; i++){
    str[i]=0;
}

for (i = 0; (d=getchar())!= EOF; ++i)
    {
if (i==lim-1){
    break;
}
if (d== '\n'){
    break;
}
str[i]=d;

    }

    str[i]='\0';
    printf ("%s\n \a \a", str);
    return 0;
}
