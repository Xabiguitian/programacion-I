#include <stdio.h>

int main() {
    char nombre[20];
    char apellido[20];
    int edad;
    int creditos_primera_matricula;
    int creditos_segunda_matricula;
    int creditos_tercera_mataricula;
    float precio_credito1;
    float precio_credito2;
    float precio_credito3;
    float precio_matricula1;
    float precio_matricula2;
    float precio_matricula3;
    float precio_total;

    printf("Nombre: ");
    scanf("%s", nombre);
    printf("Apellido: ");
    scanf("%s", apellido);
    printf("Edad: ");
    scanf("%d", &edad);
    printf("Número de créditos en primera matrícula: ");
    scanf("%d", &creditos_primera_matricula);
    printf("Número de créditos en segunda matrícula: ");
    scanf("%d", &creditos_segunda_matricula);
    printf("Número de créditos en tercera matrícula: ");
    scanf("%d", &creditos_tercera_mataricula);

    precio_credito1 = 15.45;
    precio_credito2 = (precio_credito1 * 0.25) + precio_credito1;
    precio_credito3 = (precio_credito1 * 0.5) + precio_credito1;
    precio_matricula1 = creditos_primera_matricula * precio_credito1;
    precio_matricula2 = creditos_segunda_matricula * precio_credito2;
    precio_matricula3 = creditos_tercera_mataricula * precio_credito3;
    precio_total = precio_matricula1 + precio_matricula2 + precio_matricula3;

    printf("***********************************************************************************************\n");
    printf("************\t\t\t\t\t\t%s %s: %d años\t\t\t\t\t\t************\n", nombre, apellido, edad);
    printf("\tCréditos M1\t\tCoste M1\t\tCréditos M2\t\tCoste M2\t\tCréditos M3\t\tCoste M3\n");
    printf("\t\t\t%d\t\t%f€\t\t\t\t%d\t\t%f€\t\t\t\t%d\t\t%f€\n", creditos_primera_matricula, precio_matricula1, creditos_segunda_matricula, precio_matricula2, creditos_tercera_mataricula, precio_matricula3);
    printf("************\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t************\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t Coste Total Matrícula\n");
    printf("\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t %f€\n", precio_total);
    printf("***********************************************************************************************\n");

    return 0;
}
