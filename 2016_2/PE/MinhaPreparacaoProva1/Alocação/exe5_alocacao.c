#include <stdlib.h>
#include <stdio.h>
/// Como exemplo de uso destas funções considere o problema de reservar n posições para armazenar variáveis do tipo int.
/// Para isto usamos o trecho de programa mostrado em 5.
/// Observe que após alocar o espaço foi usada a notação de vetores comuns.

int main (void) {
    int i, n, *pvetor;
    float media;
/* Define um valor para n, scanf ou n = */
    scanf("%d", &n);
/* aloca espaco na memoria */
    pvetor = (int *) malloc(n * sizeof (int ));
    if(!pvetor) {///SE O pvetor FOR NULL
        puts("Sem memória.");
        return 1;
    }
/* A PARTIR DE AGORA VOLTAMOS PARA VETORES COMUNS */
/* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &pvetor[i]);///percorre o vetor dinâmico e em cada endereço um valor é armazenado dentro como conteúdo
    }
/* faco alguma coisa */
    media = 0.0;
    float soma=0;
    for (i = 0; i < n; i++) {
        soma+=pvetor[i];
        media = soma/n;///INSERI O VALOR DE N PARA QUE A MÉDIA SEJA FEITA CORRETAMENTE
 }
    printf("A soma total ficou: %.2f\n", soma);
    printf("A media ficou: %.2f\n", media);
/* aqui nao preciso mais de pvetor */
    free(pvetor);
    return 0;
}

///Exercício 5: Execute o programa 5.
///Exercício 6: Agora vamos usar somente ponteiros. Execute o programa 6.
