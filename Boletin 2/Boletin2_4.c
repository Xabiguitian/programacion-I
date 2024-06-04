#include <stdio.h>

int main() {
    int num1, num2, num3;

    printf("Primer número: ");
    scanf("%d", &num1);

    printf("Segundo número: ");
    scanf("%d", &num2);

    printf("Tercer número: ");
    scanf("%d", &num3);

    if (num1 > num2 && num1 > num3) printf("%d es el número más grande", num1);
    else if (num2 > num1 && num2 > num3) printf("%d es el número más grande", num2);
    else printf("%d es el número más grande", num3);

    return 0;
}
