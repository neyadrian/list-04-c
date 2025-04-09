/*Fazer um algoritmo para calcular e imprimir o fatorial de um número qualquer
fornecido pelo usuário. (Lembrando: fatorial de 0! = 1; Fatorial de N! = (N * N-1!)*/

#include <stdio.h>

int main() {
    
    int x, fat;

    printf("Digite um numero: ");
    scanf("%d", &x);

    for(fat = 1; x > 1; x = x - 1) {
        fat = fat * x;
    }

    printf("Fatorial de %d: %d\n", x, fat);

    return 0;
}