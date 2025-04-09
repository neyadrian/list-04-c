/*Escreva um programa para ler dois números inteiros M e N e, a seguir, imprimir os números pares existentes no intervalo [M, N].*/

#include <stdio.h>

int main() {
   
    int n, m, num, temp = 0;

    scanf("%d %d", &m, &n);

    if (m > n) {
        temp = m;
        m = n;
        n = temp;
    }

    for (num = m; num <= n; num++) {
        if(num % 2 == 0) {
            printf("%d\n", num);
        }
    }

    return 0;
}