#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quantidadeDeChar(char palavra[]){

    int i = 0, soma = 0;
    while (palavra[i] != '\0'){
        soma++;
        i++;
    }
    printf("A quantidade de caracteres eh %d", soma);

}

void main (){

    char palavra[100];
    printf("Digite a palavra ou frase: ");
    gets(palavra);
    quantidadeDeChar(palavra);

}