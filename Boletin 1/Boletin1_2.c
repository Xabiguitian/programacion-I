#include <stdio.h>

int main() {
    char name[50];
    char last_name[50];
    int age;
    int years;

    printf("Introduzca su nombre y apellido (separados por un espacio): ");
    scanf("%s" "%s", name, last_name);
    printf("Introduzca su edad: ");
    scanf("%d", &age);

    years = 67 - age;

    printf("Sr/Sra. %s, le faltan aún %d años para jubilarse.\n", last_name, years);

    return 0;
}
