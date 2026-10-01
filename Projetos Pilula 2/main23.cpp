#include <stdio.h>

int main() {
    char nome[50];
    char cargo[30];
    float salario, reajuste, novoSalario;

    printf("Digite o nome do funcionario: ");
    scanf("%s", nome);

    printf("Digite o cargo (Gerente, Tecnico, Auxiliar ou Outro): ");
    scanf("%s", cargo);

    printf("Digite o salario: R$ ");
    scanf("%f", &salario);

    if (cargo[0] == 'G' || cargo[0] == 'g') {
        reajuste = 5;
    }
    else if (cargo[0] == 'T' || cargo[0] == 't') {
        reajuste = 7.5;
    }
    else if (cargo[0] == 'A' || cargo[0] == 'a') {
        reajuste = 10;
    }
    else {
        reajuste = 4;
    }

    novoSalario = salario + (salario * reajuste / 100);

    printf("\n--- Dados do funcionario ---\n");
    printf("Nome: %s\n", nome);
    printf("Cargo: %s\n", cargo);
    printf("Salario anterior: R$ %.2f\n", salario);
    printf("Salario reajustado: R$ %.2f\n", novoSalario);

    return 0;
}