#include<stdio.h>
#include<string.h>
#include<locale.h>

/* Exemplo de funções */
void valores(){

    int i;
    for(i=0 ; i<10 ; i++){
        printf("%i",i+1);
    }
}
void mensagem(){
    printf("Olha os valores: \n");
    int i;
    for(i=0 ; i<10; i++){
        printf("\nFoi!\n");
        valores();
    }
}
main(){
    setlocale(LC_ALL,"Portuguese");

    printf("Vamos testar funções: \n");
    mensagem();
}
