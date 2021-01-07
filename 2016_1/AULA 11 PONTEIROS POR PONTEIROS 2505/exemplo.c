#include<stdio.h>
#include<stdlib.h>

/* Função e ponteiros de ponteiros */
void insere (int n,int **v, int *t){
    if(*t==0){
        *v=(int*)malloc(sizeof(int));
        **v=n;
        (*t)++;
        return;
    }
    *v=(int*)realloc(*v,sizeof(int)*(*t+1));
    *(*v+*t)=n;
    (*t)++;
}


main(){

    int *vet, n, t=0;

    do{
        printf("Informe um valor, 0 para encerrar:");
        scanf("%i",&n);
        if(n!=0){
        insere(n,&vet,&t);
        }
    }while(n!=0);

    int i;
    printf("\nvalores: \n");
    for(i=0 ; i<t ; i++){
        printf("%i ",*(vet+i));
    }
}
