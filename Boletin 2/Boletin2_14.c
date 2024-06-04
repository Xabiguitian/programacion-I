#include <stdio.h>

int main() {
    int num1, num2, resultado;

    printf("Introduzca un número entero positivo de 3 cifras: ");
    scanf("%d", &num1);
    printf("Introduzca un número entero positivo de 1 cifra: ");
    scanf("%d", &num2);

    if(num1 > 99 && num1 <1000 && num2 >= 0 && num2 < 10) {

        resultado = num1 * num2;

        printf("\n");
        printf("\t%d\n", num1);
        printf("\tx %d\n", num2);
        printf("\t====\n");
        printf("\t%d\n", resultado);

    }else if (num1 < 99 || num1 > 999) {

        printf("El primer número no tiene tres cifras!!!\n");

    } else {

        printf("El segundo número no tiene una cifra!!!\n");

    }

    return 0;
}
