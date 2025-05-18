#include <stdio.h>
// Escreva um programa que calcule e apresente na tela a área de cada círculo
// através da fórmula A = PI * R * R, onde R o valor que deverá ser digitado
// pelo usuário representa o raio do círculo e PI é o número 3,14. Repetir o
// processo enquanto for digitado um valor de R maior que 0.
int main () {

float pi, r, area;
pi = 3.14;
printf("informe o valor de R:");
scanf("%f", &r);
while(r > 0) {
    area = r * r * pi;
    printf("A area do circulo é: %.2f \n", area);
    
    printf("informe o novo valor de R:");
    scanf("%f", &r);
} 
printf("Fim do Programa");
    return 0;
}