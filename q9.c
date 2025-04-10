/*O supermercado Excelente Preço está precisando ser informatizado. Neste sentido,
o dono quer um programa que leia os preços dos produtos até que seja informado o valor zero.
No final o programa deve informar o total da compra e perguntar a forma de pagamento.
As opções da forma de pagamento são: 1) A vista; 2) No cartão de crédito.
Se a opção escolhida for a vista, então o programa informa o valor da compra com um desconto de 5%.
Caso a compra seja no cartão de crédito, o programa informa o valor da compra dividido em 4 vezes. */

#include <stdio.h>

int main() {
    
    float preco, valor = 0, novo_preco;
    int pagamento;

    while (preco != 0) {

        scanf("%f", &preco);

        valor = valor + preco;
    }


    printf("Total da compra: %.2f\n", valor);

    printf("Pagamento\n1- A vista\n 2- Cartao Credito: ");
    scanf("%d", &pagamento);

    if (pagamento == 1) {
        novo_preco = valor * 0.985;
        printf("Novo preco: %.2f\n", novo_preco);
    } else {
        novo_preco = valor / 4;
        printf("Novo preco: %.2f\n (parcela)", novo_preco);
    }

    return 0;
}