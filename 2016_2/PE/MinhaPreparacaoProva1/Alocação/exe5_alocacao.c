#include <stdlib.h>
#include <stdio.h>
/// Como exemplo de uso destas fun��es considere o problema de reservar n posi��es para armazenar vari�veis do tipo int.
/// Para isto usamos o trecho de programa mostrado em 5.
/// Observe que ap�s alocar o espa�o foi usada a nota��o de vetores comuns.

int main (void) {
    int i, n, *pvetor;
    float media;
/* Define um valor para n, scanf ou n = */
    scanf("%d", &n);
/* aloca espaco na memoria */
    pvetor = (int *) malloc(n * sizeof (int ));
    if(!pvetor) {///SE O pvetor FOR NULL
        puts("Sem mem�ria.");
        return 1;
    }
/* A PARTIR DE AGORA VOLTAMOS PARA VETORES COMUNS */
/* aqui uso pvetor , vamos ler um vetor */
    for (i = 0; i < n; i++) {
        scanf("%d", &pvetor[i]);///percorre o vetor din�mico e em cada endere�o um valor � armazenado dentro como conte�do
    }
/* faco alguma coisa */
    media = 0.0;
    float soma=0;
    for (i = 0; i < n; i++) {
        soma+=pvetor[i];
        media = soma/n;///INSERI O VALOR DE N PARA QUE A M�DIA SEJA FEITA CORRETAMENTE
 }
    printf("A soma total ficou: %.2f\n", soma);
    printf("A media ficou: %.2f\n", media);
/* aqui nao preciso mais de pvetor */
    free(pvetor);
    return 0;
}

///Exerc�cio 5: Execute o programa 5.
///Exerc�cio 6: Agora vamos usar somente ponteiros. Execute o programa 6.
