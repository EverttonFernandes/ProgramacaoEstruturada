#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>

/* Escreva um programa que pe�a para o usu�rio uma frase e uma palavra.
 Ent�o substitua todas as ocorr�ncias dessa palavra pela sua vers�o em letras mai�sculas. */

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
