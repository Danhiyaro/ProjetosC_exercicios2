#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    if (numero % 7 == 0) {
        printf("O numero e multiplo de 7.\n");
    }
    else {
        printf("O numero nao e multiplo de 7.\n");
    }

    return 0;
}