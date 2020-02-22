#include <stdio.h>

void squeeze(char s1[],char s2[]);

int main(){
char s1[101];
char s2[101];

scanf (" Введите строку из которой хотите удалить символы %s \n", s1);
scanf("Введите строку символов которые хотите удалить  %s \n", s2);

squeeze(s1,s2);
printf("%s\n",s1);




}
void squeeze(char s1[],char s2[]) {
    int i, j, n;
    for (i=j=0; s1[i] != '\0'; i++){
        s1[j++] = s1[i];
        for (n=0; s2[n] !='\0'; n++){
            if (s1[i]==s2[n])
            j--;
        }

    } 

}