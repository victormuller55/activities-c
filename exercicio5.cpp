#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void perguntaNumero(int *numeroChutado) {
    printf("Digite o numero: ");
    scanf("%i", numeroChutado);
}

int main() {

    int numeroChutado;

    srand(time(NULL));
    int random_num = rand() % 100 + 1;

    perguntaNumero(&numeroChutado);

    while (random_num != numeroChutado) {

        if (random_num > numeroChutado) {
            printf("O numero chutado eh menor\n");
        } else {
            printf("O numero chutado eh maior\n");
        }

        perguntaNumero(&numeroChutado);

    }

    printf("Acertou!\n");

    return 0;
}
