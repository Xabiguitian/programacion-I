#include <stdio.h>

int main () {
    int numero, suma = 0;

    printf("A continuación introduzca los números enteros de los que desee calcular la suma separados por espacios:\n");

    while (numero > 0) {
        scanf("%d", &numero);

        suma += numero;
    }

    printf("La suma de los números introducidos es %d\n", suma);

    return 0;
}
