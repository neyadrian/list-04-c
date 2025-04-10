/*Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não.
Para estar em condições, um dos seguintes requisitos deve ser satisfeito:
- Ter no mínimo 65 anos de idade.
- Ter trabalhado no mínimo 30 anos.
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos.
Com base nas informações acima, faça um algoritmo que leia (para N empregados):
o número do empregado (código),
o ano de seu nascimento e o ano de seu ingresso na empresa. 
O programa deverá escrever a idade e o tempo de trabalho do empregado e a mensagem 
'Requerer aposentadoria' ou 'Não requerer'. Depois mostrar quem é mais velho e/ou quem tem mais anos de trabalho.*/

#include <stdio.h>

int main() {
    
    int cod, idade, nascimento, idade_empresa, tempo_empresa, quant_func, i, mais_tempo = 0, mais_velho = 0, cod_velho = 0, cod_tempo = 0;

    printf("Quantidade de funcionarios: ");
    scanf("%d", &quant_func);


    for(i = 1; i <= quant_func; i++) {

        printf("Codigo do funcionario: ");
        scanf("%d", &cod);

        printf("Ano de nascimento: ");
        scanf("%d", &nascimento);

        printf("Ano de ingresso: ");
        scanf("%d", &tempo_empresa);

        idade = 2025 - nascimento;
        idade_empresa = 2025 - tempo_empresa;

        if(idade >= 65) {
            printf("Funcionario %d\n", cod);
            printf("Requer aposentadoria\n");
            printf("Idade: %d\n", idade);
        } else if (idade_empresa >= 30) {
            printf("Funcionario %d\n", cod);
            printf("Requer aposentadoria\n");
            printf("Tempo de trabalho: %d\n", idade_empresa);
        } else if (idade >= 60 && idade_empresa >= 25) {
            printf("Funcionario %d\n", cod);
            printf("Requer aposentadoria\n");
            printf("Idade: %d\n", idade);
            printf("Tempo de trabalho: %d\n", idade_empresa);
        } else {
            printf("Funcionario %d\n", cod);
            printf("Não requer aposentadoria\n");
            printf("Idade: %d\n", idade);
            printf("Tempo de trabalho: %d\n", idade_empresa);
        }

        if (idade > mais_velho) {
            mais_velho = idade;
            cod_velho = cod;
        }

        if (idade_empresa > mais_tempo) {
            mais_tempo = idade_empresa;
            cod_tempo = cod;
        }

    }

    printf("Mais velho: func.: %d com %d anos\n", cod_velho, mais_velho);
    printf("Mais tempo: func.: %d com %d anos na empresa\n", cod_tempo, mais_tempo);
    
    return 0;
}