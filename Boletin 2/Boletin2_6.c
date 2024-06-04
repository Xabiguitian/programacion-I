#include <stdio.h>

int main() {
    int preguntasTotales, preguntasCorrectas;
    float porcentajeAcierto;

    printf("Cantidad total de preguntas planteadas: ");
    scanf("%d", &preguntasTotales);
    printf("Cantidad de preguntas contestadas correctamente: ");
    scanf("%d", &preguntasCorrectas);

    porcentajeAcierto = (100 * preguntasCorrectas) / preguntasTotales;

    if (porcentajeAcierto >= 90) printf("Nivel máximo:\t%.2f %%", porcentajeAcierto);
    else if (porcentajeAcierto >= 75) printf("Nivel medio:\t%.2f %%", porcentajeAcierto);
    else if (porcentajeAcierto >= 50) printf("Nivel regular:\t%.2f %%", porcentajeAcierto);
    else printf("Fuera de nivel:\t%.2f %%", porcentajeAcierto);

    return 0;
}
