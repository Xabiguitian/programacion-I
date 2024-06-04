#include <stdio.h>

int main() {
    float precio;
    float precioIVA;

    printf("Precio del producto (sin IVA): ");
    scanf("%f", &precio);

    precioIVA = precio * 0.24 + precio;

    printf("El importe total (IVA incluido) es de %f€\n", precioIVA);

    return 0;
}