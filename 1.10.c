#include <stdio.h>

// Заменяет табуляции на \t backspace на \d 

int main(){
        int c, p;

        printf ("Введите входной поток  ");
       

            while((c = getchar())!=EOF) {
                if (c == '\t'){
                    c=0;
                putchar(c);
                printf("\\t");
                }
                if (c == '\b'){
                    c=0;
                putchar(c);
                printf("\\b");
                }
                if (c == '\\'){
                    c=0;
                putchar(c);
                printf("\\");
                }

                putchar(c);


             } printf ("Выходной поток ");
                putchar(c);
            
            

            return 0;
}