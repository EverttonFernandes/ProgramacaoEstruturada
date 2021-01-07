#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define tam 20 ///DEFINI UM TAMANHO FIXO AO VETOR DO PROGRAMA
/*  Escreva um programa que gere 20 n�meros aleat�rios de 1 at� 100,
 e armazene-os em um vetor din�mico. Ap�s, escreva uma fun��o que remova
 os numeros repetidos e depois ordene este vetor e o retorne
  o mesmo para a fun��o main
 OBS: Todo o programa deve ser manipulado atrav�s de ponteiros e ponteiro de ponteiro*/

int remove_rep_ordena_vet(int **vetor); ///PROT�TIPO DA FUN��O QUE VAI EXCLUIR REP E ORDERNAR ESTE VETOR DIN�MICO
int remove_rep_sorteia(int **vetor_dinamico);
main(){
    int i,j;///Usados no ciclo for
    int *vet=(int*)malloc(sizeof(int)*tam);///Vetor din�mico declarado

    printf("Sorteando os numeros dentro do vetor din�mico!!!\n\n");
    srand(time(NULL));
    for(i=0; i<tam; i++){
        *(vet+i)=rand()%99+1;///Preenche o vetor usando numeros aleatorios de 0 a 100
        for(j=1; j<tam ; j++){
            if(*(vet+i)==*(vet+j)){
                *(vet+i)=rand()%99+1;///Se houver ocorrencias eu sorteio novamente
                //tu j� n�o est� excluindo os repetidos?
            }
        }
    }
    printf("vet[%i]=%i\n",i,*(vet+i));///AQUI UM TESTE, somente para mostra o vetor din�nico preenchido na tela
    int vetor_original=remove_rep_ordena_vet(&vet);///Chamada da fun��o
    for(i=0; i<tam; i++){
        printf("vet[%i]=%i\n",i,(vetor_original+i));
    }
}
int remove_rep_ordena_vet(int **vetor){//essa fun��o n�o precisa ter retorno, ela serve para retirar um elemento
//dica: sepera em duas functions, uma que remove e outra que ordena.
    int i,j,k;
    int aux;
    /*for(i=0; i<tam; i++){///VERIFICANDO CADA ELEMENTO DO VETOR DIN�MICO
        for(j=1 ; j<tam; j++){
            if(*(vetor+i)==*(vetor+j)){///Se os elementos forem iguais vou remove-los
            ///logica que est� faltando para excluir os numeros repetidos dentro do programa
            tam--;
            *vetor=(int*)realloc(sizeof(int)*tam);///Realoco um novo tamanho ao vetor
            }
        }
    }*/
    ///AGORA COM O TAMANHO MENOR E SEM ELEMENTOS REPETIDOS O VET DINAMICO SER� ORDENADO
    ///ASSIM PASSANDO A SER O VETOR ORIGINAL DO MEU PROGRAMA
    for(i=0; i<tam ; i++){///Aqui os valores j� est�o guardados dentro do vetor ent�o eles est�o sendo ordenados em ordem crescente
        for(j=i; j<tam ; j++){
            if(*(vetor+i)>*(vetor+j)){
                aux=*(vetor+i);
                *(vetor+i)=*(vetor+j);
                *(vetor+j)=aux;
            }
        }
    }
    return vetor;

}

