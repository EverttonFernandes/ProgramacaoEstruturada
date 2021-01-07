#include<string.h>
#include<stdio.h>

// Everton Fernandes

/* Escreva um programa que peça para o usuário informar uma senha,
fazendo a validação para somente permitir senhas que possuam entre 6 e 15 caracteres, e que contenha pelo menos um número. */

main(){
    char senha1[30];
    char senha2[30];
    int tam=0;
    int num=0;
    int i;

    do{
        printf("Digite sua senha: \n");
        gets(senha1);
        system("cls");
        tam=strlen(senha1);
            for(i=0 ; i<tam ; i++){
                if(senha1[i]>='0' && senha1[i]<='9'){
                    num++;
                }
            }
    }while(tam<6 || tam>15 || num<1);

    do{

        printf("Digite sua senha novamente: \n");
        gets(senha2);
        system("cls");

    }while((strcmp(senha1,senha2)!=0));

    printf("Parabens, a sua senha esta correta! ");
}
