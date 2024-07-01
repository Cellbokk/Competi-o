int msgRetorno(void){
	printf("\nOperação efetuada com Sucesso");
}

int linha(void){
	int i;
	for(i=0;i<10;i++){
		printf("-");
	}
}

int msgSaudacao(void){
	printf("\nBem vindo à Votação!\n");
}

int menuVotaPres(void){
	printf("\nCandidatos à Presidente");
	printf("\nBozo - \t\t17");
	printf("\nNine Fingers - \t12");
	printf("\nET do ACRE - \t11");
	printf("\nSantinho - \t10");
	printf("\nVoto BRANCO - \t00");
	printf("\nVoto Nulo - Digite Valor Não Listado Acima!");
}

int menuVotaSen(void){
	printf("\nCandidatos ao Senado");
	printf("\nTébeta - \t171");
	printf("\nAndrade - \t121");
	printf("\nEnéias - \t111");
	printf("\nBruna Surfistinha - 101");
	printf("\nVoto BRANCO - \t00");
	printf("\nVoto Nulo - Digite Valor Não Listado Acima!");
}

int pegaVotoPres(void){
	int votoPres;
	printf("\nDigite o Número do Seu Candidato a Presidente ==> ");
	scanf("%i", &votoPres);
	return (votoPres);	
}

int pegaVotoSen(int op){
	int votoSen;
	printf("\nDigite o %io. Voto p/ Senador ==> ", op);
	scanf("%i", &votoSen);
	return (votoSen);	
}

int continuaVoto(void){
	int op;
	printf("\nDeseja Continuar a Votação?");
	printf("\n1 - Sim");
	printf("\n2 - Não");
	printf("\nDigite sua Opção ==>>> ");
	scanf("%i", &op);
	return (op);
}

int sumarioVotacao(int m[2][6]){
	
	printf("\nSumário de Votação!");
	printf("\n\t\tP R E S I D E N T E");
	printf("\nBozo - \t%i", m[0][0]);	
	printf("\nNine Fingers - \t%i", m[0][1]);	
	printf("\nET do Acre - \t%i", m[0][2]);	
	printf("\nSantinho - %i", m[0][3]);	
	printf("\nBrancos - %i", m[0][4]);	
	printf("\nNulos - %i", m[0][5]);	
	
	printf("\n\t\tS E N A D O R (A)!");	
	printf("\nTébeta - %i", m[1][0]);	
	printf("\nAndrade - %i", m[1][1]);	
	printf("\nEnéias - %i", m[1][2]);	
	printf("\nBruna Surfistinha - %i", m[1][3]);	
	printf("\nBrancos - %i", m[1][4]);	
	printf("\nNulos - %i", m[1][5]);		
}

int zeraMatriz(int mat[2][6]){
	int i, j;
	for(i=0;i<3;i++){
		for(j=0;j<6;j++){
			mat[i][j]= 0;
		}
	}
}



