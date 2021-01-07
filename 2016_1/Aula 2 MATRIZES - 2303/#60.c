#include<stdio.h>
#include<stdlib.h>

/* Preencher em uma matriz 10x10 o conteúdo das tabuadas do 1 ao 10 e mostrar na tela o conteúdo desta matriz linha a linha. */

main(){

    int mat[10][10];
    int i;
    int j;
    int tabuada=0;

    for(i=0 ; i<10 ; i++){
        for(j=0 ; j<10 ; j++){
            tabuada=(i+1)*(j+1);
            mat[i][j]=tabuada;
            if(tabuada<10){
                printf("0%i ",tabuada);
            }
            else{
                printf("%i ", tabuada);
            }
        }
            printf("\n");
    }
}
