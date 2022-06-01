/*
include <stdio.h>
include <stdlib.h>
include <math.h>*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaVetor(int *s, int n){
	int i, x, soma=0;
		for(i=0; i<n; i++){
			x = s[i];
			soma+=x;
		
	}
	return soma;
}

int main() {
	int *s;
	int soma, tamanho, i;
	
    do{
		
	printf("Qual o tamanho do vetor? ");
	scanf("%d",&tamanho);
}while(tamanho<=0);
	
	s = (int*)malloc(tamanho * sizeof(int));
	
	
	for(i=0;i<tamanho;i++){
		printf("\nInforme o %d numero: ", i+1);
		scanf("%d", (s+i));
	}
	
	soma = somaVetor(s, tamanho);
	printf("\nA soma dos elementos do vetor dá:  %d", soma);
	free(s);
	
	return 0;
}