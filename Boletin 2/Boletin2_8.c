#include <stdio.h>

int main() {
    int dia, mes, diasPasados;

    printf("Escriba una fecha del año 2023 (dd mm): ");
    scanf("%d" "%d",&dia, &mes);

    switch(mes){
        case 1:
            diasPasados = dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 2:
            diasPasados = 31 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 3:
            diasPasados = 59 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 4:
            diasPasados = 90 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 5:
            diasPasados = 120 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 6:
            diasPasados = 151 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 7:
            diasPasados = 181 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 8:
            diasPasados = 212 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 9:
            diasPasados = 243 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 10:
            diasPasados = 273 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 11:
            diasPasados = 304 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
        case 12:
            diasPasados = 334 + dia;
            printf("LLevamos %d días", diasPasados);
            break;
    }

    return 0;
}
