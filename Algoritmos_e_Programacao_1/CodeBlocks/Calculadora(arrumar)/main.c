#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,result;
    int enq,op,opc;
enq = 1;
opc = 0;
while (enq != 0) {
op = 0;

printf("\nl::MENU::\n");
    printf("\t1 - Continuar\n");
    printf("\t2 - Sair\n");
    printf("\tOpcao: ");
    scanf("%d", &opc);

if(opc != 2) {
    printf("\nl::MENU::\n");
    printf("\t1 - Soma\n");
    printf("\t2 - Subtracao\n");
    printf("\t3 - Multiplicacao\n");
    printf("\t4 - Divisao\n");
    printf("\t5 - Sair\n");
    printf("\tOpcao: ");
    scanf("%d", &op);
}
else if (opc == 2){
    printf("Obrigado por utilizar a calculadora!");
    enq = 0;
}

  if(op == 1)
    {
        result = n1 + n2;
        printf("%.2f + %.2f = %.2f",n1,n2,result);
    }
    else if (op == 2){
        result = n1 - n2;
        printf("%.2f - %.2f = %.2f",n1,n2,result);
    }
    else if (op == 3)
    {
        result = n1 * n2;
        printf("%.2f * %.2f = %.2f",n1,n2,result);

    }
    else if (n2 != 0 && op == 4) {
        result = n1 / n2;
        printf("%.2f / %.2f = %.2f",n1,n2,result);
    }
    else if (n2 == 0) {
        printf("Nao ha divisao por %f", n2);
    }
    else {
        printf("Opcao invalida");
    }
}

    return 0;
}
