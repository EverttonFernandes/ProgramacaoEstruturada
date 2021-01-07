#include<stdio.h>
#include<string.h>

/* Pedir para o usuário inserir 10 palavras (strings), mostrar na tela a maior. */

/*main(){

    char palavras[50];
    char maior_palavra;
    int i;
    int j;
    char maior;*/
    //int memcmp(char *str1, char *str2, int n){

#include <stdlib.h>

main(){
    char palavra[20];
    char maior_palavra[20];
    int i;
    int maior;

    for(i=0 ; i<10 ; i++){
        printf("Informe uma palavra: \n");
        gets(palavra);
        if(strlen(palavra)>maior || i==0){
                maior=strlen(palavra);
                strcpy(maior_palavra,palavra);
            }
    }
    printf("A maior palavra digitada e: %s \n",maior_palavra);
}
