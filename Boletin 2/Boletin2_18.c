#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Piense en un número del 1 al 10...\n");
    printf("¿El número que ha pensado es impar (1) o par (2)? ");
    scanf("%d", &num1);
    printf("¿Cuál es el resto de dividir el número que ha pensado entre 5? ");
    scanf("%d", &num2);

    if (num1 == 1 && num2 == 1) {
        printf("El número que ha pensado es el 1");
    }else if (num1 == 2 && num2 == 2) {
        printf("El número que ha pensado es el 2");
    }else if (num1 == 1 && num2 == 3) {
        printf("El número que ha pensado es el 3");
    }else if (num1 == 2 && num2 == 4) {
        printf("El número que ha pensado es el 4");
    }else if (num1 == 1 && num2 == 0) {
        printf("El número que ha pensado es el 5");
    }else if (num1 == 2 && num2 == 1) {
        printf("El número que ha pensado es el 6");
    }else if (num1 == 1 && num2 == 2) {
        printf("El número que ha pensado es el 7");
    }else if (num1 == 2 && num2 == 3) {
        printf("El número que ha pensado es el 8");
    }else if (num1 == 1 && num2 == 4) {
        printf("El número que ha pensado es el 9");
    }else{
        printf("El número que ha pensado es el 10");
    }

    return 0;
}
