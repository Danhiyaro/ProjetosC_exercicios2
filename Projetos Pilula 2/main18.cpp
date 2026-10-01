#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a % 2 == 0 && b % 2 == 0) {
        printf("Pares\n");
    }
    else if (a % 2 != 0 && b % 2 != 0) {
        printf("Impares\n");
    }
    else {
        printf("Existe um numero par e um impar\n");
    }

    return 0;
}