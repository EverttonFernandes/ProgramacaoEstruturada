#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que receba um caractere, e mostre na tela se este caractere é um número,
 uma vogal, uma consoante, ou um outro símbolo. */

 void carac(char caracter){

    if(caracter>=65 && caracter<=90){
        if(caracter==65 || caracter==69 || caracter==73 || caracter==79 || caracter==85){
            printf("\nO caracter informado e uma vogal de letra maiscula \n \n");
        }
        else{
            printf("\nO caracter e consoante de letra maiscula \n \n");
        }
    }
    else{
        if(caracter>=97 && caracter<=122){
            if(caracter==97 || caracter==101 || caracter==105 || caracter==111 || caracter==117){
                printf("\nO caracter informado e uma vogal de letra minuscula \n \n");
            }
            else{
                printf("\nO caracter e consoante de letra minuscula \n \n");
            }
        }
        else{
            if(caracter>=48 && caracter<=57){
                printf("\nO caracter informado e um numero \n \n");
            }
        else{
            printf("\nO caracter informado e um simbolo \n \n");
            }
        }
    }
 }
main(){
    char caracter;
    printf("Informe um caracter: \n");
    caracter=getche();
    carac(caracter);
}
