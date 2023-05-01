#include <stdio.h>

int main() {

    int lado1;
    int lado2;
    int lado3;

    printf("\n\nDigite o valor do lado 1 do triangulo: ");
    scanf("%i", &lado1);
    printf("Digite o valor do lado 2 do triangulo: ");
    scanf("%i", &lado2);
    printf("Digite o valor do lado 3 do triangulo: ");
    scanf("%i", &lado3);

    if(lado1 != lado2 && lado1 != lado3) {
        printf("E um triangulo escaleno");
    } else if(lado1 == lado2 && lado1 == lado3 && lado2 == lado3) {
        printf("E um triangulo equilatero");
    } else {
        printf("E um triangulo Isoceles");
    }

    return 0;
}