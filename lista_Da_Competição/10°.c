#include <stdio.h>

int main (){
    int v[10], i;

    printf("Preencha os valores\n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &v[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        printf("A posição do vetor %d e %d°\n", v[i], i + 1);
    }
}