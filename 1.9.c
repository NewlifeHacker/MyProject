#include <stdio.h>


int main(){
        int c, p, t, n;
        p=n=t=0;

        printf ("Введите входной поток  ");
       

            while((c = getchar())!=EOF) {
                if ( c == ' ') {
                putchar (c);
                 while ((c = getchar()) == ' ')//Заменяет последующие пробелы на один

                 putchar(0);
                }
                printf ("Выходной поток ");
                putchar(c);
            }
            

     

   

}