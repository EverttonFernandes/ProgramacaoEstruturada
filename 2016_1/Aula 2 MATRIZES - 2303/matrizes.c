#include<stdio.h>
#include<stdlib.h>

/* Matrizes */
/* Mostrar uma matriz 5x10 com numeros de 1 até 50 */

main(){

    int i;
    int j;
    int cont=1;
    int mat[5][10];
    for(i=0 ; i<5 ; i++){
        for(j=0 ; j<10 ; j++){
            mat[i][j]=cont;
            cont++;
            if(mat[i][j]< 10)
                printf("0");
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }
}
