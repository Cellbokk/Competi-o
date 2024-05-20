#include <stdio.h>

int main (){
    int  soma, i;
    i = 0;
    soma = 0;

    do{
        soma += i; // soma = soma + i
        i++; // i = i + 1
    }while (i <= 10);
    

    printf("%d\n", soma);
    printf("%d\n", i);
    
}
