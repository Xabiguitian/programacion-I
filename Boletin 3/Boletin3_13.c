#include <stdio.h>
#include <math.h>

float calcularPolinomio(float x)
{
    return 3* pow(x,5) + 2* pow(x, 4) - 5* pow(x, 4) - pow(x, 3) + 7* x - 6;
}

int main(){
    float x;

    printf("Introduzca un valor de x: ");
    scanf("%f", &x);

    printf("Resultado: %f", calcularPolinomio(x));
    return 0;
}