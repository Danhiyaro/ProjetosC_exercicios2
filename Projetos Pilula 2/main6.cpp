#include <stdio.h>

int main() {
    int A, B, C;

    printf("Digite A: ");
    scanf("%d", &A);

    printf("Digite B: ");
    scanf("%d", &B);

    if (A == B) {
        C = A + B;
    }
    else {
        C = A * B;
    }

    printf("Valor de C: %d\n", C);

    return 0;
}