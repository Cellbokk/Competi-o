#include <stdio.h>

int main() {
    int num1, num2, soma_pares = 0, mult_impares = 1, temp, atual;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    
    if (num1 > num2) {
        temp = num1;
        num1 = num2;
        num2 = temp;
    }

    atual = num1;

    while (atual <= num2) {
        if (atual % 2 == 0) { 
            soma_pares += atual;
        } else { 
            mult_impares *= atual;
        }
        atual++;
    }

    printf("A soma dos numeros pares no intervalo [%d, %d] é: %d\n", num1, num2, soma_pares);
    printf("A multiplicacao dos numeros impares no intervalo [%d, %d] é: %d\n", num1, num2, mult_impares);

    return 0;
}