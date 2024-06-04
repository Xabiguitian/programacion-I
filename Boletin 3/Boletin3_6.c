#include <stdio.h>

void trianguloFloyd(int n){
    int num = 0, k=1, j=1;

    if (n<0) {
        printf("El número debe ser superior a 0, vuélvalo a introducir: ");
        scanf("%d", &n);
    }

    for(int i =n; i>0; i--){
        while(k>num){
            printf("%d\t", j);
            num++;
            j++;
        }
        printf("\n");
        k++;
        num = 0;
    }

    return;
}

int main () {
    int n;
    printf("Introduzca el número de filas: ");
    scanf("%d", &n);
    trianguloFloyd(n);

    return 0;
}