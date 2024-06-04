#include <stdio.h>

int main() {
        int diaHoy;
        int mesHoy;
        int anoHoy;
        int diaCumple;
        int mesCumple;
        int anoCumple;
        int edad;

        printf("Introduzca la fecha actual (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &diaHoy, &mesHoy, &anoHoy);
        printf("Introduzca la fecha de su nacimiento (dd/mm/aaaa): ");
        scanf("%d/%d/%d", &diaCumple, &mesCumple, &anoCumple);

        edad = anoHoy - anoCumple;

        if (mesHoy < mesCumple) {
            edad = edad - 1;
        } else if (mesHoy == mesCumple){
            if (diaHoy < diaCumple){
                edad = edad - 1;
            }
        }

        printf("Usted tiene %d anos", edad);

        return 0;
}