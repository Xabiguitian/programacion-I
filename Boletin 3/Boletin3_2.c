#include <stdio.h>

void diaSemana (char letra) {

    if (letra == 'L') printf("Es lunes\n");
    else if (letra == 'M') printf("Es martes\n");
    else if (letra == 'X') printf("Es miércoles\n");
    else if (letra == 'J') printf("Es jueves\n");
    else if (letra == 'V') printf("Es viernes\n");
    else if (letra == 'S') printf("Es sábado\n");
    else if (letra == 'D') printf("Es domingo\n");
    else  printf("Se ha equivocado\n");

    return;
}

int main () {
    char dia;

    printf("Introduzca la inicial del día de la semana (L M X J V S D): ");
    scanf("%c", &dia);

    diaSemana(dia);

    return 0;
}