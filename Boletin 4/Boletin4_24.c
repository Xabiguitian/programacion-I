#include <stdio.h>
#include <string.h>

#define MAX_EMPLEADOS 20
#define MAX_NOMBRE 50
#define MAX_TIPO_PUESTO 50
#define MAX_NIVEL_ESTUDIOS 50

typedef struct {
    char nombre[MAX_NOMBRE];
    char fechaNacimiento[11]; // Formato: dd/mm/yyyy
    char tipoPuesto[MAX_TIPO_PUESTO];
    char nivelEstudios[MAX_NIVEL_ESTUDIOS];
    union {
        char numeroTelefono[15];
        char numeroMatricula[10];
        char codigoBarras[13];
    } detalle;
} Empleado;

Empleado empleados[MAX_EMPLEADOS];

int main() {
    // Inicializar los empleados aquí
    strcpy(empleados[0].nombre, "Juan");
    strcpy(empleados[0].fechaNacimiento, "01/01/1980");
    strcpy(empleados[0].tipoPuesto, "Oficinista");
    strcpy(empleados[0].nivelEstudios, "Licenciado");
    strcpy(empleados[0].detalle.numeroTelefono, "1234567890");

    // Imprimir los detalles del empleado
    printf("Nombre: %s\n", empleados[0].nombre);
    printf("Fecha de Nacimiento: %s\n", empleados[0].fechaNacimiento);
    printf("Tipo de Puesto: %s\n", empleados[0].tipoPuesto);
    printf("Nivel de Estudios: %s\n", empleados[0].nivelEstudios);
    if (strcmp(empleados[0].tipoPuesto, "Oficinista") == 0) {
        printf("Número de Teléfono: %s\n", empleados[0].detalle.numeroTelefono);
    } else if (strcmp(empleados[0].tipoPuesto, "Conductor") == 0) {
        printf("Número de Matrícula: %s\n", empleados[0].detalle.numeroMatricula);
    } else if (strcmp(empleados[0].tipoPuesto, "Técnico") == 0) {
        printf("Código de Barras: %s\n", empleados[0].detalle.codigoBarras);
    }

    return 0;
}
