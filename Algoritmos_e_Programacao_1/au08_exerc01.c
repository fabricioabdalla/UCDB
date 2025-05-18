/*1. Um instituto de Meteorologia deseja fazer um estudo sobre as temperaturas do
mês de outubro. Para isso você deve fazer um programa que leia as 31
temperaturas médias ocorridas em cada um dos 31 dias do mês e armazená-las
em um vetor. Seu programa deve calcular e imprimir a temperatura média do
mês de outubro e a diferença entre cada temperatura e a média.*/

#include <stdio.h>

int main() {
    int dias = 4;
    float temperaturas[31], soma = 0.0, media;

    // Entrada das temperaturas
    for (int i = 0; i < dias; i++) {
        printf("Informe a temperatura do dia %d: ", i + 1);
        scanf("%f", &temperaturas[i]);
        soma += temperaturas[i]; 
    }


    media = soma / dias;

    // Exibição da média
    printf("\nA temperatura media do mes de outubro foi: %.2f.C\n", media);

    // Diferença de cada temperatura em relação à média
    printf("\nDiferenca entre cada temperatura e a media:\n");
    for (int i = 0; i < dias; i++) {
        printf("Dia %d: %.2f.C\n", i + 1, temperaturas[i] - media);
    }

    return 0;
}
