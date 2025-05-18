//Campeonato

#include <stdio.h>

int main() {
    int kills[16][20];
    int total_kills[16] = {0};
    int times_acima_800 = 0, maior_kills = 0;

    // Leitura das kills
    for (int time = 0; time < 16; time++) {
        for (int jogo = 0; jogo < 20; jogo++) {
            printf("Informe as kills do time %d no jogo %d: ", time + 1, jogo + 1);
            scanf("%d", &kills[time][jogo]);
            total_kills[time] += kills[time][jogo];
            if (kills[time][jogo] > maior_kills) {
                maior_kills = kills[time][jogo];
            }
        }
    }

    for (int time = 0; time < 16; time++) {
        if (total_kills[time] > 800) {
            times_acima_800++;
        }
    }

    printf("Quantidade de times que fizeram mais de 800 kills: %d\n", times_acima_800);
    printf("Maior quantidade de kills em uma partida: %d\n", maior_kills);

    return 0;
}