#include <stdio.h>

int main() {
    float salario;
    float reajuste;
    float novoSalario;

    printf("Digite o salario: R$ ");
    scanf("%f", &salario);

    if (salario <= 2000) {
        reajuste = salario * 0.10;
    }
    else if (salario <= 5000) {
        reajuste = salario * 0.07;
    }
    else {
        reajuste = salario * 0.03;
    }

    novoSalario = salario + reajuste;

    printf("Reajuste: R$ %.2f\n", reajuste);
    printf("Novo salario: R$ %.2f\n", novoSalario);

    return 0;
}