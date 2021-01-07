#include <stdlib.h>
#include <stdio.h>
/// Como exemplo de uso destas fun��es considere o problema de reservar n posi��es para armazenar vari�veis do tipo int.
/// Para isto usamos o trecho de programa mostrado em 5.
/// Observe que ap�s alocar o espa�o foi usada a nota��o de vetores comuns.
///Exerc�cio 6: Agora vamos usar somente ponteiros. Execute o programa 6.
int main (void) {
    int i, n, *pn, *pi;
    float media, *pmedia, soma=0, *psoma;
    pi=&i;///pi aponta para o endere�o de mem�ria da vari�vel i
    pn=&n;///pn aponta para o endere�o de mem�ria da vari�vel n
    pmedia=&media;///pmedia aponta para o endere�o de mem�ria da vari�vel media
    psoma=&soma;///psoma aponta para o endere�o de mem�ria da vari�vel soma
/* Define um valor para n, scanf ou n = */
    printf("Digite o valor de numeros que voce deseja para fazer a media!!!\n\n");
    scanf("%d", pn);///usu�rio define quantos valores ele deseja somar e fazer a m�dia
/* aloca espaco na memoria */

    float *pvetor = (float *) malloc(*pn * sizeof (int ));
    if(!pvetor) {///SE O pvetor FOR NULL
        puts("Sem mem�ria.");
        return 1;
    }
/* A PARTIR DE AGORA VOLTAMOS PARA VETORES COMUNS */
/* aqui uso pvetor , vamos ler um vetor */
    for (*pi = 0; *pi < *pn; (*pi)++) {
        printf("Digite o %i� valor a ser guardado no vetor dinamico\n\n",(*pi+1));
        scanf("%f", &pvetor[*pi]);///percorre o vetor din�mico e em cada endere�o um valor � armazenado dentro como conte�do
    }
/* faco alguma coisa */
    *pmedia = 0.0;
    for (*pi = 0; *pi < *pn; (*pi)++) {
        (*psoma) += pvetor[*pi];
        *pmedia = *psoma / *pn; ///INSERI O VALOR DE N PARA QUE A M�DIA SEJA FEITA CORRETAMENTE
    }
    printf("A soma total ficou: %.2f\n", *psoma);
    printf("A media ficou: %.2f\n", *pmedia);
/* aqui nao preciso mais de pvetor */
    free(pvetor);///Libero o espa�o alocado anteriormente para qualquer uso futuro
    return 0;
}
