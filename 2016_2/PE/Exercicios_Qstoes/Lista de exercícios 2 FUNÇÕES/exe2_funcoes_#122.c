#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que receba um caractere, e mostre na tela se este caractere � um n�mero,
 uma vogal, uma consoante, ou um outro s�mbolo. */

 void carac(char caracter){

    if(caracter>='A' && caracter<='Z'){ // A at� Z maiusculo
        if(caracter=='A' || caracter=='E' || caracter=='I' || caracter=='O' || caracter=='U'){ // Vogais em maiusculo
            printf("\nO caracter informado e uma vogal de letra maiscula \n \n");
        }
        else{
            printf("\nO caracter e consoante de letra maiscula \n \n");
        }
    }
    else if(caracter>=97 && caracter<=122){ // A at� Z minusculo
            if(caracter==97 || caracter==101 || caracter==105 || caracter==111 || caracter==117){// Vogais em minusculo
                printf("\nO caracter informado e uma vogal de letra minuscula \n \n");
            }
            else{
                printf("\nO caracter e consoante de letra minuscula \n \n");
            }
        }
        else{
            if(caracter>=48 && caracter<=57){ // 0 a 9
                printf("\nO caracter informado e um numero \n \n");
            }
        else{
            printf("\nO caracter informado e um simbolo \n \n");
            }
        }
 }
main(){
    char caracter;
    printf("Informe um caracter: \n");
    //scanf(" %c",&caracter);
    caracter=getche();
    carac(caracter);
}
