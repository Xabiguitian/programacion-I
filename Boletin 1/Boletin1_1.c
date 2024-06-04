#include <stdio.h>

int main() {
    char name[20];
    int age;

    printf("Introduzca usted su nombre:");
    scanf("%s", &name);
    printf("Introduzca usted su edad:");
    scanf("%d", &age);

    printf("¡Buenos días %s, tiene usted %d años!\n", name, age);
    return 0;
}
