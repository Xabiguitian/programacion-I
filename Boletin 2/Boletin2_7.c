#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c, x1, x2, raizDentro;

    printf("Introduzca el valor de a: ");
    scanf("%f", &a);
    printf("Introduzca el valor de b: ");
    scanf("%f", &b);
    printf("Introduzca el valor de c: ");
    scanf("%f", &c);

    raizDentro = b * b - 4 * a * c;

    printf("%f\n", raizDentro);

    switch (raizDentro > 0) {
        case 1:
            x1 = (-b + sqrt(raizDentro)) / (2 * a);
            x2 = (-b - sqrt(raizDentro)) / (2 * a);
            printf("Las raices son reales y distintas: %.2f y %.2f", x1, x2);
            break;
        case 0:
            switch (raizDentro < 0) {
                case 1:
                    x1 = -b / (2 * a);
                    x2 = sqrt(-raizDentro) / (2 * a);
                    printf("Las raices son complejas conjugadas: %.2f + %.2fi y %.2f - %.2fi", x1, x2, x1, x2);
                    break;
                case 0:
                    x1 = -b / (2 * a);
                    printf("La raiz es real doble: %.2f", x1);
                    break;
            }
    }

    return 0;
}
