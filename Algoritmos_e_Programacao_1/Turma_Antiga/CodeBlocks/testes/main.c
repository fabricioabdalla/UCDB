#include <stdio.h>
#include <stdlib.h>

int main()
{
    float nota1, nota2, nota3, media;
    printf("Informe sua primeira nota: ");
    scanf("%f", &nota1);
    printf("Informe sua segunda nota: ");
    scanf("%f", &nota2);
    printf("Informe sua terceira nota: ");
    scanf("%f", &nota3);
    media = (nota1 + nota2 + nota3) / 3;
    printf("Sua media e: ");
    printf("%.2f\n", media);

    return 0;
}
