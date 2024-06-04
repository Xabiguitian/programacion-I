#include <stdio.h>

int main() {
    int num1, num2;

    printf("Introduzca su primer número entero ");
    scanf("%d", &num1);

    printf("Introduzca su segundo número entero ");
    scanf("%d", &num2);

    if(num1 % num2 == 0) printf("%d es divisible por %d.\n", num1, num2);
    else printf("%d no es divisible por %d.\n", num1, num2);

    return 0;
}
