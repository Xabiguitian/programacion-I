#include <stdio.h>

int main() {
    const float PI=3.141592653;

    float radio1;
    float radio2;
    float radio3;
    float perimetro1;
    float perimetro2;
    float perimetro3;
    float area1;
    float area2;
    float area3;

    printf("Indique tres radios de los círculos que quiera saber su perímetro y su area separados por espacios: ");
    scanf("%f" "%f" "%f", &radio1, &radio2, &radio3);

    perimetro1 = 2 * PI * radio1;
    perimetro2 = 2 * PI * radio2;
    perimetro3 = 2 * PI * radio3;

    area1 = PI * radio1 * radio1;
    area2 = PI * radio2 * radio2;
    area3 = PI * radio3 * radio3;

    printf("RADIO\t\tPERIMETRO\t\tAREA\n");
    printf("=====\t\t=========\t\t=====\n");
    printf("%f\t%f\t%f\n", radio1, perimetro1, area1);
    printf("%f\t%f\t%f\n", radio2, perimetro2, area2);
    printf("%f\t%f\t%f\n", radio3, perimetro3, area3);

    return 0;
}
