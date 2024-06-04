#include <stdio.h>

int main() {
    char nombre[20];
    char apellido[20];
    int sueldo_mensual;
    int gasto_ocio;
    int gasto_comida;
    int gasto_transporte;
    int gasto_otros;
    int ocio_porcentaje;
    int comida_porcentaje;
    int transporte_porcentaje;
    int otros_porcentaje;
    int total_gasto_semanal;

    printf("Indique su nombre y apellido: ");
    scanf("%s" "%s", nombre, apellido);
    printf("Especifique su sueldo mensual: ");
    scanf("%d", &sueldo_mensual);
    printf("Por último indique su gasto diario en ocio, comida, transporte y otro tipo de gastos (en este orden y con un espacio entre cada uno): ");
    scanf("%d" "%d" "%d" "%d", &gasto_ocio, &gasto_comida, &gasto_transporte, &gasto_otros);

    ocio_porcentaje = (gasto_ocio * 7 * 100) / sueldo_mensual;
    comida_porcentaje = (gasto_comida * 7 * 100) / sueldo_mensual;
    transporte_porcentaje = (gasto_transporte * 7 * 100) / sueldo_mensual;
    otros_porcentaje = (gasto_transporte * 7 * 100) / sueldo_mensual;
    total_gasto_semanal = (gasto_ocio + gasto_comida + gasto_transporte + gasto_otros) * 7;

    printf("************************************************************************\n");
    printf("*******\t\t\t\t\t %s %s: %d€ \t\t\t\t\t*******\n\n", nombre, apellido, sueldo_mensual);
    printf("\t\t\t%%Ocio\t\t\t%%Comida\t\t\t%%Transporte\t\t\t%%Otros\n");
    printf("\t\t\t%d%%\t\t\t\t%d%%\t\t\t\t%d%%\t\t\t\t\t%d%%\n", ocio_porcentaje, comida_porcentaje, transporte_porcentaje, otros_porcentaje);
    printf("*******\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t*******\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t  Gasto Semanal\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%d\n", total_gasto_semanal);

    return 0;
}
