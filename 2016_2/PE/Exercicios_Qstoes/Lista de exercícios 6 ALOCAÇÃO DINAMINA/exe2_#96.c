#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que peça para o usuário digitar números. O programa deverá ter alocado somente o espaço
 necessário para armazenar os números digitados (não é para alocar um espaço grande e depois desalocar,
e sim, ir alocando um por vez).
Quando o usuário informar o número 0, mostre a lista de todos números digitados. Não utilize a função realloc. */

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
