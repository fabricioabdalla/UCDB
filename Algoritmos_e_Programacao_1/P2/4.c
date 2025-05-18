//Academia

#include <stdio.h>

int main() {
    int dias = 50, soma=0;
    int nAlunos[50] = {0};
    float media;

    for(int i = 0; i < dias; i++) {
        printf("Dia %d, quantidade de alunos presentes: ", i+1);
        scanf("%d", &nAlunos[i]);
        soma += nAlunos[i];
    }
    media = soma / dias;
    if(media < 20) {
        printf("A media eh %.2f, logo o Plano de aulas precisa ser reformulado.", media);
    } else {
        printf("A media eh %.2f, logo o Plano de aula esta satisfatorio.", media);

    }


}