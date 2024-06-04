#include <stdio.h>
#include <math.h>

void printMenu()
{
    printf("1.- Introducir dos números complejos en forma binómica por teclado\n"
           "2.- Introducir dos números complejos en forma módulo-argumental por teclado\n"
           "3.- Sumar dos números complejos\n"
           "4.- Restar dos números complejos\n"
           "5.- Multiplicar dos números complejos\n"
           "0.- Salir\n");
}

void introducirNumeroFormaBinomica(float *real1, float *img1, float *real2, float *img2)
{
    printf("Introduzca los valores del primer número imaginario en forma binómica\n");
    scanf("%f %f", real1, img1);

    printf("Introduzca los valores del segundo número imaginario en forma binómica\n");
    scanf("%f %f", real2, img2);
}

void introducirNumeroFormaPolar(float *real1, float *img1, float *real2, float *img2)
{
    float r1, a1, r2, a2;

    printf("Introduzca los valores del primer número imaginario en forma binómica\n");
    scanf("%f %f", &r1, &a1);

    printf("Introduzca los valores del segundo número imaginario en forma binómica\n");
    scanf("%f %f", &r2, &a2);

    *real1 = r1 * cos(a1);
    *img1 = r1 * sin(a1);

    *real2 = r2 * cos(a2);
    *img2 = r2 * sin(a2);
}

void sumarNumerosComplejos(float real1, float img1, float real2, float img2)
{
    printf("La suma de los números complejos es: %f %f\n", real1 + real2, img1 + img2);
}

void menu(){
    int opcion;
    printMenu();
    scanf("%d", &opcion);

    float real1, img1, real2, img2;
    int hayDatos = 0;

    while (opcion){
        switch (opcion) {
            case 0:
                break;
            case 1:
                introducirNumeroFormaBinomica(&real1, &img1, &real2, &img2);
                printf("\nLos números introducidos han sido: %f %fi // %f %fi\n\n", real1, img1, real2, img2);
                hayDatos = 1;
                break;
            case 2:
                introducirNumeroFormaPolar(&real1, &img1, &real2, &img2);
                printf("\nLos números introducidos han sido: %f %fi // %f %fi\n\n", real1, img1, real2, img2);
                hayDatos = 1;
                break;
            case 3:
                if (!hayDatos)
                {
                    break;
                }
                sumarNumerosComplejos(real1, img1, real2, img2);
                break;
            default:
                printf("Introduzca una opción válida");
        }

        printMenu();
        scanf("%d", &opcion);
    }
}

int main(){
    menu();

    return 0;
}