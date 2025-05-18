#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, percentual, aumento, novo_salario;
    printf("Informe seu salario atual: ");
    scanf("%f", &salario);
    printf("Informe o percentual de aumento: ");
    scanf("%f", &percentual);
    aumento = salario * (percentual / 100);
    novo_salario = salario + aumento;
    printf("O valor do aumento é: ");
    printf("%.2f\n", aumento);
    printf("Seu novo salario e: ");
    printf("%.2f\n", novo_salario);
    return 0;
}
