#include <stdio.h>

int main () {
    int num=0, cont=0, factorial=1;

    printf("Introduzca el número del que quiere obtener el factorial: ");
    scanf("%d", &num);

    for(cont = num; cont > 0; cont--){
        factorial = factorial * cont;
    }

    printf("Factorial de %d = %d", num, factorial);

    return 0;
}
