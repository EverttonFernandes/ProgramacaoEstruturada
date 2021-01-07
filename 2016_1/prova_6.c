#include<stdio.h>
#include<stdlib.h>

/* função remover */
int remover(int**vet,int *t){/* **vet está recebendo o ponteiro *vet que
    é a primeira posição da alocação, e o t é o tam total da alocação que é 6. Recebendo os dois por passagem de referência */

   int r;/* variavel r recebe um valor e retorna. */
   (*t)--; /* o t-- diminui o tamanho da minha alocação. */
   r=*(*vet+*t);/* r recebe o conteudo da ultima posição da alocação */
   *vet=(int*)realloc(*vet,sizeof(int)*(*t));/*vet recebe uma nova alocação, no caso o tamanho era 6 e passou a ser 5. */
   return r; /*O conteudo da ultima posição foi salvo dentro da variavél r, assim a ultima posição foi apagada quando
   diminui o tamanho, ao fim a função retorna como resposta da função o CONTEUDO desta posição que foi apagado
   com o uso do reallloc. */
}


main (){

   int i;
   int result;
   int t=5; /* tamanho da minha alocação é de 5 posições */
   int *vet=(int*)malloc(sizeof(int)*t); /* ponteiro vet recebe (aponta) para a primeira posição da minha alocação de tam 6. */
   for (i=0; i<t; i++){
      *(vet+i)=i; /* posição 0 recebe o conteudo 0, 1 recebe 1, posição 2 recebe conteudo 2 e assim até chegar na posição 5. */
   }
   /* CHAMADA DA FUNÇÃO */
   result=remover(&vet,&t); /* result recebe o retorno da função remover */
   printf("\n%i",result); /* mostra na tela o conteudo da ultima posição desalocada. */
}
