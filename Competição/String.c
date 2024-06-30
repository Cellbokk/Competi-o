#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

#define TAM 50

int main (){
    char s[TAM];

    setlocale(LC_ALL, "Portuguese"); 

    printf("Digite o texto:\n");
    gets(s);
    fflush(stdin);
    
    puts("Resultado");
    puts(s);
    puts("");
    
    puts("O texto e:");
    fgets(s, 10, stdin);
    fflush(stdin);

    puts(s);

    printf("Escreva seu nome:\n");
    scanf("%50[^\n]s", x);
    fflush(stdin);
    system("clear");

    printf("%s", x);
}

