#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva uma fun��o que receba por valor um caractere, e por refer�ncia um vetor tipo char
(string). Esta fun��o deve concatenar esta string com o caractere, sem usar a fun��o strcat.
Dica: use o caractere '\0' para demarcar o fim de string. */

void concatena(char caracter,char string[]){
    int tam;
    tam=strlen(string);
    string[tam]=caracter;// *(string+tam)
    string[tam+1]='\0';
}
main(){
    char caracter;
    char vet[20];
    char resultado[20];
    printf("Informe um caracter: \n");
    caracter=getche();
    printf("Informe uma palavra: \n");
    gets(vet);

    concatena(caracter,vet);
    printf("%s",vet);
}
