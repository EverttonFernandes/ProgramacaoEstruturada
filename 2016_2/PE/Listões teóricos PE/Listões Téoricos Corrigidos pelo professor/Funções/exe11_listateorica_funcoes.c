#include<stdio.h>
#include<stdlib.h>

int f2(int x, int y){
    int z,i;
    z = x; ///
    for (i=1 ; i<y ; i++){
        z+=x;/// 6) Acumula na soma 2 vezes o primeiro numero digitado pelo usuario
    }
    return z;/// 7) Retorna o resultado da soma acumulada para a fun��o f1, faz a opera��o novamente acumulando na soma

}
int f1(int x, int y){
    int z,i;
    if (y == 0)/// 3) Se o segundo numero que o usuario digitou for igual a 0 a variavel z recebe 1
        z = 1;
    else
        z = x;/// 4) Se nao a variavel z recebe o primeiro numero digitado pelo usuario
    for (i=1 ; i<y ; i++){/// 5) O for vai do 1 at� o numero informado
   //     z = f2(z,x);/// 6) Manda por parametro 2 vezes o valor de x ou seja o primeiro numero informado vai 2 vezes
    }/// 8) Enquanto ele n�o ir e voltar para a fun��o Y vezes e ele n�o ca� fora do for... Assim que ca� ele retorna o resultado
    /// a fun��o main
    return z;
}
int main(){
    int a,b,c;
    scanf("%i %i",&a,&b);
    c = f1(a,b);/// 1) Mando por parametro os valores de a e b digitados pelo usuario
    printf("%i",c); /// 2) Retorna o resultado da fun��o f1 e mostra na tela.
    return 0;
}
