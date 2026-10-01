#include <stdio.h>

int main() {
    float n1, n2, n3, n4;
    float media;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%f", &n1);

    printf("Digite o segundo valor: ");
    scanf("%f", &n2);

    printf("Digite o terceiro valor: ");
    scanf("%f", &n3);

    printf("Digite o quarto valor: ");
    scanf("%f", &n4);

    printf("\nEscolha o tipo de media:\n");
    printf("1 - Media aritmetica\n");
    printf("2 - Media ponderada\n");
    printf("3 - Media harmonica\n");
    printf("Escolha: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        media = (n1 + n2 + n3 + n4) / 4;

        printf("\nMedia aritmetica: %.2f\n", media);
    }
    else if (opcao == 2) {
        media = (n1 * 1 + n2 * 2 + n3 * 3 + n4 * 4) / 10;

        printf("\nMedia ponderada: %.2f\n", media);
    }
    else if (opcao == 3) {
        media = 4 / (1 / n1 + 1 / n2 + 1 / n3 + 1 / n4);

        printf("\nMedia harmonica: %.2f\n", media);
    }
    else {
        printf("\nOpcao invalida!\n");
    }

    return 0;
}