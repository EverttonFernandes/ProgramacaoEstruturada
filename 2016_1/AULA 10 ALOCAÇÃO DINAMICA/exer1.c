#include<stdio.h>
#include<stdlib.h>
main(){
    char *p,*q;
    int tam;
    p = (char*)malloc(sizeof(char)*1000);
    gets(p);
    //*p = frase;
    //gets(p);
    tam = strlen(p);
    q = (char*)malloc(sizeof(char)*tam);
    strcpy(q,p);
    printf("%i",tam);
    free(p);
    printf("\n%s",q);
}
