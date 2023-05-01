#include <stdio.h>

int main() {

    int const tamanhoDoArray = 10;
    int valores[tamanhoDoArray];

    for (int i = 0; i < tamanhoDoArray; i++) {
        printf("Digite o numero %i: ", i);
        scanf("%i", &valores[i]);
    }

    // Calcula media
    int mediaSoma = 0;
    for (int i = 0; i < tamanhoDoArray; i++) {
        mediaSoma = mediaSoma + valores[i];
    }
    int media = mediaSoma / tamanhoDoArray;
    printf("\n\nA media dos valores e: %i \n", media);


    // Maior que menor numero
    int menorNumero = valores[0];
    int maiorNumero = valores[0];

    for (int i = 1; i < tamanhoDoArray; i++) {
        if (valores[i] < menorNumero) {
            menorNumero = valores[i];
        }
        if (valores[i] > maiorNumero) {
            maiorNumero = valores[i];
        }
    }

    printf("Maior numero: %i \n", maiorNumero);
    printf("Menor numero: %i \n\n", menorNumero);

    return 0;

}