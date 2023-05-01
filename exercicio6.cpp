#include <stdio.h>

int fatorial(int n) {
    if (n == 0) {
        return 1;
    } else {
        return n * fatorial(n - 1);
    }
}

int main() {
    int n, resultado;

    printf("Digite um numero: ");
    scanf("%d", &n);

    resultado = fatorial(n);

    printf("O fatorial de %d eh %d\n", n, resultado);

    return 0;
}
