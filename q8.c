/*Construa um algoritmo para ler salários de 10 funcionários de uma empresa e depois calcular e informar:

-Maior salário;
-Menor salário;
-Média salarial;
-Imposto de renda, levando em consideração (até R$ 1.500 – isento; maior que R$ 1.500 e
menor ou igual a R$ 2.000 – descontar 10%; maior que R$ 2.000 – descontar 15%);
-Salário liquido a receber; */

#include <stdio.h>

int main() {
    float salario, imposto, sal_liquido, maior = 0, menor = 0, soma = 0, media;
    int i;

    for(i = 1; i <= 10; i++) {
        printf("Digite o salario: ");
        scanf("%f", &salario);

        if(salario <= 1500) {
            imposto = 0;
        } else if(salario <= 2000) {
            imposto = salario * 0.10;
        } else {
            imposto = salario * 0.15;
        }

        sal_liquido = salario - imposto;

        if(i == 1) {
            maior = menor = salario;
        } else {
            if(salario > maior) maior = salario;
            if(salario < menor) menor = salario;
        }

        soma = soma + salario;

        printf("Imposto: %.2f\n", imposto);
        printf("Salario liquido: R$ %.2f\n\n", sal_liquido);
    }

    media = soma / 10;

    printf("Maior salario: %.2f\n", maior);
    printf("Menor salario: %.2f\n", menor);
    printf("Media salarial: %.2f\n", media);

    return 0;
}