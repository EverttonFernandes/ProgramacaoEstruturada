#include<stdio.h>
#include<stdlib.h>

/* Escreva uma fun��o que receba um n�mero a ser inserido, o tamanho de um conjunto de n�meros e um ponteiro para esse conjunto.
 A fun��o deve retornar 0 caso o conjunto n�o esteja ordenado.
 Caso contr�rio, insira o n�mero informado por par�metro no conjunto, de maneira que o mesmo continue ordenado.
  Caso a opera��o seja feita com sucesso, retorne 1. Como o conjunto de n�meros estar� cheio,
 seu tamanho dever� se expandir a cada n�mero inserido (Dica: utilize um ponteiro de ponteiro). */

int insere_ordenando(int n, int *t, int **p){
    int i;
    int j;
    if((*p==NULL) || (*t==0)){///Se nada estiver alocado no meu p, ele vai alocar o espa�o de tamanho 1
        *p=(int*)malloc(sizeof(int));
        *t=1;
        **p=n;
    }
    else{///Se n�o
            /*
        for(j=0 ; j<*t ; j++){
            printf("\n-%i-\n",*(*p+j));
        }
*/
        for(i=0 ; i<*t ; i++){///varro meu vetor e verifico se ele est� em ordem, e como n�o est� eu retorno 0.
            if(*(*p+i)>*(*p+i+1) && *t>1){
                return 0;
            }
        }

        *p=(int*)realloc(*p,sizeof(int)*(*t+1));///realoco com um novo espa�o
        for(i=0 ; i<*t ; i++){///varro o vetor
            if(n<*(*p+i)){///se o conteudo da posi��o anterior for menor que o n
                for(j=*t ; j>i ; j--){/// varro o vetor empurrando do ultimo ao penultimo, do penultimo ao anti-penultimo at� >i;
                    *(*p+j)=*(*p+j-1);///conteudo da penultimo, vai para a ultima pos(j� realocada), da penultimo vai para
                    ///a anti penultima posi��o e assim por diante trocando todos de lugar at� chegar no >i;
                }
                *(*p+i)=n;///Com o novo espa�o j� alocado e os valores trocados uma posi��o a frente meu n � inserido
                (*t)++;
                return 1;
            }
        }
        if (i==*t){
            *(*p+i)=n;///Com o novo espa�o j� alocado e os valores trocados uma posi��o a frente meu n � inserido
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
