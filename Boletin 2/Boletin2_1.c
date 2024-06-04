#include <stdio.h>

int main() {
    int num;

    printf("Introduzca un múmero entero: ");
    scanf("%d", &num);

    if (num>0) printf("El número es positivo");
    else printf("El número es negativo");

    return 0;
}
