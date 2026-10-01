#include <stdio.h>

int main() {
    int a, b, c, d, menor;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    printf("Digite o terceiro numero: ");
    scanf("%d", &c);

    printf("Digite o quarto numero: ");
    scanf("%d", &d);

    menor = a;

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    if (d < menor) {
        menor = d;
    }

    printf("O menor numero e: %d\n", menor);

    return 0;
}