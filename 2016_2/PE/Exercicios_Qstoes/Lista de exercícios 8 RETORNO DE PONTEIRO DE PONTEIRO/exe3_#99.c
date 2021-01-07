#include<stdio.h>
#include<stdlib.h>

/* Escreva uma função que receba um número a ser inserido, o tamanho de um conjunto de números e um ponteiro para esse conjunto.
 A função deve retornar 0 caso o conjunto não esteja ordenado.
 Caso contrário, insira o número informado por parâmetro no conjunto, de maneira que o mesmo continue ordenado.
  Caso a operação seja feita com sucesso, retorne 1. Como o conjunto de números estará cheio,
 seu tamanho deverá se expandir a cada número inserido (Dica: utilize um ponteiro de ponteiro). */

int insere_ordenando(int n, int *t, int **p){
    int i;
    int j;
    if((*p==NULL) || (*t==0)){///Se nada estiver alocado no meu p, ele vai alocar o espaço de tamanho 1
        *p=(int*)malloc(sizeof(int));
        *t=1;
        **p=n;
    }
    else{///Se não
            /*
        for(j=0 ; j<*t ; j++){
            printf("\n-%i-\n",*(*p+j));
        }
*/
        for(i=0 ; i<*t ; i++){///varro meu vetor e verifico se ele está em ordem, e como não está eu retorno 0.
            if(*(*p+i)>*(*p+i+1) && *t>1){
                return 0;
            }
        }

        *p=(int*)realloc(*p,sizeof(int)*(*t+1));///realoco com um novo espaço
        for(i=0 ; i<*t ; i++){///varro o vetor
            if(n<*(*p+i)){///se o conteudo da posição anterior for menor que o n
                for(j=*t ; j>i ; j--){/// varro o vetor empurrando do ultimo ao penultimo, do penultimo ao anti-penultimo até >i;
                    *(*p+j)=*(*p+j-1);///conteudo da penultimo, vai para a ultima pos(já realocada), da penultimo vai para
                    ///a anti penultima posição e assim por diante trocando todos de lugar até chegar no >i;
                }
                *(*p+i)=n;///Com o novo espaço já alocado e os valores trocados uma posição a frente meu n é inserido
                (*t)++;
                return 1;
            }
        }
        if (i==*t){
            *(*p+i)=n;///Com o novo espaço já alocado e os valores trocados uma posição a frente meu n é inserido
            (*t)++;
            return 1;
        }
//124    3
    }
}

main(){

    int i;
    int j;
    int tam=1;
    int n;
    int *p=NULL;

    printf("Digite 6 numeros: ");
    for(i=0 ; i<6 ; i++){
        scanf("%i",&n);
        insere_ordenando(n,&tam,&p);
    }

    for(j=0 ; j<tam ; j++){
        printf("%i ",*(p+j));
    }
}
