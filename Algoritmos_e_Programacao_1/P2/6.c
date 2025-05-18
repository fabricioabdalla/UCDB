//Agencia

#include <stdio.h>

typedef struct {
    int codigo;
    int viagens;
    int idade;
} Cliente;

int main () {
int numC = 2;
int sum = 0;
float media = 0.0;
int idade30 = 0, idade25 = 0;
Cliente clientes[numC];

for (int i = 0; i < numC; i++) {
        printf("\nInforme os dados do cliente %d\n", i + 1);
        printf("Codigo: ");
        scanf("%d", &clientes[i].codigo);
        printf("quantidade de viagens realizadas: ");
        scanf("%d", &clientes[i].viagens);
        printf("Idade: ");
        scanf("%d", &clientes[i].idade);
        sum += clientes[i].viagens;
        if(clientes[i].idade >= 30) {
            idade30++;
        } else if(clientes[i].idade < 25) {
            idade25++;
        }
}
float porcento25 = idade25 * 100;
porcento25 = porcento25 / numC;
media = sum / numC;
printf("A media de viagens dos clientes eh: %.2f\n", media);
printf("A quantidade de clientes com idade maior ou igual a 30 eh: %d\n", idade30);
printf("A porcentagem de clientes com idade menor que 25 eh: %.2f%%\n", porcento25);
}