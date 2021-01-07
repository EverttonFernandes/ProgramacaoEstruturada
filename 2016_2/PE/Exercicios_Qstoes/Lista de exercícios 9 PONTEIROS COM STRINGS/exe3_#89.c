#include<stdio.h>
#include<string.h>

/* Escreva um programa que peça para o usuário uma frase e uma palavra. Exclua da frase todas as ocorrências da palavra. */

main(){

    char frase[50];
    char palavra[50];
    char *p,*p1;
    int i;
    int j;

    printf("Digite uma frase: \n");
    gets(frase);

    printf("Digite uma palavra: \n");
    gets(palavra);

    int tam_palavra=strlen(palavra);
    int tam_frase=strlen(frase);

    p=strstr(frase,palavra);

    if(p==NULL){
        printf("Nao tem ocorrencias!!! \n");
    }
    else{
        while(p!=NULL){
                strcpy(p,p+tam_palavra+1);
                p=strstr(frase,palavra);
            }
        }
        printf("Frase modificada: %s ",frase);
}
