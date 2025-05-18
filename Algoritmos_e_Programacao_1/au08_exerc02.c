/*2. Em um campeonato de futebol participam 20 times. Cada time joga um total de
38 partidas. Escreva um programa que leia o número de faltas cometidas por
cada time em cada um dos jogos e armazene em uma matriz 20X38. Em seguida,
seu programa deve calcular e imprimir a quantidade de times que cometeu mais
de 300 faltas no campeonato, a média de faltas do campeonato e a maior
quantidade de faltas cometidas em uma partida.*/

#include <stdio.h>

int main() {
    int faltas[20][38];
    int total_faltas[20] = {0};
    int times_acima_300 = 0, maior_falta = 0, soma_faltas = 0;

    // Leitura dos dados de faltas
    for (int time = 0; time < 20; time++) {
        for (int jogo = 0; jogo < 38; jogo++) {
            printf("Informe as faltas do time %d no jogo %d: ", time + 1, jogo + 1);
            scanf("%d", &faltas[time][jogo]);
            total_faltas[time] += faltas[time][jogo];
            soma_faltas += faltas[time][jogo];
            if (faltas[time][jogo] > maior_falta) {
                maior_falta = faltas[time][jogo];
            }
        }
    }

    // Verificação de times com mais de 300 faltas
    for (int time = 0; time < 20; time++) {
        if (total_faltas[time] > 300) {
            times_acima_300++;
        }
    }

    // Cálculo da média de faltas
    float media_faltas = soma_faltas / (20.0 * 38);

    // Exibição dos resultados
    printf("\nQuantidade de times que cometeram mais de 300 faltas: %d\n", times_acima_300);
    printf("Média de faltas no campeonato: %.2f\n", media_faltas);
    printf("Maior quantidade de faltas em uma partida: %d\n", maior_falta);

    return 0;
}