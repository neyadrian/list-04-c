/*Escreva um programa que leia várias notas de alunos de uma turma. O
programa deve ler notas até que o usuário digite o valor -1. Após isso, o
programa deve mostrar a média dessas notas.*/

#include <stdio.h>

int main() {
    
    float nota, media, soma = 0;
    int cont = 0;

    scanf("%f", &nota);

    while (nota != -1) {

        soma = soma + nota;
        cont++;

        scanf("%f", &nota);
    }
    
    media = soma / cont;

    printf("Media: %.2f\n", media);

    return 0;
}