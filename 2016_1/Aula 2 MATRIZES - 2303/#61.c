#include<stdio.h>
#include<stdlib.h>

/* Escreva um algoritmo que pe�a para o usu�rio preencher uma matriz de 3x5 com n�meros.
Fazer a valida��o para s� permitir n�meros positivos. Ent�o mostrar na tela o resultado do somat�rio dos n�meros de cada coluna. */

int main() {

    int mat[3][5];
    int i;
    int j;
    int soma=0;

    for(i=0; i<3; i++){
        for(j=0; j<5; j++){
            printf("Informe mat[%i][%i]: \n ",i,j);
            scanf("%d",&mat[i][j]);
            while(mat[i][j]<=0){
                printf("Digite valores positivos: \n");
                scanf("%i",&mat[i][j]);
            }
        }
    }
    for(j=0; j<5 ; j++){
        soma=0;
        for(i=0 ; i<3 ; i++){
            soma+=mat[i][j];
        }
        printf("%i ",soma);
    }
}
