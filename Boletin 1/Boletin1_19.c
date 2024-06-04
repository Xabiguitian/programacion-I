#include <stdio.h>

int main() {
    float kg_patatas;
    float precio_patatas;
    float precio_patatas_IVA;
    float kg_manzanas;
    float precio_manzanas;
    float precio_manzanas_IVA;
    float precio_libro;
    float precio_libro_IVA;
    float precio_total_patatas;
    float precio_total_manzanas;
    float precio_total;

    printf("Kg de patatas comprados: ");
    scanf("%f", &kg_patatas);
    printf("Precio sin IVA del kilo de patatas (en euros): ");
    scanf("%f", &precio_patatas);
    printf("Kg de manzanas comprados: ");
    scanf("%f", &kg_manzanas);
    printf("Precio sin IVA del kilo de manzanas (en euros): ");
    scanf("%f", &precio_manzanas);
    printf("Importe del libro sin IVA (euros): ");
    scanf("%f", &precio_libro);

    precio_total_patatas = precio_patatas * kg_patatas;
    precio_total_manzanas = precio_manzanas * kg_manzanas;
    precio_patatas_IVA = (precio_total_patatas * 0.21) + precio_total_patatas;
    precio_manzanas_IVA = (precio_total_manzanas * 0.21) + precio_total_manzanas;
    precio_libro_IVA = (precio_libro * 0.1) + precio_libro;
    precio_total = (precio_patatas_IVA + precio_manzanas_IVA + precio_libro_IVA);

    printf("--------------------------------------------------------------------------------------Ticket 1/1\n");
    printf("Patatas\t\t%fkg\t\t\t\t%f€\t\t\t\t%f€\t\t\t\t%f€ (IVA 21%%)\n", kg_patatas, precio_patatas, precio_total_patatas, precio_patatas_IVA);
    printf("Manzanas\t%fkg\t\t\t\t%f€\t\t\t\t%f€\t\t\t\t%f€ (IVA 21%%)\n", kg_manzanas, precio_manzanas, precio_total_manzanas, precio_manzanas_IVA);
    printf("\tLibro\t1\t\t\t\t\t\t%f€\t\t\t\t%f€\t\t\t\t%f€ (IVA 10%%)\n", precio_libro, precio_libro, precio_libro_IVA);
    printf("----------------------------------------------------------------------------------------------------\n");
    printf("TOTAL\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t%f€\n", precio_total);

    return 0;
}
