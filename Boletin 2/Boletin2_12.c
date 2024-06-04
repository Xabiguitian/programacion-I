#include <stdio.h>

int main() {
    int num1, num2, num3;
    int resultado;
    int resto;

    printf("Introduzca primer número: ");
    scanf("%d", &num1);
    printf("Introduzca segundo número: ");
    scanf("%d", &num2);
    printf("Introduzca tercer número: ");
    scanf("%d", &num3);

    if (num1>num2 && num2>num3) {
        resultado = num1 / num3;
        resto = num1 % num3;
        printf("%d dividido |entre %d\n", num1, num3);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }else if (num1>num3 && num3>num2) {
        resultado = num1 / num2;
        resto = num1 % num2;
        printf("%d dividido |entre %d\n", num1, num2);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }else if (num2>num1 && num1>num3) {
        resultado = num2 / num3;
        resto = num2 % num3;
        printf("%d dividido |entre %d\n", num2, num3);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }else if (num2>num3 && num3>num1) {
        resultado = num2 / num1;
        resto = num2 % num1;
        printf("%d dividido |entre %d\n", num2, num1);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }else if (num3>num1 && num1>num2) {
        resultado = num3 / num2;
        resto = num3 % num2;
        printf("%d dividido |entre %d\n", num3, num2);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }else if (num3>num2 && num2>num1) {
        resultado = num3 / num1;
        resto = num3 % num1;
        printf("%d dividido |entre %d\n", num3, num1);
        printf("\t\t\t-------\n");
        printf("\t\tR:%d    C:%d\n", resto, resultado);
    }

    return 0;
}