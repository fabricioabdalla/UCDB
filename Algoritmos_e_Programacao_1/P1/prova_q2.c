int main () {
    int ano=0, idade=0;
    printf("Informe seu ano de nascimento: "); scanf("%d", &ano);
    idade = 2024 - ano;
    printf("Voce tem %d anos e por conta disso: ", idade);
    
    if(idade <= 14) {
        printf("esta aprovada pra agencia, Parabens.");
    } else if(idade > 14) {
        printf("esta negada na agencia por ter uma idade superior a 14 anos");
    }
}