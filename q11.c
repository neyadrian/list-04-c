/*Faça um algoritmo para ler (10 clientes): 
número da conta do cliente, saldo, débito e crédito. 
Após, calcular e escrever o saldo atual (saldo atual = saldo - débito + crédito).
Também testar se saldo atual for maior ou igual a zero escrever a mensagem 'Saldo Positivo',
senão escrever a mensagem 'Saldo Negativo'. E ainda exibir qual a conta com maior saldo e de menor saldo. */

#include <stdio.h>

int main() {
    
    float saldo, debito, credito, saldo_atual, saldo_maior = 0, saldo_menor = 0;
    int conta, i, conta_maior = 0, conta_menor = 0;

    for(i = 1; i <= 10; i++){
        printf("Numero da conta: ");
        scanf("%d", &conta);

        printf("Saldo: ");
        scanf("%f", &saldo);

        printf("Debito: ");
        scanf("%f", &debito);

        printf("Credito: ");
        scanf("%f", &credito);

        saldo_atual = saldo - debito + credito;

        printf("Saldo Atual: %.2f\n", saldo_atual);

        if (saldo_atual >= 0) {
            printf("Saldo Positivo\n");
        } else {
            printf("Saldo Negativo\n");
        }

        if (i == 1) {
            saldo_maior = saldo_menor = saldo_atual;
            conta_maior = conta_menor = conta;
        } else {
            if (saldo_atual > saldo_maior) {
                saldo_maior = saldo_atual;
                conta_maior = conta;
            }
            if (saldo_atual < saldo_menor) {
                saldo_menor = saldo_atual;
                conta_menor = conta;
            }
        }
    }

    printf("Maior saldo: Conta %d com %.2f\n", conta_maior, saldo_maior);
    printf("Menor saldo: Conta %d com %.2f\n", conta_menor, saldo_menor);
    
    return 0;
}