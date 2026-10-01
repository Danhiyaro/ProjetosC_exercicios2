#include <stdio.h>

int main() {
    int idade;

    printf("Digite a idade do nadador: ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7) {
        printf("Categoria: Pre-mirim\n");
    }
    else if (idade >= 8 && idade <= 10) {
        printf("Categoria: Mirim\n");
    }
    else if (idade >= 11 && idade <= 13) {
        printf("Categoria: Infantil\n");
    }
    else if (idade >= 14 && idade <= 17) {
        printf("Categoria: Infanto-juvenil\n");
    }
    else if (idade >= 18 && idade <= 20) {
        printf("Categoria: Juvenil\n");
    }
    else if (idade >= 21) {
        printf("Categoria: Adulto\n");
    }
    else {
        printf("Idade invalida.\n");
    }

    return 0;
}