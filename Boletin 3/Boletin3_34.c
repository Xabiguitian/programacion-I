#include <stdio.h>

void printMenu()
{
    printf("---------------------------OPERACIONES SOBRE ENTEROS---------------------------\n"
           "0 – Salir\n"
           "1 - Calcular el número de cifras de un entero\n"
           "2 - Sumar las cifras de un entero\n"
           "3 - Indica la cifra i-ésima menos significativa de un entero\n"
           "4 - Calcular la imagen especular de un entero\n"
           "5 - Comprobar si un entero es primo\n"
           "6 – Mostrar el MCD de dos números\n"
           "7 – Presentar la tabla de sumar, restar, multiplicar y dividir de n.\n"
           "--------------------------------------------------------------------------------------------------------\n");
}

int calcularCifrasEntero(int n)
{
    int i=0;
    while(n > 0)
    {
        i++;
        n = n/10;
    }
    return i;
}

int sumarCifrasEntero(int n)
{
    int suma = 0;
    while (n != 0) {
        suma += n % 10;
        n /= 10;
    }
    return suma;
}

int cifraIesima(int numero, int i)
{
    int contador = 0;
    while (numero != 0)
    {
        if (contador == i) {
            return numero % 10;
        }
        numero /= 10;
        ++contador;
    }
    printf("Error: El número no tiene una cifra i-ésima.\n");
    return -1;
}

int imagenEspecular(int n)
{
    int k=0;

    while (n>0)
    {
        k = k*10  + (n % 10);
        n = n /10;
    }
    return k;
}

void menu()
{
    int opcion, n, i;
    printMenu();
    scanf("%d", &opcion);

    while (opcion){
        switch (opcion) {
            case 0:
                break;
            case 1:
                printf("Introduzca el número: ");
                scanf("%d", &n);
                printf("\nEl número tiene %d cifras\n\n", calcularCifrasEntero(n));
                break;
            case 2:
                printf("Introduzca el número: ");
                scanf("%d", &n);
                printf("\nLa suma de las cifras es %d\n\n", sumarCifrasEntero(n));
                break;
            case 3:
                printf("Introduzca el número y la número de cifra i-ésima que quieras: ");
                scanf("%d %d", &n, &i);
                printf("\nLa cifra i-ésima es %d\n\n", cifraIesima(n, i));
                break;

            case 4:
                printf("Introduzca el número: ");
                scanf("%d", &n);
                printf("\nEl número dado la vuelta es %d\n\n", imagenEspecular(n));

            default:
                printf("Introduzca una opción válida");
        }

        printMenu();
        scanf("%d", &opcion);
    }
}

int main()
{
    menu();

    return 0;
}