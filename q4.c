/*Ler o nome de 2 times e o número de gols marcados na partida (para cada time).
Escrever o nome do vencedor. Caso não haja vencedor deverá ser impressa a palavra EMPATE.*/

#include <stdio.h>
#include <string.h>

int main() {
    
    int gol1, gol2;
    char time1[25], time2[25];

    printf("Digite o nome do time 1: ");
    scanf("%s", time1);
    printf("Digite o numero de gols: ");
    scanf("%d", &gol1);

    printf("Digite o nome do time 2: ");
    scanf("%s", time2);
    printf("Digite o numero de gols: ");
    scanf("%d", &gol2);

    if (gol1 > gol2) {
        printf("Time vencedor: %s\n", time1);
    } else if (gol1 < gol2) {
        printf("Time vencedor: %s\n", time2);
    } else {
        printf("EMPATE\n");
    }

    return 0;
}