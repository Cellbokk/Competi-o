#include <stdio.h>

int main (){
    int  soma, i;
    i = 0;
    soma = 0;

    while (i <= 10){
        soma += i; // soma = soma + i
        i++;// i = i + 1
    }
    

    printf("%d\n", soma);
    printf("%d\n", i);
    
}
