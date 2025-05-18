#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
   int num1, num2, dado1, aposta = 1, dado2, jogadas = 0, derrotas = 0, maiorganho = 0, maisvalor = 0, valorcompara = 0;
   int saldo = 0, parimpar, parimparCroupier, lado1 = 0, lado2 = 0, lado3 = 0, lado4 = 0, lado5 = 0, lado6 = 0, gasto = 0;
   char lancamento;


   srand(time(0));
   printf("********************************************\n");
   printf("******Bem vindo ao jogo da adivinhacao******\n");
   printf("********************************************\n");
   printf("As regras sao as seguintes:\n");
   printf("1) Se o jogador acertar o valor exato dos dois dados ganha 6 vezes o valor apostado\n");
   printf("2) Se o jogador acertar a soma, ganha 3 vezes o valor apostado\n");
   printf("3) Se o jogador acertar apenas um dos valores, ganha o mesmo valor apostado de volta\n");
   printf("4) Se a paridade da soma do palpite do jogador for igual a paridade da soma dos dados do croupier, o jogador ganha de volta metade do valor apostado.\n");


   while (aposta != 0) {
       printf("Informe o valor de aposta desejado: ");
       scanf("%d", &aposta);
       
       if (aposta <= 0) {
           saldo = saldo - gasto;
           printf("O jogador jogou %d vez(es)\n", jogadas);
           printf("Saldo final foi de %d reais.\n", saldo);
           printf("O valor de dado que mais saiu foi %d.\n", maisvalor);
           printf("O maior valor ganho em uma jogada foi %d reais\n", maiorganho);
           printf("O jogador perdeu %d vez(es)\n", derrotas);
           break;
       }
gasto = gasto + aposta;
jogadas++;
       printf("Tentativa %d\n", jogadas);
       printf("Escolha a face do primeiro dado: ");
       scanf("%d", &dado1);
       printf("Escolha a face do segundo dado: ");
       scanf("%d", &dado2);
      
       while ((dado1 < 1 || dado1 > 6) || (dado2 < 1 || dado2 > 6)) {
           if (dado1 < 1 || dado1 > 6) {
               printf("Corrija o valor do primeiro dado, ele deve ser um número de 1 a 6: \n");
               scanf("%d", &dado1);
           }
           if (dado2 < 1 || dado2 > 6) {
               printf("Corrija o valor do segundo dado, ele deve ser um número de 1 a 6: \n");
               scanf("%d", &dado2);
           }
       }
      
       printf("Quando quiser, digite a letra 'c' ou 'C' para que o croupier lance os dados: ");
       scanf(" %c", &lancamento);
       while (lancamento != 'c' && lancamento != 'C') {
           printf("Quando quiser, digite a letra 'c' ou 'C' para que o croupier lance os dados: ");
           scanf(" %c", &lancamento);
       }
      
       num1 = (rand() % 6) + 1;
       num2 = (rand() % 6) + 1;
       printf("O croupier lançou os seguintes dados: %d e %d\n", num1, num2);


       parimpar = (dado1 + dado2) % 2;
       parimparCroupier = (num1 + num2) % 2;


       if(parimpar == 0 && parimparCroupier == 0){
           parimpar = 0;
           parimparCroupier = 0;
       } else if (parimpar != 0 && parimparCroupier != 0){
           parimpar = 1;
           parimparCroupier = 1;
       }


   if((dado1 == num1) && (dado2  == num2) || (dado2 == num1) && (dado1 == num2)) {
       aposta = aposta * 6;
       valorcompara = aposta;
       printf("Parabéns você ganhou 6 vezes mais o valor apostado: %d reais\n", aposta);
         saldo = saldo + aposta;
       } else if ((dado1 + dado2) == (num1 + num2)) {
           aposta = aposta * 3;
           valorcompara = aposta;
           printf("Parabéns você ganhou 3 vezes mais o valor apostado: %d reais\n", aposta);
           saldo = saldo + aposta;
       } else if (dado1 == num1 || dado2 == num2 || dado2 == num1 || dado1 == num2 ) {
           valorcompara = aposta;
           saldo = saldo + aposta;
           printf("Você ganhou o valor apostado de volta: %d reais\n", aposta);
       } else if (parimpar == parimparCroupier) {           
           aposta = aposta / 2;
           valorcompara = aposta;
           printf("Você ganhou metade do valor apostado: %d reais\n", aposta);
           saldo = saldo + aposta;
       } else {
           printf("Você perdeu tudo!\n");
           valorcompara = 0;
           saldo = saldo + 0;
           derrotas++;
       }


       if(valorcompara >= maiorganho) {
           maiorganho = valorcompara;
       }


       // Contagem de aparições dos dados
       if (num1 == 1) lado1++;
       if (num2 == 1) lado1++;
       if (num1 == 2) lado2++;
       if (num2 == 2) lado2++;
       if (num1 == 3) lado3++;
       if (num2 == 3) lado3++;
       if (num1 == 4) lado4++;
       if (num2 == 4) lado4++;
       if (num1 == 5) lado5++;
       if (num2 == 5) lado5++;
       if (num1 == 6) lado6++;
       if (num2 == 6) lado6++;


       // Determinar qual valor apareceu mais
       if (lado1 >= lado2 && lado1 >= lado3 && lado1 >= lado4 && lado1 >= lado5 && lado1 >= lado6) {
           maisvalor = 1;
       }if (lado2 >= lado1 && lado2 >= lado3 && lado2 >= lado4 && lado2 >= lado5 && lado2 >= lado6) {
           maisvalor = 2;
       }if (lado3 >= lado1 && lado3 >= lado2 && lado3 >= lado4 && lado3 >= lado5 && lado3 >= lado6) {
           maisvalor = 3;
       }if (lado4 >= lado1 && lado4 >= lado2 && lado4 >= lado3 && lado4 >= lado5 && lado4 >= lado6) {
           maisvalor = 4;
       }if (lado5 >= lado1 && lado5 >= lado2 && lado5 >= lado3 && lado5 >= lado4 && lado5 >= lado6) {
           maisvalor = 5;
       }if (lado6 >= lado1 && lado6 >= lado2 && lado6 >= lado3 && lado6 >= lado4 && lado6 >= lado5) {
           maisvalor = 6;
       }
   }


   return 0;
}


