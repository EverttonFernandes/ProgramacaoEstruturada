#include<stdio.h>
#include<string.h>

/* Escreva um programa que peça para o usuário uma frase e uma palavra.
 Então substitua todas as ocorrências dessa palavra pela sua versão em letras maiúsculas. */

main(){
    char frase[50];
    char palavra[10];
    char *p;
    int i;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma frase: \n");
    gets(palavra);

    p=strstr(frase,palavra);
    int tam=strlen(palavra);

    if(p==NULL){
        printf("Nao teve ocorrencias: \n");
    }
    else{
        do{
            for(i=0 ; i<tam; i++){
                if(*(p+i)>=97 && *(p+i)<=122){
                    *(p+i)-=32;
                }
            }
            p=strstr(frase,palavra);
        }while(p!=NULL);
    }
    printf("Frase modificada: %s \n",frase);
}
