#include <stdio.h>
#include <string.h>

int main() {
    char mes[20];
    int num_mes, ano;

    printf("Introduzca el nombre del mes del que quiere calcular los días: ");
    scanf("%s", mes);

    if (strcmp(mes, "Enero") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Febrero") == 0) {
        printf("Introduzca el año: ");
        scanf("%d", &ano);

        if (ano % 4 == 0) {
            printf("El mes de %s tiene 29 días", mes);
        }else {
            printf("El mes de %s tiene 28 días", mes);
        }

    }else if (strcmp(mes, "Marzo") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Abril") == 0) {
        printf("El mes de %s tiene 30 días", mes);

    }else if (strcmp(mes, "Mayo") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Junio") == 0) {
        printf("El mes de %s tiene 30 días", mes);

    }else if (strcmp(mes, "Julio") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Agosto") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Septiembre") == 0) {
        printf("El mes de %s tiene 30 días", mes);

    }else if (strcmp(mes, "Octubre") == 0) {
        printf("El mes de %s tiene 31 días", mes);

    }else if (strcmp(mes, "Noviembre") == 0) {
        printf("El mes de %s tiene 30 días", mes);

    }else if (strcmp(mes, "Diciembre") == 0) {
        printf("El mes de %s tiene 31 días", mes);
    }else {
        printf("El mes debe de estar mal escrito");
    }

    return 0;
}
