#include <stdio.h>
#include <string.h>

typedef struct estudiante{
    char nombre[20];
    int edad;
    float nota_promedio;
} estudiante;

estudiante Estudiante[100];
int n=0;

void agregarEstudiante(char *nombre, int edad, float promedio)
{
    estudiante e;
    strcpy(e.nombre, nombre);
    e.edad = edad;
    e.nota_promedio = promedio;
    Estudiante[n++] = e;
}

float calcularPromedioGeneral(float numEstudiantes)
{
    float promedio=0;

    for(int i = 0; i < numEstudiantes; i++)
    {
        promedio += Estudiante[i].nota_promedio;
    }

    promedio = promedio / numEstudiantes;

    return promedio;
}

int main() {
    int edad;
    float numEstudiantes, promedio;
    char nombre[20];

    printf("Número de estudiantes: ");
    scanf("%f", &numEstudiantes);

    for (int i = 0; i < numEstudiantes; i++)
    {
        printf("Introduzca: Nombre edad promedio\n");
        scanf("%s %d %f", &nombre, &edad, &promedio);
        agregarEstudiante(nombre, edad, promedio);
    }

    printf("\nEl promedio de los %.0f alumnos es: %f\n", numEstudiantes, calcularPromedioGeneral(numEstudiantes));
    
    return 0;
}