#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//#define tam 20 ///DEFINI UM TAMANHO FIXO AO VETOR DO PROGRAMA
/**  Escreva um programa que gere 20 n�meros aleat�rios de 1 at� 100,
 e armazene-os em um vetor din�mico. Ap�s, escreva uma fun��o que remova
 os numeros repetidos e depois ordene este vetor e o retorne
  o mesmo para a fun��o main
 OBS: Todo o programa deve ser manipulado atrav�s de ponteiros e ponteiro de ponteiro**/
int *vet_dinamico;
int tam=20;
int i,j,k;
void sorteia_numeros();///PROT�TIPO DA FUN��O QUE VAI SORTEAR NUMEROS AO VETOR DINAMICO
void remove_rep(); ///PROT�TIPO DA FUN��O QUE VAI EXCLUIR NUMEROS REPETIDOS DENTRO DO VETOR DIN�MICO
//void ordena_vet(int **vet);///PROT�TIPO DA FUN��O QUE VAI EXCLUIR REP E ORDERNAR ESTE VETOR DIN�MICO
//void imprimi_vet();
main(){
    sorteia_numeros();///ta funcionando
    remove_rep();
    ///ordena_vet();
    ///imprimi_vet();
    ///int *vet_sorteado=sorteia_numeros(&vet_dinamico);///TENTEI CHAMAR O VET DINAMICO E MOSTRAR OS NUMEROS SORTEADOS (TENTEI)

}
void sorteia_numeros(){
    vet_dinamico=(int*)malloc(sizeof(int)*tam);///Vetor din�mico declarado
    //printf("Sorteando os numeros dentro do vetor din�mico!!!\n\n");
    srand(time(NULL));
    for(i=0; i<tam; i++){
        //scanf("&i",vet_dinamico[i]);
        *(vet_dinamico+i)=rand()%99+1;///Preenche o vetor usando numeros aleatorios de 0 a 100
        printf("vet[%i]=%i\n",i,*(vet_dinamico+i));
    }
}

void remove_rep(){
    ///*vet_dinamico=(int*)malloc(sizeof(int)*(*tam));///Vetor din�mico declarado
    for(i=0; i<tam-1; i++){/// Este for remove os numeros repetidos que est�o dentro do vetor
        while(*(vet_dinamico+i)==*(vet_dinamico+i+1)&& i<tam-1){///enquanto o conteudo da posi��o i for igual ao pr�xim
///e menor que o ultimo conteudo ele vai varrendo o vetor din�mico
            for(j=0; j<tam-1; j++){///Varre o vetor din�mico at� o final
                *(vet_dinamico+i)==*(vet_dinamico+j+1);///com o conte�do j� removido ele pega o conteudo
                /// da pr�xima posi��o e vai puxando para a posi��o anterior
            }
            tam--;/// Diminui o tamanho da aloca��o
        }
    }
    vet_dinamico=(int*)realloc(vet_dinamico,sizeof(int)*tam);///Com o novo tamanho e sem repeti��es eu realoco um novo espa�o
    printf("\nRemovendo os repetidos!!!!\n\n");
    for(k=0; k<tam; k++){
        printf("vet[%i]=%i\n",k,*(vet_dinamico+k));
    }
}
/*
void ordena_vet(int **vet){
    int i,j;
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
}
*/
