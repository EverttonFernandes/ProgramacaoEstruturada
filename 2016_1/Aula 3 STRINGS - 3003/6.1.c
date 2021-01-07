#include<string.h>
#include<stdio.h>

/* Pedir para o usuário inserir 10 palavras (strings), mostrar na tela a maior. */

main(){
char palavras[20],maior[20]={0};
int i;

for(i=0;i<10;i++){
    printf("Digite uma Palavra: ");
    gets(palavras);
    if(strlen(palavras)>strlen(maior) || i==0){
        strcpy(maior,palavras);
    }
}
printf("A maior palavra e: %s\n",maior);
}
