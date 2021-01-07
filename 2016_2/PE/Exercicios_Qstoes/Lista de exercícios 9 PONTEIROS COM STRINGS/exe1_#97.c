#include<stdio.h>
#include<string.h>

/* Escreva um programa que peça para o usuário uma frase e uma palavra.
 Então mostre na tela quantas ocorrências da palavra existe na frase. */

main(){
    char frase[50];
    char palavra[10];
    char *p;
    int cont=0;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra);

    p=strstr(frase,palavra);

    if(p==NULL){
        printf("Nao existe ocorrencias\n");
    }
    else{
        do{
            p=strstr((p+1),palavra);
            cont++;
        }while(p!=NULL);
        printf("%i ",cont);
    }
}
