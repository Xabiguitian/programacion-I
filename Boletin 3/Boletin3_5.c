#include <stdio.h>

void trianguloFloyd(int n){
    int num = 0, k=1, j=1;
    for(int i =n; i>0; i--){
        while(k>num){
            printf("%d\t", j);
            num++;
            j++;
            i--;
        }
        printf("\n");
        k++;
        num = 0;
    }

    return;
}

int main () {
    int n;
    printf("Introduzca el número hasta el que quiere el triángulo de Floyd: ");
    scanf("%d", &n);
    trianguloFloyd(n);

    return 0;
}