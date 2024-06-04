#include <stdio.h>

int main () {
    float numeros=0, suma_numeros=0;
    int cantidad=0;

    printf("A continuación introduzca los números de los que desee calcular la media separados por espacios: ");


    while (getchar() != '\n') {

        scanf("%f", &numeros);
        printf("%f\n", numeros);
        suma_numeros += numeros;
        cantidad++;

    }

    printf("%d\n", cantidad);
    printf("El resultado de la media aritmética es: %f", suma_numeros / cantidad);

    return 0;
}