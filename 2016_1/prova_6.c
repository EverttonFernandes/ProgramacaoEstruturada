#include<stdio.h>
#include<stdlib.h>

/* fun��o remover */
int remover(int**vet,int *t){/* **vet est� recebendo o ponteiro *vet que
    � a primeira posi��o da aloca��o, e o t � o tam total da aloca��o que � 6. Recebendo os dois por passagem de refer�ncia */

   int r;/* variavel r recebe um valor e retorna. */
   (*t)--; /* o t-- diminui o tamanho da minha aloca��o. */
   r=*(*vet+*t);/* r recebe o conteudo da ultima posi��o da aloca��o */
   *vet=(int*)realloc(*vet,sizeof(int)*(*t));/*vet recebe uma nova aloca��o, no caso o tamanho era 6 e passou a ser 5. */
   return r; /*O conteudo da ultima posi��o foi salvo dentro da variav�l r, assim a ultima posi��o foi apagada quando
   diminui o tamanho, ao fim a fun��o retorna como resposta da fun��o o CONTEUDO desta posi��o que foi apagado
   com o uso do reallloc. */
}


main (){

   int i;
   int result;
   int t=5; /* tamanho da minha aloca��o � de 5 posi��es */
   int *vet=(int*)malloc(sizeof(int)*t); /* ponteiro vet recebe (aponta) para a primeira posi��o da minha aloca��o de tam 6. */
   for (i=0; i<t; i++){
      *(vet+i)=i; /* posi��o 0 recebe o conteudo 0, 1 recebe 1, posi��o 2 recebe conteudo 2 e assim at� chegar na posi��o 5. */
   }
   /* CHAMADA DA FUN��O */
   result=remover(&vet,&t); /* result recebe o retorno da fun��o remover */
   printf("\n%i",result); /* mostra na tela o conteudo da ultima posi��o desalocada. */
}
