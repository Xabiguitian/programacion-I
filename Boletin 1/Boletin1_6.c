#include <stdio.h>

int main() {
    float radio;
    float area;
    float volumen;

    printf("Introduzca el radio de la esfera:");
    scanf("%f", &radio);

    area = 4 * 3.14 * radio * radio;
    volumen = 4/3 * 3.14 * radio * radio * radio;

    printf("Sabiendo que el radio es %f, su area es %f y su volumen es %f\n", radio, area, volumen);

    return 0;
}