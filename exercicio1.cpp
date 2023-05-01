#include <stdio.h>

void finalizaPrograma(char continueProgram[1]) {
    printf("Deseja continuar convertendo? (S ou N): ");
    scanf("%s", continueProgram);
}

int main() {

    char continueProgram[1];

    printf("\n ------------------ CONVERSOR DE METROS ---------------------- \n\n");

    int valor;
    int valorDecimetros;
    int valorCentimetros;
    int valorMilimetros;
    
    printf("Digite o valor em metros a ser convertido: ");
    scanf("%i", &valor);

    valorDecimetros = valor * 0.1;
    valorCentimetros = valor * 100;
    valorMilimetros = valor * 1000;

    printf("\nValor em decimetros: %i \n", valorDecimetros);
    printf("Valor em centimetros: %i \n", valorCentimetros);
    printf("Valor em milimetros: %i \n\n", valorMilimetros);

    finalizaPrograma(continueProgram);

    if(continueProgram[0] == 'S') {
        
        main();
    
    } else if(continueProgram[0] == 'N') {

        printf("\n ----------------------- ATE LOGO ;) ------------------------- \n\n");
        return 0;
    
    } else {
      
        printf("Digite S ou N \n");
        finalizaPrograma(continueProgram);
   
    }

}