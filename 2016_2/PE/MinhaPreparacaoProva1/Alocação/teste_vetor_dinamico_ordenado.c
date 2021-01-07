#include<stdio.h>
#include<stdlib.h>
#include<time.h>

//#define tam 20 ///DEFINI UM TAMANHO FIXO AO VETOR DO PROGRAMA
/**  Escreva um programa que gere 20 números aleatórios de 1 até 100,
 e armazene-os em um vetor dinâmico. Após, escreva uma função que remova
 os numeros repetidos e depois ordene este vetor e o retorne
  o mesmo para a função main
 OBS: Todo o programa deve ser manipulado através de ponteiros e ponteiro de ponteiro**/
int *vet_dinamico;
int tam=20;
int i,j,k;
void sorteia_numeros();///PROTÓTIPO DA FUNÇÃO QUE VAI SORTEAR NUMEROS AO VETOR DINAMICO
void remove_rep(); ///PROTÓTIPO DA FUNÇÃO QUE VAI EXCLUIR NUMEROS REPETIDOS DENTRO DO VETOR DINÂMICO
//void ordena_vet(int **vet);///PROTÓTIPO DA FUNÇÃO QUE VAI EXCLUIR REP E ORDERNAR ESTE VETOR DINÂMICO
//void imprimi_vet();
main(){
    sorteia_numeros();///ta funcionando
    remove_rep();
    ///ordena_vet();
    ///imprimi_vet();
    ///int *vet_sorteado=sorteia_numeros(&vet_dinamico);///TENTEI CHAMAR O VET DINAMICO E MOSTRAR OS NUMEROS SORTEADOS (TENTEI)

}
void sorteia_numeros(){
    vet_dinamico=(int*)malloc(sizeof(int)*tam);///Vetor dinâmico declarado
    //printf("Sorteando os numeros dentro do vetor dinâmico!!!\n\n");
    srand(time(NULL));
    for(i=0; i<tam; i++){
        //scanf("&i",vet_dinamico[i]);
        *(vet_dinamico+i)=rand()%99+1;///Preenche o vetor usando numeros aleatorios de 0 a 100
        printf("vet[%i]=%i\n",i,*(vet_dinamico+i));
    }
}

void remove_rep(){
    ///*vet_dinamico=(int*)malloc(sizeof(int)*(*tam));///Vetor dinâmico declarado
    for(i=0; i<tam-1; i++){/// Este for remove os numeros repetidos que estão dentro do vetor
        while(*(vet_dinamico+i)==*(vet_dinamico+i+1)&& i<tam-1){///enquanto o conteudo da posição i for igual ao próxim
///e menor que o ultimo conteudo ele vai varrendo o vetor dinâmico
            for(j=0; j<tam-1; j++){///Varre o vetor dinâmico até o final
                *(vet_dinamico+i)==*(vet_dinamico+j+1);///com o conteúdo já removido ele pega o conteudo
                /// da próxima posição e vai puxando para a posição anterior
            }
            tam--;/// Diminui o tamanho da alocação
        }
    }
    vet_dinamico=(int*)realloc(vet_dinamico,sizeof(int)*tam);///Com o novo tamanho e sem repetições eu realoco um novo espaço
    printf("\nRemovendo os repetidos!!!!\n\n");
    for(k=0; k<tam; k++){
        printf("vet[%i]=%i\n",k,*(vet_dinamico+k));
    }
}
/*
void ordena_vet(int **vet){
    int i,j;
    ///AGORA COM O TAMANHO MENOR E SEM ELEMENTOS REPETIDOS O VET DINAMICO SERÁ ORDENADO
    ///ASSIM PASSANDO A SER O VETOR ORIGINAL DO MEU PROGRAMA
    for(i=0; i<tam ; i++){///Aqui os valores já estão guardados dentro do vetor então eles estão sendo ordenados em ordem crescente
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
