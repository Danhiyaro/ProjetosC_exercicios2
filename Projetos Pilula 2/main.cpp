#include <stdio.h>

int main() {
    int cod1, cod2, cod3;
    float preco1, preco2, preco3, total;
    char descricao1[30], descricao2[30], descricao3[30];

    printf("Digite o codigo do primeiro item: ");
    scanf("%d", &cod1);

    printf("Digite o codigo do segundo item: ");
    scanf("%d", &cod2);

    printf("Digite o codigo do terceiro item: ");
    scanf("%d", &cod3);

    /* Verifica se os codigos sao iguais */
    if (cod1 == cod2 || cod1 == cod3 || cod2 == cod3) {
        printf("Erro: nao pode haver repeticao de itens.\n");
        return 0;
    }

    /* Primeiro item */
    if (cod1 == 1) {
        preco1 = 4.50;
        printf("Hamburger - R$ %.2f\n", preco1);
    }
    else if (cod1 == 2) {
        preco1 = 5.50;
        printf("Chessburger - R$ %.2f\n", preco1);
    }
    else if (cod1 == 3) {
        preco1 = 4.00;
        printf("Cachorro quente - R$ %.2f\n", preco1);
    }
    else if (cod1 == 4) {
        preco1 = 3.50;
        printf("Sanduiche - R$ %.2f\n", preco1);
    }
    else if (cod1 == 5) {
        preco1 = 1.00;
        printf("Refrigerante - R$ %.2f\n", preco1);
    }
    else if (cod1 == 6) {
        preco1 = 2.00;
        printf("Suco de laranja - R$ %.2f\n", preco1);
    }
    else if (cod1 == 7) {
        preco1 = 1.50;
        printf("Milk shake - R$ %.2f\n", preco1);
    }
    else if (cod1 == 8) {
        preco1 = 3.00;
        printf("Sundae - R$ %.2f\n", preco1);
    }
    else if (cod1 == 9) {
        preco1 = 1.00;
        printf("Casquinha - R$ %.2f\n", preco1);
    }
    else {
        printf("Erro: codigo invalido.\n");
        return 0;
    }

    /* Segundo item */
    if (cod2 == 1) {
        preco2 = 4.50;
        printf("Hamburger - R$ %.2f\n", preco2);
    }
    else if (cod2 == 2) {
        preco2 = 5.50;
        printf("Chessburger - R$ %.2f\n", preco2);
    }
    else if (cod2 == 3) {
        preco2 = 4.00;
        printf("Cachorro quente - R$ %.2f\n", preco2);
    }
    else if (cod2 == 4) {
        preco2 = 3.50;
        printf("Sanduiche - R$ %.2f\n", preco2);
    }
    else if (cod2 == 5) {
        preco2 = 1.00;
        printf("Refrigerante - R$ %.2f\n", preco2);
    }
    else if (cod2 == 6) {
        preco2 = 2.00;
        printf("Suco de laranja - R$ %.2f\n", preco2);
    }
    else if (cod2 == 7) {
        preco2 = 1.50;
        printf("Milk shake - R$ %.2f\n", preco2);
    }
    else if (cod2 == 8) {
        preco2 = 3.00;
        printf("Sundae - R$ %.2f\n", preco2);
    }
    else if (cod2 == 9) {
        preco2 = 1.00;
        printf("Casquinha - R$ %.2f\n", preco2);
    }
    else {
        printf("Erro: codigo invalido.\n");
        return 0;
    }

    /* Terceiro item */
    if (cod3 == 1) {
        preco3 = 4.50;
        printf("Hamburger - R$ %.2f\n", preco3);
    }
    else if (cod3 == 2) {
        preco3 = 5.50;
        printf("Chessburger - R$ %.2f\n", preco3);
    }
    else if (cod3 == 3) {
        preco3 = 4.00;
        printf("Cachorro quente - R$ %.2f\n", preco3);
    }
    else if (cod3 == 4) {
        preco3 = 3.50;
        printf("Sanduiche - R$ %.2f\n", preco3);
    }
    else if (cod3 == 5) {
        preco3 = 1.00;
        printf("Refrigerante - R$ %.2f\n", preco3);
    }
    else if (cod3 == 6) {
        preco3 = 2.00;
        printf("Suco de laranja - R$ %.2f\n", preco3);
    }
    else if (cod3 == 7) {
        preco3 = 1.50;
        printf("Milk shake - R$ %.2f\n", preco3);
    }
    else if (cod3 == 8) {
        preco3 = 3.00;
        printf("Sundae - R$ %.2f\n", preco3);
    }
    else if (cod3 == 9) {
        preco3 = 1.00;
        printf("Casquinha - R$ %.2f\n", preco3);
    }
    else {
        printf("Erro: codigo invalido.\n");
        return 0;
    }

    /* Verifica se cada posicao pertence a categoria correta */
    if (!((cod1 >= 1 && cod1 <= 4) ||
          (cod2 >= 1 && cod2 <= 4) ||
          (cod3 >= 1 && cod3 <= 4))) {
        printf("Erro: o pedido deve conter um item de alimentacao.\n");
        return 0;
    }

    if (!((cod1 == 5 || cod1 == 6) ||
          (cod2 == 5 || cod2 == 6) ||
          (cod3 == 5 || cod3 == 6))) {
        printf("Erro: o pedido deve conter uma bebida.\n");
        return 0;
    }

    if (!((cod1 >= 7 && cod1 <= 9) ||
          (cod2 >= 7 && cod2 <= 9) ||
          (cod3 >= 7 && cod3 <= 9))) {
        printf("Erro: o pedido deve conter uma sobremesa.\n");
        return 0;
    }

    total = preco1 + preco2 + preco3;

    printf("\nPreco final: R$ %.2f\n", total);

    return 0;
}