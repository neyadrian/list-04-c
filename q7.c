/*Em uma eleição presidencial realizada com N eleitores, existem 4 candidatos.
Os votos são informados através de código. Os dados são apurados segundo a seguinte codificação:

10 – “candidato do Povo”;
20 – “candidato do Patrão”;
30 – “candidato do Empregado”;
05 – “candidato do Pobre”;
Outros códigos – “voto nulo”;

Elabore um algoritmo que calcule e imprima: número de votos de cada candidato,
números de votos nulos e seus percentuais com relação ao total;*/

#include <stdio.h>

int main() {
    
    int voto, quant_eleitores, i, c1 = 0, c2 = 0, c3 = 0, c4 = 0, voto_nulo = 0;

    scanf("%d", &quant_eleitores);
    
    for(i = 1; i <= quant_eleitores; i++) {

        scanf("%d", &voto);

        switch (voto)
        {
        case 10:
            c1++;
            break;
        case 20:
            c2++;
            break;
        case 30:
            c3++;
            break;
        case 5:
            c4++;
            break;
        default:
            voto_nulo++;
            break;
        }
    }

    printf("C. do Povo: %d votos\n", c1);
    printf("C. do Patrao: %d votos\n", c2);
    printf("C. do Empregado: %d votos\n", c3);
    printf("C. do Pobre: %d votos\n", c4);
    printf("Nulos: %d votos (%.2f%%)\n", voto_nulo, (voto_nulo * 100.0) / quant_eleitores);

    return 0;
}