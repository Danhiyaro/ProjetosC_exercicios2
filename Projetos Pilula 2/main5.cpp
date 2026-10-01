#include <stdio.h>

int main() {
    float A, B, C, soma;

    printf("Digite A: ");
    scanf("%f", &A);

    printf("Digite B: ");
    scanf("%f", &B);

    printf("Digite C: ");
    scanf("%f", &C);

    soma = A + B;

    if (soma < C) {
        printf("A + B e menor que C.\n");
    }
    else if (soma > C) {
        printf("A + B e maior que C.\n");
    }
    else {
        printf("A + B e igual a C.\n");
    }

    return 0;
}