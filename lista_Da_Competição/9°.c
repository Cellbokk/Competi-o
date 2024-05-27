#include <stdio.h>

int main (){
    int v[5], i;

    printf("Preencha os valores\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < 5; i++)
    {
        printf("A posição do vetor %d e %d°\n", v[i], i + 1);
    }
    
}