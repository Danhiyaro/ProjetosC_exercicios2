#include <stdio.h>

int main() {
    int idadeDias;
    int anos, meses, dias;

    printf("Digite a idade em dias: ");
    scanf("%d", &idadeDias);

    anos = idadeDias / 365;
    idadeDias = idadeDias % 365;

    meses = idadeDias / 30;
    dias = idadeDias % 30;

    printf("\nIdade: %d anos, %d meses e %d dias.\n", anos, meses, dias);

    return 0;
}