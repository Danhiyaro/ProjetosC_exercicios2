#include <stdio.h>

int main() {
	
	char sexo;
	float altura;
	float pesoIdeal;
	
	printf("Digite o sexo (M/F): ");
	scanf( "%c", &sexo);
	
	printf("Digite a altura em metros: ");
	scanf("%f", &altura);
	
	if (sexo =='M' || sexo == 'm') {
		pesoIdeal = (72.7 * altura) - 58;
		printf("Peso ideal: %.2f kg\n", pesoIdeal);
	}
	
	else if (sexo == 'F' || sexo == 'f') {
		pesoIdeal = (62.1 * altura) - 44.7;
		printf("Peso ideal: %.2f kg\n", pesoIdeal);
	}
	
	else {
		printf("Sexo invalido.\n");
	}
	
	
	return 0;
}