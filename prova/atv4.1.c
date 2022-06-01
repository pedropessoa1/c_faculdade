#include<stdio.h>
#include<stdlib.h>

typedef struct cel celula;
struct cel {
int dado;
celula *prox;
};

void insere (int x, celula *p) {
celula *nova;
nova = (celula *) malloc (sizeof(celula));
nova->dado = x;
nova->prox = p->prox;
p->prox = nova;
}

void imprime(celula *ini) {
celula *p;
printf("\nValores na lista:\n");
for (p = ini->prox; p != NULL; p = p->prox) {
    if (p->dado % 2 == 0){ //Só vai imprimir os pares
    printf ("%d\t", p->dado);
    }
}

printf ("\n");
}

int main() {

int op = -1, valor;
celula *lista = NULL;
lista = (celula *) malloc(sizeof(celula));

for (int i = 1; i <=10; i++){  //inserindo os elementos de 1 a 10
    insere(i, lista);
} 

while (op != 0) {
   printf("\nOs valores da lista são de 1 até 10\n");
   printf("\nOpcoes disponiveis:\n");
   printf("\tecle 1 p/ imprimir os pares da lista.\n");
   printf("\tecle 0 p/ encerrar.\n");
   printf("Entre opcao desejada: ");
   scanf("%d", &op);
   
switch(op) {
    case 0: 
	   printf("\n\nTCHAU!\n"); 
       break;
    case 1: 
	   imprime(lista);
       break;
    
    default:
       printf("\n\nOPCAO INVALIDA!\n");
}

}

return 0;
}