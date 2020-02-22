#include <stdio.h>


int main(){
        int c, p, t, n;
        p=n=t=0;
       

            while((c = getchar())!=EOF) {
                if ( c == ' ') //Подсчет пробелов
                p++;
                if(c == '\t')//Подсчет табуляций
                t++;
                if(c == '\n')// Подсчет новых строк
                n++;
        
            }

     

    printf(" Space = %d\n",p); 
    printf(" Tabulation = %d\n",t); 
    printf(" New string = %d\n",n); 

}