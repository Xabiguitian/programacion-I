#include <stdio.h>

int main() {
    float lado1, lado2, lado3;

    printf("ntroduzca la longitud del primer lado del triángulo (cm): ");
    scanf("%f", &lado1);
    printf("ntroduzca la longitud del segundo lado del triángulo (cm): ");
    scanf("%f", &lado2);
    printf("ntroduzca la longitud del tercer lado del triángulo (cm): ");
    scanf("%f", &lado3);

    if (lado1==lado2 && lado2==lado3) {
        printf("El triángulo es equilátero (Lado1 = lado2 = lado3 = %f cm)", lado1);
    }else if (lado1==lado2 ) {
        printf("El triángulo es isósceles (Lado1 = lado2 = %f cm)", lado1);
    }else if (lado2==lado3) {
        printf("El triángulo es isósceles (Lado2 = lado2 = %f cm)", lado2);
    }else if (lado1==lado3) {
        printf("El triángulo es isósceles (Lado1 = lado3 = %f cm)", lado1);
    }else {
        printf("El triángulo es escaleno");
    }
    return 0;
}
