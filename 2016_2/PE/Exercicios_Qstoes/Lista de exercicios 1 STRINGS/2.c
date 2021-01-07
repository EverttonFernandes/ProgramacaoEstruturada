#include<stdio.h>
#include<string.h>


/* Pedir 5 palavras (strings), verificar o tamanho da menor, e mostrar na tela todas as outras palavras "cortadas", de maneira que fiquem com um tamanho máximo igual ao tamanho da menor palavra.
 Dica: insira o '\0' nas strings para cortá-las. */

 main(){

    char palavras[5][50];
    int i;
    int j;
    char menor;
    char menor_p[50];

    for(i=0; i<5; i++){
        printf("Digite uma palavra: \n");
        gets(palavras[i]);
        if(strlen(palavras[i])<menor || i==0){
            menor=strlen(palavras[i]);
            strcpy(menor_p,palavras[i]);
        }
    }
    printf("A menor palavra: %s com %i caracteres ao todo \n\n",menor_p,menor);
    for(j=0 ; j<5; j++){
        palavras[j][menor]='\0';
        printf("\nSTRINGS CORTADAS: \n");
        printf("\n %s \n",palavras[j]);
    }
}
