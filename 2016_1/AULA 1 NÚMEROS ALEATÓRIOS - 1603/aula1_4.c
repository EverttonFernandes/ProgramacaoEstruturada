#include<stdlib.h>
#include<stdio.h>

/* AULA 1 Exemplo de como gerar numeros aleatorios entre 10 e 50 */

main(){

    srand(time(NULL));
    int i;
    int n;
    for(i=0 ; i<50 ; i++){
        n=rand()%41 +10;
        printf("%i ",n);
    }
}
