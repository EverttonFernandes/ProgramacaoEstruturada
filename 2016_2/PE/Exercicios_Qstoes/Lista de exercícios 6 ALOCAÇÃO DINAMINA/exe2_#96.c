#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que pe�a para o usu�rio digitar n�meros. O programa dever� ter alocado somente o espa�o
 necess�rio para armazenar os n�meros digitados (n�o � para alocar um espa�o grande e depois desalocar,
e sim, ir alocando um por vez).
Quando o usu�rio informar o n�mero 0, mostre a lista de todos n�meros digitados. N�o utilize a fun��o realloc. */

main(){
    int *p=(int*)malloc(sizeof(int)*2);
    int *q;
    int n;
    int tam=0;
    int i;

    do{
        printf("Digite um numero: \n");
        scanf("%i",p+tam);

        q=(int*)malloc(sizeof(int)*(tam+1));
        for(i=0 ; i<=tam ; i++){
            *(q+i)=*(p+i);
        }
        tam++;
        free(p);

        p=(int*)malloc(sizeof(int)*(tam+1));
        for(i=0 ; i<tam ; i++){
            *(p+i)=*(q+i);
        }
        free(q);

    }while(*(p+tam-1)!=0);

    for(i=0 ; i<tam ; i++){
        printf("%i ",*(p+i));
    }
}
