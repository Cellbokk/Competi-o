#include <stdio.h>

int main() {
    int idade = 1;
    int media = 0, maior = 0, menor = 999, soma = 0, i = 0;

    while (idade != 0) {
        printf("Informe sua idade (digite 0 para sair): ");
        scanf("%d", &idade);

        if (idade == 0) {
            break;
        }

        soma += idade;

        if (idade > maior || i == 0) {
            maior = idade;
        }

        if (idade < menor || i == 0) {
            menor = idade;
        }

        i++;
    }

    if (i != 0) {
        media = soma / i;
    }

    printf("Idade media: %d\n", media);
    printf("Idade maior: %d\n", maior);
    printf("Idade menor: %d\n", menor);

    return 0;
}
