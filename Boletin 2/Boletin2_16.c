#include <stdio.h>

int main() {
    char nombre[10];
    char apellido[10];
    int edad;

    printf("Nombre: ");
    scanf("%s %s", &nombre, &apellido);
    printf("Edad: ");
    scanf("%d", &edad);

    if (edad < 32) {
        printf("%s %s es JOVEN (<32)", nombre, apellido);
    }else if (edad < 75) {
        printf("%s %s es ADULTO (>32 y <75)", nombre, apellido);
    }else {
        printf("%s %s es ANCIANO (>75)", nombre, apellido);
    }

    return 0;
}
