#include <stdio.h>

int main() {
    int num, maior = 0, menor = 999;
    
    printf("Digite um numero (digite -1 para sair):\n");

    for (;;) {
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        if (num > maior) {
            maior = num;
        }
        if (num < menor) {
            menor = num;
        }
    }
    
    printf("O maior numero: %d\n", maior);
    printf("O menor numero: %d\n", menor);

    return 0;
}