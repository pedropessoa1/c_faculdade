
int main(){
    float valor1 , valor2, resul;
    char opera ;

    printf("Ola, qual operação deseja usar");
    scanf("%c", &opera);

    printf("Digite o primeiro valor  ");
        scanf("%f", &valor1);
    printf("Digite o segundo valor ");
        scanf("%f", &valor2);

    switch (opera){

        case '-' :

            resul = (valor1 - valor2);

            printf("%f", resul);
            
            break;
        
        default:
        printf("EROO");
            break;

           
        }
    

         
    
    return 0;

}