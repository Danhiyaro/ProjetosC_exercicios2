#include <stdio.h>

int main() {
    int numero;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero % 2 == 0 || numero % 3 == 0) {
        printf("O numero e divisivel por 2 ou 3.\n");
    }
    else {
        printf("O numero nao e divisivel por 2 nem por 3.\n");
    }

    return 0;
}