#include <stdio.h>

int numeroColumnas ()
{
    int col;

    printf("Introduzca el número de Columnas de la Matriz: ");
    scanf("%d", &col);

    return col;
}

int numeroFilas ()
{
    int fil;

    printf("Introduzca el número de Filas de la Matriz: ");
    scanf("%d", &fil);

    return fil;
}


void mostrarMatriz(int filas, int columnas, int matriz[filas][columnas])
{
    printf("\nLa matriz introducida es:\n");


    for (int k = 0; k < filas; k++)
    {

        for (int n = 0; n < columnas; n++)
        {
            printf("%d\t", matriz[k][n]);
        }
        printf("\n");

    }
}

void mostrarMatrizTraspuesta(int filas, int columnas, int matriz[filas][columnas])
{
    printf("\nLa matriz traspuesta es:\n");


    for (int k = 0; k < columnas; k++)
    {

        for (int n = 0; n < filas; n++)
        {
            printf("%d\t", matriz[n][k]);
        }
        printf("\n");

    }
}

int main ()
{
    int columnas, filas;

    filas = numeroFilas();
    columnas = numeroColumnas();

    int matriz[filas][columnas];


    for (int k = 0; k < filas; k++)
    {

        for (int n = 0; n < columnas; n++)
        {
            printf("Introduzca el número de la posición %d %d: ", k + 1, n + 1);
            scanf("%d", &matriz[k][n]);

        }

    }

    mostrarMatriz(filas, columnas, matriz);
    mostrarMatrizTraspuesta(filas, columnas, matriz);

    return 0;
}