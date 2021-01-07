#include<stdio.h>
#include<string.h>

/* Pedir uma frase (string), depois pedir 3 palavras.
Então mostrar quais das 3 existem na frase, e depois mostrar o somatório do tamanho das existentes na frase. */

main(){

    char frase[200];
    char palavras[30];
    int i=0;
    int j=0;
    int soma=0;

        printf("Digite uma frase: \n");
        gets(frase);

    for(j=0 ; j<3 ; j++){
        printf("Digite três palavras: \n");
        gets(palavras);
        if(strstr(frase,palavras)!=NULL){
            printf("%s",palavras);
            soma+=strlen(palavras);
        }
    }
    printf("%i \n",soma);
}
