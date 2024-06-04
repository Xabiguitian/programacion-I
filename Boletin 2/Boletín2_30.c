#include <stdio.h>

int main () {
    int num=0, pares=0, impares=0;

    printf("Introduzca diferentes números separados por un espacio: ");

    while (getchar() != '\n') {

        scanf("%d", &num);

        if (num % 2 == 0) {
            pares = pares + num;
        } else {
            impares = impares + num;
        }
    }

    printf("Suma números pares = %d\n", pares);
    printf("Suma números impares = %d\n", impares);

    return 0;
}