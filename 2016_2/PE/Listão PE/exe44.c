#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função recursiva que inverta uma string passada por parâmetro. */
#define TAMANHO 20
void invert_sub(char str[], int i, int j){
    if(i>j){
        return;
    }
    int t=str[i];
    str[i]=str[j];
    str[j]=t;
    invert_sub(str,i+1,j-1);
}
void invert(char str[]){
    invert_sub(str,0,strlen(str)-1);
}

main(){
    char str[TAMANHO];
    printf("Informe uma string: ");
    gets(str);
    invert(str);
    printf("%s", str);
    getch();
}
