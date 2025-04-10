/*Jogo da adivinhação: Tentar adivinhar um número entre 0 - 100.
Armazene um número aleatório em uma variável. O Jogador tem 10
tentativas para adivinhar o número gerado. Ao final de cada tentativa,
imprima a quantidade de tentativas restantes, e imprima se o número
inserido é maior ou menor do que o número armazenado. */

#include <stdio.h>

int main() {
    
    int numero, tentativa, i;

    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (i = 1; i <= 10; i++) {
        printf("Adivinhe o numero: ");
        scanf("%d", &tentativa);

        if (tentativa > numero) {
            printf("Numero inserido  maior do que o armazenado\n");
            printf("Tentativas restantes: %d\n", 10 - i);
        } else if (tentativa < numero) {
            printf("Numero inserido menor do que o armazenado\n");
            printf("Tentativas restantes: %d\n", 10 - i);
        } else {
            printf("Voce acertou\n");
            break;
        }
    }

    return 0;
}