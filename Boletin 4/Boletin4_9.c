#include <stdio.h>

int cantidadNumeros ()
{
    int n=21;

    while(n>20)
    {
        printf("El número debe ser inferior a 20\nPorfavor indique la cantidad de números que quiere introducir (máx 20): ");
        scanf("%d", &n);
    }

    return n;
}

void leerNumeros(int *array, int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("Introduzca el número %d: ", i+1);
        scanf("%d", &array[i]);
    }
}

void mostrarNumeros(int *array, int n) {
    printf("Los números introducidos son:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main ()
{
    int n;

    n = cantidadNumeros();
    int numeros[n];
    leerNumeros(numeros, n);
    mostrarNumeros(numeros, n);

    return 0;
}