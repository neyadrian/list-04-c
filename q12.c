/*As maçãs custam R$ 1,30 cada se forem compradas menos de uma dúzia,
e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa que leia o
número de maçãs compradas, calcule e escreva o custo total da compra.*/

#include <stdio.h>

int main() {
   
    int quantidade;
    float preco;

    scanf("%d", &quantidade);

    if(quantidade >= 12) {
        preco = quantidade * 1.00;
    } else {
        preco = quantidade * 1.30;
    }

    printf("Valor total: %.2f\n", preco);

    return 0;
}