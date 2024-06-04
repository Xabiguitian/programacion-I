#include <stdio.h>

int main()
{
    int n, i=1, cont=0, k=0;

    printf("Introduzca: ");
    scanf("%d", &n);

    while (n>0)
    {

        k = k*10  + (n % 10);
        n = n /10;
    }
    printf("Número invertido: %d", k);
    return 0;
}