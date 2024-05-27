#include <stdio.h>

int main (){
    int v[5], i;

    printf("Preencha os vetores:\n");
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &v[i]);
    }
    for(i = 4; i >= 0; i--){
        printf("O numero e sua posição e: %d | %d°\n", v[i], i + 1);
    }
}