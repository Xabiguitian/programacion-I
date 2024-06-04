#include <stdio.h>

#define numAlumnos 3

typedef struct estudiante{
    char nombre[20];
    float nota;
} estudiante;

estudiante Estudiante[numAlumnos];
estudiante mejor, peor;

int main ()
{
    for (int i = 0; i < numAlumnos; ++i)
    {
        printf("Introduzca el nombre del estudiante y su nota: ");
        scanf("%s %f", &Estudiante[i].nombre, &Estudiante[i].nota);
    }

    peor = Estudiante[0];
    mejor = Estudiante[0];

    for (int i = 0; i < numAlumnos; ++i)
    {
        if(Estudiante[i].nota > mejor.nota)
        {
            mejor = Estudiante[i];
        }else if (Estudiante[i].nota < peor.nota)
        {
            peor = Estudiante[i];
        }
    }

    printf("El mejor estudiante: %s %.2f", mejor.nombre, mejor.nota);
    printf("\nEl peor estudiante: %s %.2f", peor.nombre, peor.nota);

    return 0;
}