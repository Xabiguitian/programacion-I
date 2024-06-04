#include <stdio.h>

// Subprograma para leer los números
void leerNumeros(int *array, int tamano) {
    for(int i = 0; i < tamano; i++) {
        printf("Introduce el número para el índice %d: ", i);
        scanf("%d", &array[i]);
    }
}

// Subprograma para mostrar los números
void mostrarNumeros(int *array, int tamano) {
    printf("Los números introducidos son:\n");
    for(int i = 0; i < tamano; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int numeros[10];

    leerNumeros(numeros, 10);
    mostrarNumeros(numeros, 10);

    return 0;
}
