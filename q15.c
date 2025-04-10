/*Faça um programa em linguagem C que funcione através do menu a seguir:

1-SOMA VARIOS NUMEROS
2-MULTIPLICA VARIOS NUMEROS
3-SAI DO PROGRAMA
OPCAO: */

#include <stdio.h>

int main() {
   
    int opcao, quantidade, i;
    float numero, resultado;

    printf("Menu\n 1 - Soma varios numeros\n 2 - Multiplica varios numeros\n 3 - Sair do programa: ");
    scanf("%d", &opcao);

    if (opcao == 1) {
        printf("Quantos numeros: ");
        scanf("%d", &quantidade);
        for(i = 0; i < quantidade; i++) {
            printf("Digite um numero: ");
            scanf("%f", &numero);
            resultado = resultado + numero;
        }
        printf("Soma: %.2f\n", resultado);
    } else if (opcao == 2){
        printf("Quantos numeros: ");
        scanf("%d", &quantidade);
        resultado = 1;
        for(i = 0; i < quantidade; i++) {
            printf("Digite um numero: ");
            scanf("%f", &numero);
            resultado = resultado * numero;
        }
        printf("Multiplicacao: %.2f\n", resultado);
    } else if (opcao == 3) {
        printf("Tchau\n");
    } else {
        printf("Opcao invalida\n");
    }

    return 0;
}