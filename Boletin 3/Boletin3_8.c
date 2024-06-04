#include <stdio.h>

int mesSiguiente (int mes){

    return (mes + 1) % 12;
}

int main(){
    int mes;

    printf("Introduzca un número de mes: ");
    scanf("%d", &mes);

    printf("%d", mesSiguiente(mes));

    return 0;
}