#include <stdio.h>

int main() {
    int a, b, c;
    int resultado;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    if (a > b && a > c) {
        resultado = a + b + c;
    }
    else if (b > a && b < c) {
        resultado = b * c;
    }
    else {
        resultado = (a + c) * b;
    }

    printf("Resultado: %d\n", resultado);

    return 0;
}