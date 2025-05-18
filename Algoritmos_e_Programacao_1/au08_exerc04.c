#include <stdio.h>

typedef struct {
    char nome[50];
    int idade;
    float nota;
} Estudante;

int main() {
    Estudante aluno;

    // Entrada de dados
    printf("Digite o nome do estudante: ");
    scanf("%s", aluno.nome);
    printf("Digite a idade do estudante: ");
    scanf("%d", &aluno.idade);
    printf("Digite a nota do estudante: ");
    scanf("%f", &aluno.nota);

    // Exibição dos dados
    printf("\nInformações do estudante:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Idade: %d\n", aluno.idade);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
        //Para array 
Estudante turma[30]; // 30 estudantes
}
