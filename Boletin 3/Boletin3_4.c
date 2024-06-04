#include <stdio.h>
#include <math.h>

int resolverEcuacion (float a, float b, float c) {
    float resultado1;

    resultado1 = (-b + sqrt(b*b - 4 * a * c))/2*a;

    return resultado1;
}

int main () {
    float a, b, c;

    printf("Introduzca los parámetros a b c de la ecuación de segundo grado: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("El resultado es: %d", resolverEcuacion(a, b, c));

    return 0;
}