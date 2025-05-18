int main () {
    int qual = 0, quantos = 0, maior = 0, d=0, mais50=0;
    for (int i = 1; i <= 10; i++)
    {
        d++;
        printf("Loja %d informe quantos animais trouxe para a feira: ", d);
        scanf("%d", &quantos);

    if (quantos > maior){
        maior = quantos;
        qual = d;
    } 
    if (quantos > 50) {
        mais50++;
    }
    }
printf("a loja %d trouxe %d animais sendo a maior quantidade, e tivemos no evento %d lojas com mais de 50 animais", qual, maior, mais50);
}