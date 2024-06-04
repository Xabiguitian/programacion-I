#include <stdio.h>

int main() {
    int N;

    printf("Introduzca un número: ");
    scanf("%d", &N);

    int j=1;

    for(int i=0; i < N; i++)
    {
        for (int k = 0; k < j; k++) {
            printf("*");
        }
        j++;
        printf("\n");
    }

    j--;

    for(int i=0; i < N; i++)
    {
        j--;
        for (int k = 0; k < j; k++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
