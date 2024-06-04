#include <stdio.h>

int main() {
    int vector1_1;
    int vector1_2;
    int vector1_3;

    int vector2_1;
    int vector2_2;
    int vector2_3;

    int resultado;

    printf("Coordenadas cartesianas primer vector (separadas por espacio): ");
    scanf("%d" "%d" "%d", &vector1_1, &vector1_2, &vector1_3);

    printf("Coordenadas cartesianas segundo vector (separadas por espacio): ");
    scanf("%d" "%d" "%d", &vector2_1, &vector2_2, &vector2_3);

    resultado = vector1_1 * vector2_1 + vector1_2 * vector2_2 + vector1_3 * vector2_3;

    printf("Producto escalar: %d\n", resultado);

    return 0;
}
