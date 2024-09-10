#include <stdio.h>
int main ()
{
    int voto, contador, qtd1=0, qtd2=0, qtd3=0, qtd4=0, nulos=0, brancos=0;
    float p1, p2, p3, p4, pwhite, pnul;

    for(contador = 1; contador <=20; contador++) {
        printf("Informe o seu voto: ");
        scanf("%d", &voto);

        if(voto == 1) {
            qtd1++;
        }
        else if (voto == 2) {
            qtd2++;
        }
        else if (voto == 3) {
            qtd3++;
        }
        else if (voto == 3) {
            qtd3++;
        }
        else if (voto == 4) {
            qtd4++;
        }
        else if (voto == 5) {
            brancos++;
        }
        else {
            nulos++;
        }
    }
    p1 = qtd1 / 0.2; //ou qtd1*100/2000
    p2 = qtd2 / 0.2;
    p3 = qtd3 / 0.2;
    p4 = qtd4 / 0.2;
    pwhite = brancos / 0.2;
    pnul = nulos / 0.2;

    if(qtd1>qtd2 && qtd1>qtd3 && qtd1>qtd4){
        printf("Candidato 1 ganhou com %.2f %%", p1);
    }
    else if(qtd2>qtd1 && qtd2>qtd3 && qtd2>qtd4){
        printf("Candidato 2 ganhou com %.2f %%", p2);
    }
    else if(qtd3>qtd2 && qtd3>qtd1 && qtd3>qtd4){
        printf("Candidato 3 ganhou com %.2f %%", p3);
    }
    else {
        printf("Candidato 4 ganhou com %.2f %%", p4);
    }
    printf("\n A quantidade de votos em branco foi %.2f %% e a de votos nulos foi %.2f %%", pwhite, pnul);
}