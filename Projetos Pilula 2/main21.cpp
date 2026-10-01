#include <stdio.h>

int main() {
    int codigo;
    int quantidade;
    float preco;
    float total;

    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);

    printf("Digite a quantidade: ");
    scanf("%d", &quantidade);

    if (codigo == 123) {
        preco = 15.80;
        printf("Produto: Verniz maritimo\n");
    }
    else if (codigo == 456) {
        preco = 10.52;
        printf("Produto: Seladora\n");
    }
    else if (codigo == 789) {
        preco = 12.78;
        printf("Produto: Verniz comum\n");
    }
    else {
        printf("Produto nao classificado.\n");
        printf("Digite o preco unitario: R$ ");
        scanf("%f", &preco);
    }

    total = preco * quantidade;

    printf("Valor total: R$ %.2f\n", total);

    return 0;
}