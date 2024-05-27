#include <stdio.h>

int main() {
    int quantidade, numero, maior, vezes = 0;

    printf("Quantos numeros voce deseja digitar?\n ");
    scanf("%d", &quantidade);

    if (quantidade <= 0) {
        printf("Quantidade invalida.\n");
        return 1;
    }

    printf("Digite o 1o numero: ");
    scanf("%d", &maior);

    vezes = 1;

    for (int i = 1; i < quantidade; i++) {
        printf("Digite o %do numero: ", i + 1);
        scanf("%d", &numero);

        if (numero > maior) {
            maior = numero;
            vezes = 1;
        } else if (numero == maior) {
            vezes++;
        }
    }

    printf("O maior numero digitado foi: %d\n", maior);
    printf("Ele foi digitado %d vezes.\n", vezes);

    return 0;
}