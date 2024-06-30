#include <stdio.h>
#include <string.h>
#include <locale.h>
#include <stdlib.h>

#define TAM 50

int main (){
    char s[TAM];
    int i, ok;

    char s1[TAM] = {"Logica de"};
    char s2[TAM] = {" Programação"};;
    
    char origem[TAM] = {"Olá mundo"};
    char destino[TAM];

    char hardText[TAM] = {"/exit"};
    char senha_usr[TAM];

    printf("Antes do strcpy\n");
    puts(origem);
    puts(destino);

    strcpy(destino,origem); // atribuir o valor de origem para dentro do destino

    printf("Depois do strcpy\n");
    puts(origem);
    puts(destino);

    printf("\nAntes do strcat:\n");
    printf("str1: %s\n", s1);
    printf("str2: %s\n", s2);

    strcat(s1,s2); // Para botar o valor na frente do outro, pegando o valor de s2 e botando no s1 :D

    printf("\ndepois do strcat:\n");
    puts(s1);

    printf("Digite um texto:\n");
    gets(s);
    
    i = strlen(s); // ele mostra o tamanho da sting 
    
    printf("\n Tamanho do texto: %d\n\n", i);

    printf("Impressão de posição a posição:\n");
    for (i = 0; i < strlen(s); i++);
    {
        printf("%c", s[i]);
    }
    
    printf("Digite um texto:\n");
    gets(senha_usr);

    ok = strcmp(hardText,senha_usr); //server para comparar duas strings para ver se as duas são iguais

    if (ok == 0){
        printf("Texto iguais.\n");
    } else {
        printf("texto diferentes.\n");
    }
}