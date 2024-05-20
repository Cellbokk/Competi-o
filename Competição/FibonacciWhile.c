#include <stdio.h>

int main (void){
    int i, ant1, ant2, atual;

    ant1 = 1;
    ant2 = 0;

    printf("Serie de fibonacci (8 primeiros termos:) \n");
    printf("%d ", ant2);
    printf("%d ", ant1);

    i = 3;
    while(i <= 8){
        atual = ant1 + ant2;
        printf("%d ", atual);
        ant2 = ant1;
        ant1 = atual;
        i++;
    }
    
    
    return 0;
}