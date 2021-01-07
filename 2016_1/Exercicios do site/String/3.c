#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/* Escreva um programa que peça para o usuário uma frase e uma palavra. Exclua da frase todas as ocorrências da palavra. */

main(){

    char frase[50];
    char palavra[50];
    char *p;
    int i=0;
    int j=0;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra);

    p=strstr(frase,palavra);

    if(p==NULL)
        printf("Nao tem ocorrencias \n");
    while(p!=NULL){
        for(i=0; i<strlen(frase); i++){
            for(j=0 ; j<strlen(palavra) ; j++){
                if(frase[i]==palavra[j]){
                    frase[i]=8;

                }
                p=frase[i];
            }
        }
        p=strstr(frase,palavra);
    }
    puts(frase);
}
