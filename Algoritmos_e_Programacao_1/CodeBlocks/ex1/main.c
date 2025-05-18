#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variáveis
    int num;
    //Receber um número
    printf("Informe um numero: ");
    scanf("%d",&num);
    //Estrutura de decisão
    if(num>=0)
    {
        printf("Positivo!");
    }
    return 0;
}
