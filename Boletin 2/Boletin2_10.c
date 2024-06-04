#include <stdio.h>

int main() {
    int salarioAnual, menores18, IRPF, reduccionIRPF, IRPFreducido;

    printf("Introduzca su salario anual bruto (en euros): ");
    scanf("%d", &salarioAnual);
    printf("Introduzca el nUmero de hijos menores de 18 años a su cargo: ");
    scanf("%d", &menores18);

    IRPF = salarioAnual * 0.15;
    reduccionIRPF = IRPF * menores18 * 0.10;
    IRPFreducido = IRPF - reduccionIRPF;

    printf("IRPF (15%%): %d€\n", IRPF);
    printf("ReducciOn debida a hijos a cargo: %d€\n", reduccionIRPF);
    printf("Total anual a pagar: %d€\n", IRPFreducido);

    return 0;
}
