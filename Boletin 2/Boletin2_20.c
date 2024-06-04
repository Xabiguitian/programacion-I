#include <stdio.h>

int main() {
    char nombre[10], apellido[10];
    float altura, peso, IMC;

    printf("Introduzca usted su nombre: ");
    scanf("%s %s", &nombre, &apellido);
    printf("Introduzca altura en metros: ");
    scanf("%f", &altura);
    printf("Introduzca peso en kilos: ");
    scanf("%f", &peso);

    IMC = peso / (altura * altura);

    if (IMC < 18.5) {
        printf("%s %s, según el índice de masa corporal (IMC = %f), tiene usted un peso bajo para su estatura", nombre, apellido, IMC);
    }else if (IMC >= 18.5 && IMC < 25) {
        printf("%s %s, según el índice de masa corporal (IMC = %f), tiene usted un peso normal para su estatura", nombre, apellido, IMC);
    }else if (IMC >= 25 && IMC < 27) {
        printf("%s %s, según el índice de masa corporal (IMC = %f), tiene usted sobrepeso de grado I para su estatura", nombre, apellido, IMC);
    }else if (IMC >= 27 && IMC < 30) {
        printf("%s %s, según el índice de masa corporal (IMC = %f), tiene usted sobrepeso de grado II para su estatura", nombre, apellido, IMC);
    }else {
        printf("%s %s, según el índice de masa corporal (IMC = %f), tiene usted obesidad para su estatura", nombre, apellido, IMC);
    }

    return 0;
}
