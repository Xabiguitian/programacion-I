#include <stdio.h>
#include <math.h>

int main() {
    float peso_total;
    float peso_baldosa;
    int lado_cuadrado;

    printf("Indique el peso total de todas las baldosas: ");
    scanf("%f", &peso_total);
    printf("Ahora indique el peso de cada baldosa: ");
    scanf("%f", &peso_baldosa);

    lado_cuadrado = trunc(sqrt(peso_total / peso_baldosa));
    //trunc sirve para redondear 1.7 a 1 en vez de a 2
    //sqrt es la funcion para hacer la raiz cuadrada

    printf("El lado del cuadrado mayor tiene que tener %d baldosas.\n", lado_cuadrado);

    return 0;
}
