#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

int main (){
    setlocale(LC_ALL, "Portuguese");
    char pessoes[20];
    int qtd, one;
    int i = 0;
    int soma = 200;
    int dummy = 100;    
    
    
    do{
    printf("\nDigite a quantidade de pessoas que vao:\n");
    scanf("%d", &qtd);
    system("clear");
    printf("\nQuantidade de convidados é maior que 20!\n");
    }while(qtd >= 18);

    for (i = 0; i < qtd; i++)
    {
        system("clear");
        printf("Vai acompanhante: (1-sim)(2-nao)\n");
        scanf("%d", &one);
        fflush(stdin);
        if(one == 2){
            printf("Digite seu nome[%d]:\n", i);
            fgets(pessoes, 20, stdin);
            fflush(stdin);
            system("cls");
            soma += 100;
        } else if(one == 1) {
            system("clear");

            printf("Digite seu nome[%d]:\n", i);
            fgets(pessoes, 20, stdin);
            fflush(stdin);

            printf("Digite o nome do convidado[%d]:\n", i);
            fgets(pessoes, 20, stdin);
            fflush(stdin);
            soma += 200;
        }else if(i == 13){
			printf("como a quantidade de pessoas foi = a 13 adicionamos 1 manequeim");
			soma += dummy;
		}
    
    }
    printf("Total a pagar é de %i", soma);

}