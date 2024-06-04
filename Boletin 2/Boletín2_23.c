#include <stdio.h>

int main () {
    int numero_introducido=0;

    while (numero_introducido < 20 || numero_introducido > 30) {
        printf("Introduzca un número: ");
        scanf("%d", &numero_introducido);
    }

    printf("El número está entre 20 y 30");

    return 0;
}