#include <stdio.h>

int main () {
    double num, resultado;
    double bucle1, bucle2, buclefact, factorial, num2, num3, num4;

    printf("Indique el número al que quiere elevar e: ");
    scanf("%lf", &num);

    bucle1 = 1;
    resultado = 1 + num;
    num2 = 2;
    num3 = num*num;
    num4 = 1;
    factorial = 2;
    resultado = resultado + num3 / factorial;
    printf("Resultado provisional %lf\n", resultado);

    while (bucle1 >= 0.0001) {
        num3 = num3 * num;
        num2 = num2 +1;
        factorial = factorial * num2;
        resultado = resultado + num3 / factorial;
        bucle1 *= num / num4;
        num4++;


        printf("Resultado provisional %lf\n", resultado);
    }

    printf("El resultado es %lf", resultado);

    return 0;
}