#include <stdio.h>

int main() {
    int horas;
    int minutos;
    int segundos;

    printf("Introduzca el tiempo en segundos: ");
    scanf("%d", &segundos);

    horas = segundos / 3600;
    segundos = segundos % 3600;

    minutos = segundos / 60;
    segundos = segundos % 60;

    printf("%d horas %d minutos %d segundos.\n", horas, minutos, segundos);

    return 0;
}
