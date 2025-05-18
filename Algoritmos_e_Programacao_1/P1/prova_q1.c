#include <stdio.h>

int main (){
    float valor=0, calc=0;
    int netos=0;
    printf("Vovo morreu e deixou a herança pra voces sem dividir ?\n entao nos informe o valor que dividiremos pra voces: ");
    scanf("%f", &valor);
    printf("Informe em quantos netos voces sao: "); 
    scanf("%d", &netos);
     calc = valor / netos;
     printf("Cada um de voces recebera %.2f Reais!",  calc);
}