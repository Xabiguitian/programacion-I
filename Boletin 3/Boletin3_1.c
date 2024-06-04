#include <stdio.h>

void lineasBlanco (int n){

    while (n>1) {
        printf("\n");
        n--;
    }
    return;
}

int main () {
    int i;

    printf("Indique el número de líneas en blanco que quiere: ");
    scanf("%d", &i);

    lineasBlanco(i);

    return 0;
}