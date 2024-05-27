#include <stdio.h>

int main (){

    float tempo, Vmedia, distancia;
    
    printf("Tempo gasto na viagem:");
    scanf("%f", &tempo);
    printf("Sua velocidade media:");
    scanf("%f", &Vmedia);
    
    distancia = tempo * Vmedia;

    printf("A quantidade de litros usados e igual a: %.2f", distancia / 12);
}