/*Escreva um programa que mostre todos os números pares no intervalo de 1 a 40
de forma decrescente, utilizando o comando while. Depois faça o mesmo, mas desta
vez, utilizando o comando for. */

#include <stdio.h>

int main() {
    
    int num = 40;

    while (num >= 1) {
        if(num % 2 == 0) {
            printf("%d\n", num);
        }
        num--;
    }

    return 0;
}

/*int main() {
    
    int num;

    for (num = 40; num >= 1; num--) {
        if(num % 2 == 0) {
            printf("%d\n", num);
        }
    }

    return 0;
}*/