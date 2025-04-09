/*Fazer um algoritmo para calcular e imprimir a média aritmética de 50 alunos,
tendo como dados de entrada 3 notas semestrais. Depois imprimir situação do aluno
que deve obedecer ao seguinte critério: (media maior ou igual a 7, “aprovado”;
entre 4 e 6.9, “naf”; menor que 4, “reprovado”), depois imprimir a média geral da turma;*/

#include <stdio.h>

int main() {
    
    float n1, n2, n3, media, media_geral = 0;
    int cont, cont1 = 0;

    for(cont = 1; cont <= 50; cont++) {

        cont1++;

        scanf("%f", &n1);
        scanf("%f", &n2);
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        printf("Media: %.2f\n", media);

        media_geral = media_geral + media;

    }

    media_geral = media_geral / cont1;

    printf("Media geral: %.2f\n", media_geral);

    return 0;
}