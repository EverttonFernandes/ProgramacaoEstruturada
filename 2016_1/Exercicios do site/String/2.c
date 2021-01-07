#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/* Escreva um programa que peça para o usuário uma frase e uma palavra.
 Então substitua todas as ocorrências dessa palavra pela sua versão em letras maiúsculas. */

main(){

    char frase[50];
    char palavra[50];
    int i;
    char *p;

    printf("Digite uma frase: \n");
    gets(frase);
    printf("Digite uma palavra: \n");
    gets(palavra);

    p=strstr(frase,palavra);

    if(p==NULL)
    printf("Nao existe ocorrencias \n");
    while(p!=NULL){
            for(i=0 ; i<strlen(frase); i++){
                if (*(p+i) >= 'a' && *(p+i) <= 'z')
				*(p+i) -= 32;
            }
         p = strstr(frase,palavra);
    }
    puts(frase);
}
