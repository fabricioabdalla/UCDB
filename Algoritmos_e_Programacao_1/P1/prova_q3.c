int main () {
    float cobrar=0, minutos=0;
    int km=0;

    printf("Informe qual a quantidade de km entre as cidades: "); 
    scanf("%d", &km);

    printf("Informe a quantidade de minutos de ligacao: "); 
    scanf("%f", &minutos);

    if((km >= 1) && (km <= 50)) {
        cobrar = minutos * 0.11;
    } else if((km >= 51) && (km <= 100)) {
        cobrar = minutos * 0.17;
    } else if((km >= 101) && (km <= 300)) {
        cobrar = minutos * 0.24;
    } else if(km > 300) {
        cobrar = minutos * 0.28;
    }
    printf("A quantidade de minutos em ligacao foi de %.0f, numa distancia de %d km de acordo com a tabela o valor a ser pago eh de %.2f Reais", minutos, km, cobrar);
}