#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/* Escreva um programa que peça para o usuário informar um frase em um vetor alocado dinamicamente, de um tamanho grande.
 Ao fim da execução do programa, a única memória alocada para o vetor deve ser do tamanho exato da frase digitada pelo usuário.
 Realize esta função sem usar a função realloc. */

 main(){
    char *frase=(char*)malloc(sizeof(char)*10000); ///ISSO É UM VETOR
    char *p;
    int tam=0;
    int i;

    printf("Informe uma frase: ");
    gets(frase);

    tam=strlen(frase);

    p=(char*)malloc(sizeof(char)*tam);

    strcpy(p,frase);
    free(frase);

    //printf("%s ",q);
    for(i=0 ; i<tam ; i++){
        printf("%c",*(p+i));
    }
}
