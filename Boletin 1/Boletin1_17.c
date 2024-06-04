#include <stdio.h>

int main() {
    int matriz1_1;
    int matriz1_2;
    int matriz1_3;
    int matriz1_4;

    int matriz2_1;
    int matriz2_2;
    int matriz2_3;
    int matriz2_4;

    int resultado1;
    int resultado2;
    int resultado3;
    int resultado4;

    printf("Introduzca los datos de la Matriz 1 separados por un espacio de arriba a abajo e izquierda a derecha: ");
    scanf("%d" "%d" "%d" "%d", &matriz1_1, &matriz1_2, &matriz1_3, &matriz1_4);

    printf("Introduzca los datos de la Matriz 2 separados por un espacio de arriba a abajo e izquierda a derecha: ");
    scanf("%d" "%d" "%d" "%d", &matriz2_1, &matriz2_2, &matriz2_3, &matriz2_4);

    resultado1 = matriz1_1 * matriz2_1 + matriz1_2 * matriz2_3;
    resultado2 = matriz1_1 * matriz2_2 + matriz1_2 * matriz2_4;
    resultado3 = matriz1_3 * matriz2_1 + matriz1_4 * matriz2_3;
    resultado4 = matriz1_3 * matriz2_2 + matriz1_4 * matriz2_4;

    printf("El resultado de la suma es:\n\n");
    printf("\t%d\t%d\n", resultado1, resultado2);
    printf("\t%d\t%d\n", resultado3, resultado4);

    return 0;
}