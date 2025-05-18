#include <stdio.h>
typedef struct entrevista {
    int idade;
    char sexo;
    int num_filhos;
    float salario;
} Entrevista;

int main() {
    Entrevista V[120];
    int i;
    float media, soma = 0;
    for(i=0; i< 2; i++) {
        printf("Digite a idade:  ");
        scanf("%d", &V[i].idade);
        printf("Digite o sexo: ");
        scanf(" %c", &V[i].sexo);
        printf("Digite o num de filhos: ");
        scanf("%i", &V[i].num_filhos);
        printf("Digite o salário: ");
        scanf("%f", &V[i].salario);
        soma = soma + V[i].salario;
    }
    media = soma / 2;
    printf("A media dos salários e %.2f", media);
}
