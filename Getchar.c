#include <stdio.h>

int main() {
    int  nl;
    char c;

    nl = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n'){
        ++nl;}
    }
    printf("%d\n", nl);

}