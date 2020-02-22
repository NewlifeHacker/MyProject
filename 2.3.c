#include <stdio.h>

int hhtoi (char str[]) {

    int i, n=0;
    if (str[0] == '0' && str[1] == 'x'){
         for (i=2; str[i] != '\0'; ++i){
             if (str[i] >= '0' && str[i]<= '9') 
                 n = 16 * n +(str[i] - '0');
                 else if( str[i]>= 'a' && str[i]<='f')
                  n = n * 16 +(str[i]-'W');        
         }

    } else if (str[0] == '0' && str[1] == 'X'){
            for (i=2; str[i] != '\0'; ++i){
            if (str[i] >= '0' && str[i]<= '9') 
                 n = 16 * n +(str[i] - '0');
            else if(str[i]>= 'A' && str[i]<='F')
            n = n*16 +(str[i] - '7');
            }

    }
    return n;
}
int main(){
 char s[]= "0x20f";
 char hex[1000];
 scanf (" Введите 16 ричное число в формате  0x***** или 0X***** %s ", hex);

    printf("%d\n", hhtoi(s) );
}