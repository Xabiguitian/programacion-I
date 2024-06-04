#include <stdio.h>

int main() {
    char entrada;

    printf("Introduzca un caracter: ");
    scanf("%c", &entrada);

    if (entrada >= 48 && entrada <= 57) {
        printf("%c es un número", entrada);

    }else if (entrada >=65 && entrada <= 90) {
        switch (entrada) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
                printf("%c es una vocal", entrada);
                break;
            default:
                printf("%c es una consonante", entrada);
                break;
        }

    }else if (entrada >=97 && entrada <= 122) {
        switch (entrada) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf("%c es una vocal", entrada);
                break;
            default:
                printf("%c es una consonante", entrada);
                break;
        }

    }else {
        printf("%c es un caracter especial", entrada);
    }

    return 0;
}
