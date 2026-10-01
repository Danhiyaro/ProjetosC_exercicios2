#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro numero: ");
    scanf("%d", &a);

    printf("Digite o segundo numero: ");
    scanf("%d", &b);

    if (a == 0 || b == 0) {
        printf("Z\n");
    }
    else if ((a > 0 && b > 0) || (a < 0 && b < 0)) {
        printf("M\n");
    }
    else {
        printf("O\n");
    }

    return 0;
}