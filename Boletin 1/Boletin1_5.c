#include <stdio.h>

int main() {
    float base;
    float altura;
    float area;

    printf("Introduzca la base del rectángulo:");
    scanf("%f", &base);
    printf("Introduzca la altura del rectángulo:");
    scanf("%f", &altura);

    area = (base * altura);

    printf("La superficie del rectángulo de base %f y altura %f es %f\n", base, altura, area);

    return 0;
}
