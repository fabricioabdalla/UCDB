// Escreva um programa que leia um número indeterminado de notas entre 0.0 e
// 10.0. Ao final imprima a média das notas e a quantidade de notas maiores ou
// iguais a 7. A digitação deve ser encerrada quando for digitada uma nota
// inválida.

#include <stdio.h>

int main() {

    float nota, sum, med, maior7;
maior7 = 0;
    printf("Informe a primeira nota: ");
    scanf("%f", nota);

        while(nota >= 0.0 && nota <= 10.0 ) {

            sum = sum + nota;
            if(nota >= 7.0) {
            maior7++;
            }
    printf("Informe a primeira nota: ");
    scanf("%f", nota);
        }
    printf("Nota Invalida \n");
    printf("A média das notas foi %.2f e a quantidade de notas maiores que 7 são %.2f", sum, maior7);

    return 0;
}