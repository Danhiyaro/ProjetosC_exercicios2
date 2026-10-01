#include <stdio.h>

int main() {
    float diariaNormal;
    float diariaPromocional;
    float total80;
    float total50;
    float diferenca;

    printf("Digite o valor normal da diaria: R$ ");
    scanf("%f", &diariaNormal);

    diariaPromocional = diariaNormal * 0.75;

    total80 = 75 * 0.80 * diariaPromocional;

    total50 = 75 * 0.50 * diariaNormal;

    diferenca = total80 - total50;

    printf("\nDiaria promocional: R$ %.2f\n", diariaPromocional);
    printf("Total com 80%% de ocupacao: R$ %.2f\n", total80);
    printf("Total com 50%% de ocupacao: R$ %.2f\n", total50);
    printf("Diferenca entre os valores: R$ %.2f\n", diferenca);

    return 0;
}