#include<stdio.h>
#include<string.h>
#include<stdlib.h>

// AULA 1 DIA 10/08/2016
/*
main(){
    char frase[50];
    int tam;

    printf("Informe uma frase: \n"); // capturando uma string do teclado com a funcao gets
    gets(frase); // capturando uma string do teclado com a funcao gets

    tam=strlen(frase); // capturando o tamanho da string com a funcao strlen
    printf("O Tamanho da string eh %i\n",tam); // mostra na tela o tamanho
    printf("A frase digitada foi %s\n",frase); // mostra na tela a frase digitada
}
*/
// EXEMPLO DE ATRIBUIÇÃO USANDO O STRCPY
/*main(){
    char s1[15];
    char s2[15];
    printf("Digite uma palavra: \n");
    gets(s1);
    printf("Digite outra palavra: \n");
    gets(s2);
    strcat(s1,s2);
    printf("%s",s1);
}*/
// EXEMPLO DE COMPARACAO USANDO O STRCMP
/*main(){
    char s1[50];
    char s2[50];
    do{
        printf("Digite uma palavra: \n");
        gets(s1);
        printf("Digite uma palavra: \n");
        gets(s2);
        if(strcmp(s1,s2)==0)
            printf("Iguais");
        else{
            printf("Diferentes");
        }
    }while((strcmp(s1,"sair")!=0 && strcmp(s2,"sair")!=0));
}
*/
main(){
    char frase[50];
    char palavra[50];
    gets(frase);
    gets(palavra);
    if(strcmp(frase,palavra)!=NULL)
        printf("Encontrou");
    else{
        printf("Nao encontrou");
    }
}
