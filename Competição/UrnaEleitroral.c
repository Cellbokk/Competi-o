#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
#include "Myfunction.h"

int main(void){
	int voto, op, i, j;
	int matVot[2][6];

   setlocale(LC_ALL, "Portuguese");
	op= 1;
	
	zeraMatriz(matVot);
	
	printf("\nIniciando a Votação na Seção -- ");
	printf("Zerando os Contadores");
	sumarioVotacao(matVot);
	
	printf("\n\t\tIniciando, Aguarde...");
	sleep(5);
	system("clear");
		
	do{
		
		msgSaudacao();
		
		menuVotaPres();
		voto= pegaVotoPres();
	
		switch(voto){
			
			case 17:
				matVot[0][0]++;
			break;
		
			case 12:
				matVot[0][1]++;
			break;
			
			case 11:
				matVot[0][2]++;
			break;
			
			case 10:
				matVot[0][3]++;
			break;
			
			case 00:
				matVot[0][4]++;
			break;
			
			default:
				matVot[0][5]++;
		}
			
		system("clear");
		
		menuVotaSen();
		
		for(i=1; i<3; i++){
			voto= pegaVotoSen(i);
			switch (voto){
			
				case 171:
					matVot[1][0]++;
				break;
			
				case 121:
					matVot[1][1]++;
				break;
				
				case 111:
					matVot[1][2]++;
				break;
				
				case 101:
					matVot[1][3]++;
				break;
				
				case 00:
					matVot[1][4]++;
				break;
				
				default:
					matVot[1][5]++;
			}
		}
	
		system("clear");
		
		op= continuaVoto();
		
		if (op == 2){
			system("clear");
			printf("\n\t\t!!- Votação Encerrada -!!");
			sumarioVotacao(matVot);
		}else{
			
		}
	}while(op == 1);
	
	return 0;
}
