#include<stdio.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio uma frase e uma palavra.
 Ent�o substitua todas as ocorr�ncias dessa palavra pela sua vers�o em letras mai�sculas. */

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
