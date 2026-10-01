#include <stdio.h>

int main() {
    int a, b, c, temp;

    printf("Digite A: ");
    scanf("%d", &a);

    printf("Digite B: ");
    scanf("%d", &b);

    printf("Digite C: ");
    scanf("%d", &c);

    if (a > b) {
        temp = a;
        a = b;
        b = temp;
    }

    if (a > c) {
        temp = a;
        a = c;
        c = temp;
    }

    if (b > c) {
        temp = b;
        b = c;
        c = temp;
    }

    printf("Ordem crescente: %d %d %d\n", a, b, c);

    return 0;
}