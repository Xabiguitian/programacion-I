#include <stdio.h>

int main() {
    char name[20];
    int age;
    int gasto1;
    int gasto2;
    int total;

    printf("Introduzca usted su nombre: ");
    scanf("%s", name);
    printf("Introduzca usted su edad: ");
    scanf("%d", &age);
    printf("Introduzca usted el total de sus gastos semanales en cañas (en euros): ");
    scanf("%d", &gasto1);
    printf("Introduzca usted el total de sus gastos semanales en transporte (en euros): ");
    scanf("%d", &gasto2);

    total = gasto1 + gasto2;

    printf("\nNombre: %s\n", name);
    printf("Edad: %d\n", age);
    printf("Gasto semanal en cañas: %d\n", gasto1);
    printf("Gasto semanal en transporte: %d\n", gasto2);
    printf("Total gastos semanales: %d\n", total);

    return 0;
}
