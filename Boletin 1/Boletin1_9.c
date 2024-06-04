#include <stdio.h>

int main() {
    char name[20];
    int age;
    int hijos;
    int sueldo_anual;
    int sueldo_mensual;

    printf("Introduzca usted su nombre: ");
    scanf("%s", name);
    printf("Introduzca usted su edad: ");
    scanf("%d", &age);
    printf("Introduzca usted su número de hijos: ");
    scanf("%d", &hijos);
    printf("Introduzca usted su sueldo anual (en euros): ");
    scanf("%d", &sueldo_anual);

    sueldo_mensual = sueldo_anual/12;

    printf("\nNombre: %s\n", name);
    printf("Edad: %d\n", age);
    printf("Número de hijos: %d\n", hijos);
    printf("Sueldo mensual: %d\n", sueldo_mensual);

    return 0;
}