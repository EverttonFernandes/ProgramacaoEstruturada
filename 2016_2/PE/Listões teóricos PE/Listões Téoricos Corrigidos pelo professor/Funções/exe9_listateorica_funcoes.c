#include<stdio.h>
#include<stdlib.h>
#include<math.h> ///Biblioteca para fazer c�lculos matem�ticos

///An�lise o c�digo abaixo:
/*a)O que a fun��o apresentada faz?
Est� fun��o calcula o delta da f�rmula de bhaskara

b)Reescreva o programa, eliminando as vari�veis globais e utilizando passagem de par�metros e retorno da fun��o.*/
/// Programa abaixo est� modificado conforme solicitado na quest�o b

int f(int a, int b, int c){
    int d = pow(b,2)-4*a*c;
    return d;
}
int main(){
    int a,b,c;
    printf("\t\t\t Vamos calcular o delta da f�rmula de BHASKARA, digite o valor de a b e c:\n\n");
    scanf("%i %i %i",&a,&b,&c);
    int resultado=f(a,b,c);
    printf("O delta vale: %i",resultado);
    getch();///Este getch � s� pra travar o programa no momento da resposta � como se fosse um system("pause")
    ///<ta aqui mas � precisa
    return 0;///Este return tamb�m n�o faz diferen�a
}
