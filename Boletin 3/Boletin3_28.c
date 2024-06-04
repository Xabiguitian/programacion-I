#include <stdio.h>

void tablaMultiplicar(int num1, int num2)
{
    int i=1;

    while (i<=num2){
        printf("%d x %d = %d\n",num1, i, num1*i);
        i++;
    }
}

int main(){
    int num1, num2;

    printf("Introduzca la tabla de multiplicar que quiere y el número máximo para multiplicar: ");
    scanf("%d %d",&num1, &num2);
    tablaMultiplicar(num1, num2);

    return 0;
}