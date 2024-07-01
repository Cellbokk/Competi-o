#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include "funcPTR.h"

int main(void){
	
	int x, y, *p, *q;
	
	p= &x;
	q= &y;
	
   setlocale(LC_ALL, "Portuguese");

	printf("\nDigite o 1º Número: ");
	scanf("%i", &x);
	
	printf("\nDigite o 2º Número: ");
	scanf("%i", &y);
	
	printf("\nA soma de %i+%i=%i", x, y, soma(p,q));
	printf("\nA Subtração de %i-%i=%i", x, y, subt(p,q));
		
	return 0;
}