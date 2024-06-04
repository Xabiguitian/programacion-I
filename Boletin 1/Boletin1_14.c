#include <stdio.h>

int main() {
    char ciudad[20];
    float F_max;
    float F_min;
    float C_max;
    float C_min;

    printf("Introduzca el nombre de su ciudad: ");
    scanf("%s", ciudad);
    printf("Introduzca la temperatura máxima en grados Fahrenheit: ");
    scanf("%f", &F_max);
    printf("Introduzca la temperatura mínima en grados Fahrenheit: ");
    scanf("%f", &F_min);

    C_max = (F_max - 32) * 5/9;
    C_min = (F_min - 32) * 5/9;

    printf("-------------------------%s 22/09/2023-------------------------\n", ciudad);
    printf("\tTMax(ºF)\t\tTMin(ºF)\t\tTMax(ºC)\t\tTMin(ºC)\n");
    printf("\t%0.2fºF\t\t%.2fºF\t\t%10.2fºC\t\t%.2fºC\n", F_max, F_min, C_max, C_min);
    printf("--------------------------------------------------------------------\n");

    return 0;
}
