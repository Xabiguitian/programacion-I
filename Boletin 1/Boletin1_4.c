#include <stdio.h>

int main() {
    float base;
    float altura;
    float perimetro;

    printf("Introduzca la base del rectángulo:");
    scanf("%f", &base);
    printf("Introduzca la altura del rectángulo:");
    scanf("%f", &altura);

    perimetro = base * 2 + altura * 2;

    printf("El perímetro del rectángulo de base %f y altura %f es %f\n", base, altura, perimetro);

    return 0;
}