#include <stdio.h>

int main() {
    char combustivel;
    float litros;
    float preco;
    float total;

    printf("Digite o tipo de combustivel (A, D ou G): ");
    scanf(" %c", &combustivel);

    printf("Digite a quantidade de litros: ");
    scanf("%f", &litros);

    if (combustivel == 'A' || combustivel == 'a') {
        preco = 1.7997;
    }
    else if (combustivel == 'D' || combustivel == 'd') {
        preco = 0.9798;
    }
    else if (combustivel == 'G' || combustivel == 'g') {
        preco = 2.1009;
    }
    else {
        printf("Combustivel invalido.\n");
        return 0;
    }

    total = preco * litros;

    printf("Valor a pagar: R$ %.2f\n", total);

    return 0;
}