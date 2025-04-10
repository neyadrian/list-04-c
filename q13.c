/*A jornada de trabalho semanal de um funcionário é de 40 horas.
O funcionário que trabalhar mais de 40 horas receberá hora extra,
cujo cálculo é o valor da hora regular com um acréscimo de 50%.
Escreva um algoritmo que leia o número de horas trabalhadas em um mês,
o salário por hora e escreva o salário total do funcionário, que deverá
ser acrescido das horas extras, caso tenham sido trabalhadas, em um total
de 10 funcionários e depois mostre também qual destes obteve maior número
de horas trabalhadas. (Considere que o mês possua 4 semanas exatas).*/

#include <stdio.h>

int main() {
    
    int horas_trabalhadas, horas_extras, i, mais_horas = 0, i_maior = 0;
    float valor_hora, sal_total, salario;

    for(i = 1; i <=10; i++) {
        printf("Horas trabalhadas: ");
        scanf("%d", &horas_trabalhadas);

        printf("Salario por hora: ");
        scanf("%f", &valor_hora);

        if (horas_trabalhadas > 160) {
            horas_extras = horas_trabalhadas - 160;
            salario = 160 * valor_hora;
            sal_total = salario + (horas_extras * valor_hora * 1.5);
        } else {
            sal_total = horas_trabalhadas * valor_hora;
        }

        printf("Salario total funcionario %d: %.2f\n", i, sal_total);
        
        if(horas_trabalhadas > mais_horas) {
            mais_horas = horas_trabalhadas;
            i_maior = i;
        }
    }
    
    printf("Funcionario com mais horas: %d com %d horas\n", i_maior, mais_horas);

    return 0;
}