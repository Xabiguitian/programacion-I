#include <stdio.h>

int main () {
    float nota1, nota2, nota3, nota4, nota5, nota6, media_sin0, media_con0;

    printf ("Introduzca calificación asignatura 1 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota1);
    printf ("Introduzca calificación asignatura 2 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota2);
    printf ("Introduzca calificación asignatura 3 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota3);
    printf ("Introduzca calificación asignatura 4 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota4);
    printf ("Introduzca calificación asignatura 5 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota5);
    printf ("Introduzca calificación asignatura 6 (formato X.X, 0 para No Presentado): ");
    scanf("%f", &nota6);

    if (nota1 == 0) {
        media_sin0 = (nota2 + nota3 + nota4 + nota5 + nota6) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);

    }else if (nota2 == 0) {
        media_sin0 = (nota1 + nota3 + nota4 + nota5 + nota6) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);

    }else if (nota3 == 0) {
        media_sin0 = (nota1 + nota2 + nota4 + nota5 + nota6) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);

    }else if (nota4 == 0) {
        media_sin0 = (nota1 + nota2 + nota3 + nota5 + nota6) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);
    }else if (nota5 == 0) {
        media_sin0 = (nota1 + nota2 + nota3 + nota4 + nota6) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);
    }else if (nota6 == 0) {
        media_sin0 = (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);

        if (media_sin0 < 5) printf("Nota media asignaturas presentadas: SUSPENSO (%f)\n", media_sin0);
        else printf("Nota media asignaturas presentadas: APROBADO (%f)\n", media_sin0);
    }else {
        media_con0 = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6) / 6;

        if (media_con0 < 5) printf("Nota media: SUSPENSO (%f)\n", media_con0);
        else printf("Nota media: APROBADO (%f)\n", media_con0);
    }

    return 0;
}
