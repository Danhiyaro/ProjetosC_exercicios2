#include <stdio.h>

int main() {
	
	int codigo;
	float valor;
	
	printf("Digite o código da moeda: ");
	scanf("%d", &codigo);
	
	printf("Digite o valor: ");
	scanf("%f", &valor);
	
	if (codigo == 1) {
		printf("%.2f libra esterlina\n", valor);
	}
	
	else if (codigo == 2) {
		printf("%.2f franco suico\n", valor);
	}
	
	else if (codigo == 3) {
		printf("%.2f dolar americano\n", valor);
	}
	
	else if (codigo == 4) {
		printf("%.2f marco alemao\n", valor);
	}
	
	else if  (codigo == 5) {
		printf("%.2f real\n", valor);
	}
	
	else {
		printf("Codigo inválido. \n");
	}
	
	return 0;
}