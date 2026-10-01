#include <stdio.h>

int main() {
    char letra;

    printf("Digite uma letra: ");
    scanf(" %c", &letra);

    if (letra == 'a' || letra == 'e' || letra == 'i' ||
        letra == 'o' || letra == 'u' ||
        letra == 'A' || letra == 'E' || letra == 'I' ||
        letra == 'O' || letra == 'U') {

        printf("E uma vogal.\n");
    }
    else {
        printf("Nao e uma vogal.\n");
    }

    return 0;
}