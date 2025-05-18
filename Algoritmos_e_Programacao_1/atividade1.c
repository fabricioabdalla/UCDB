#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das Variáveis
    float saldo_medio,credito;
    //Receber o saldo médio
    printf("Informe o saldo medio: ");
    scanf("%f", &saldo_medio);
    //Verificar a faixa do saldo e atribuir o valor do crédito
    if(saldo_medio<500)
    {
        printf("Nenhum valor de credito! ");
    }
    else if(saldo_medio>=500 && saldo_medio < 800)
    {
        credito=saldo_medio*0.25;
    }
    else if(saldo_medio >= 800 && saldo_medio < 1000) 
    {
        credito=saldo_medio*0.30;
    }
    else
    {
        credito=saldo_medio*0.40;
    }
    printf("Valor do credito: %f/n", credito);
    return 0;
}
