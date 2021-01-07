#include<stdlib.h>

/* AULA 1 Exemplo de como usar numeros aleatorios */

main(){

    srand(time(NULL));
    int n=rand()%3+4;
    printf("%i",n);
}
