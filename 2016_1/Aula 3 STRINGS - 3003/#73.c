#include<stdio.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio informar uma senha,
fazendo a valida��o para somente permitir senhas que possuam entre 6 e 15 caracteres, e que contenha pelo menos um n�mero. */

main(){

    char senha[30];
    int tam=0;
    int num=0;

    printf("Digite sua senha: \n");
    gets(senha);
    tam=strlen(senha);

    while(tam<6 || tam >15){
        printf("Digite a senha novamente: \n");
        gets(senha);
        tam=strlen(senha);
    }
    while(num<'0' || num>'9'){
        printf("Digite a senha novamente: \n");
        gets(senha);
        tam=strlen(senha);
    }
}
