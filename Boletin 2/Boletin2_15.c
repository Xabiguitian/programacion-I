#include <stdio.h>

int main() {
    char letra;

    printf("B - Bebé\nA - Adolescente\nM - Mujer\nH - Hombre\n");
    printf("Introduzca una de las letras identificadoras: ");
    scanf("%s", &letra);

    switch (letra) {
        case 'B': case 'b':
            printf("BEBÉ");
            break;

        case 'A': case 'a':
            printf("ADOLESCENTE");
            break;

        case 'M': case 'm':
            printf("MUJER");
            break;

        case 'H': case 'h':
            printf("HOMBRE");
            break;

        default:
            printf("Opción no válida");
    }

    return 0;
}
