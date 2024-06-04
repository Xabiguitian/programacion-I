#include <stdio.h>
#include <math.h>

int mayorDivisor (int n) {
    int i;
    float division;

    i =n;

    while (i>0) {
        i--;
        division = n / (i);

        if (division - round(division) == 0){
            break;
        }
    }

    return i;
}

int main () {
    int num;

    printf("Introduzca un número entero: ");
    scanf("%d", &num);

    printf("El mayor divisor es: %d", mayorDivisor(num));

    return 0;
}