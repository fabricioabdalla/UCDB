/*3. Uma companhia aérea quer armazenar as seguintes informações de cada um de
seus 250 clientes: código do cliente, preço da passagem, idade e tipo da
passagem (A,B ou C). Escreva um programa que contenha uma estrutura capaz
de armazenar os dados de cada cliente, e armazene os dados de todos os clientes
em um vetor e:
a) Calcule e imprima a média de preços das passagens;
b) Ache e imprima o código do cliente cuja passagem é a mais cara e o
código do cliente cuja passagem é mais barata;
c) Calcule e imprima o número de clientes cuja idade é maior ou igual a
18 anos é a passagem é do tipo A;
d) Calcule e imprima a porcentagem de clientes com menos de 50 anos
e cujo tipo de passagem é C. */

#include <stdio.h>

typedef struct {
    int codigo;
    float preco_passagem;
    int idade;
    char tipo_passagem;
} Cliente;

int main() {
int numC = 5;
    Cliente clientes[numC];
    float soma_precos = 0, maior_preco = 0, menor_preco = 999999.99;
    int codigo_mais_cara, codigo_mais_barata;
    int maiores_18_tipoA = 0, menos_50_tipoC = 0;

    // Entrada de dados
    for (int i = 0; i < numC; i++) {
        printf("\nInforme os dados do cliente %d\n", i + 1);
        printf("Código: ");
        scanf("%d", &clientes[i].codigo);
        printf("Preço da passagem: ");
        scanf("%f", &clientes[i].preco_passagem);
        printf("Idade: ");
        scanf("%d", &clientes[i].idade);
        printf("Tipo de passagem (A, B ou C): ");
        scanf(" %c", &clientes[i].tipo_passagem);

        soma_precos += clientes[i].preco_passagem;

        if (clientes[i].preco_passagem > maior_preco) {
            maior_preco = clientes[i].preco_passagem;
            codigo_mais_cara = clientes[i].codigo;
        }
        if (clientes[i].preco_passagem < menor_preco) {
            menor_preco = clientes[i].preco_passagem;
            codigo_mais_barata = clientes[i].codigo;
        }
        if (clientes[i].idade >= 18 && clientes[i].tipo_passagem == 'A') {
            maiores_18_tipoA++;
        }
        if (clientes[i].idade < 50 && clientes[i].tipo_passagem == 'C') {
            menos_50_tipoC++;
        }
    }

    // Cálculo da média e porcentagem
    float media_precos = soma_precos / numC;
    float porcentagem_menos_50_tipoC = (menos_50_tipoC / numC) * 100;

    // Saída dos resultados
    printf("\nMédia de preços das passagens: %.2f\n", media_precos);
    printf("Código do cliente com a passagem mais cara: %d\n", codigo_mais_cara);
    printf("Código do cliente com a passagem mais barata: %d\n", codigo_mais_barata);
    printf("Número de clientes com idade >= 18 e passagem do tipo A: %d\n", maiores_18_tipoA);
    printf("Porcentagem de clientes com idade < 50 e passagem do tipo C: %.2f%%\n", porcentagem_menos_50_tipoC);

    return 0;
}

