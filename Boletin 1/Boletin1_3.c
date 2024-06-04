#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf("Introduzca la base del triángulo:");
    scanf("%f", &base);
    printf("Introduzca la altura del triángulo:");
    scanf("%f", &altura);

    area = (base * altura)/2;

    printf("La superficie del triángulo de base %f y altura %f es %f\n", base, altura, area);

    return 0;
}
