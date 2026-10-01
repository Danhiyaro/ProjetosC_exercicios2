#include <stdio.h>

int main() {
    int a, b, c, menor;

    printf("Digite A: ");
    scanf("%d", &a);

    printf("Digite B: ");
    scanf("%d", &b);

    printf("Digite C: ");
    scanf("%d", &c);

    menor = a;

    if (b < menor) {
        menor = b;
    }

    if (c < menor) {
        menor = c;
    }

    printf("O menor numero e: %d\n", menor);

    return 0;
}