int main () {
    float preco=1, sum=0, med=0;
    int quantidade= 0;
    //preco começa com 1 para garantir que o laço não quebrará de inicio,melhor do que usar scanf duas vezes uma dentro e outra fora
    while(preco > 0) {
        printf("Informe o preco do livro, caso deseje para informe um valor menor ou igual a 0: ");
        scanf("%f", &preco);
        if(preco <= 0) {
            printf("O lancamento parou, obrigado pro utilizar o programa");
            break;
        }
        quantidade++;
        sum = sum + preco;
        med = sum / quantidade;
        printf("A media atual dos precos eh %.2f Reais, e ate agora foram lidos %d precos.\n", med, quantidade);
    }
}