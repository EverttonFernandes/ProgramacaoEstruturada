#include<stdio.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio uma frase e uma palavra.
 Ent�o mostre na tela quantas ocorr�ncias da palavra existe na frase. */

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
