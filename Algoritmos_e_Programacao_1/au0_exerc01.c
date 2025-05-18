//Converta 50,8 centímetros para polegadas. Dado: 1polegada = 2,54 centímetros.
#include <stdio.h>

int main() {
    float polegada, centimetro ;
    centimetro = 50.8;
    polegada= centimetro / 2.54;
   printf("Conversor de centimentos para polegada \n");
   printf("%.2f centimetros convertidos para polegada equivale a %.2f polegadas", centimetro, polegada);
  
    return 0;
}