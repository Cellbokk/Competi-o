#include <stdio.h>

int main (){
    float v[5], media;

    v[0] = 50;
    v[1] = 40;
    v[2] = 30;
    v[3] = 20;
    v[4] = 10;
        
    media = (v[0] + v[1] + v[2] + v[3] + v[4]) / 5;

    printf("A media entre os valores e: %.2f ", media);

}   