#include <stdio.h> 

int main() { 
int c, i, j; 
int s[255]; 
for (i = 0; i <=255; ++i ) 
s[i] = 0; 

while ((c=getchar()) != EOF) 
++s[c-'0']; 
for ( j = 0; j <= 255; j++) { 
if(s[j] != 0) { 
printf("%d sym in ASCII:", j+1); 
for (int h = 0; h < s[j]; h++) 
printf("-"); 
printf("\n"); 
} 
} 
}