#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


void produtoEscalar(int** M, int linhas, int colunas, int numero) {
    int i, j;
    int x = 0;

        for(i = 0; i < linhas; i++){
            printf("\n |",linhas);
            for (j = 0; j < colunas; j++){
               x = M[i][j] * numero;
               printf(" %d ",x);
            }
        }
}

int main() {
    int **M;
    int i,j,linhas,colunas,num;
    
do{
	
    printf("Informe a quantidade de linhas da matriz: ");
    scanf("%d",&linhas);
}while(linhas<=0);
    
do{
	
    printf("\nInforme a quantidade de colunas da matriz: ");
    scanf("%d",&colunas);
}while(colunas<=0);
   
	
    printf("\nInforme o mumero multiplicador: ");
    scanf("%d", &num);
    printf("\n");	

    M = (int*) malloc(linhas * sizeof(int));

    for (i=0; i<linhas; i++) {
        M[i] = (int*) malloc(colunas * sizeof(int));
        for (j=0; j<colunas; j++) {
            printf("Digite valor para M [%d][%d]): ", i+1, j+1);
            scanf("%d", &M[i][j]);
        }
        printf("\n");
    }

	
    printf("\nSA matriz multiplicada por %d eh:\n",num);
    produtoEscalar(M, linhas, colunas, num);
    
  // Desalocar as colunas da matriz da memória.
	for(i=0;i<linhas;i++){
		free(M[i]);
	}
	
// Desalocar as linhas da matriz da memória.	
	free(M);

    return 0;
}