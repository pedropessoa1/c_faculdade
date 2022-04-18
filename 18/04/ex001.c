#include <stdio.h>
#include<conio.h>

void main (){
    char c; 

    printf("Digite um caracter: ");
        c = getche();

    printf("\n Codigo ASCII: %d", c );


    printf("\nAntecessor: %c - Codigo ASCCI : %d", c-1,c-1);
    printf("\nASucessor: %c - Codigo ASCCI : %d", c+1);

}