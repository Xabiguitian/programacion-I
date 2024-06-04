#include <stdio.h>

void leerAnimales(int *array, int tamano) {
    for(int i = 0; i < tamano; i++) {
        printf("Introduce el animal número %d: ", i+1);
        scanf("%s", &array[i]);
    }
}

void mostrarAnimales(int *array, int tamano) {
    printf("Los animales introducidos son:\n");
    for(int i = 0; i < tamano; i++) {
        printf("%s ", &array[i]);
    }
    printf("\n");
}

int main() {
    char animales[7];

    leerAnimales(animales, 7);
    mostrarAnimales(animales, 7);

    return 0;
}