#include<stdio.h>
#include<stdlib.h>
#include<math.h> ///Biblioteca para fazer cálculos matemáticos

///Análise o código abaixo:
/*a)O que a função apresentada faz?
Está função calcula o delta da fórmula de bhaskara

b)Reescreva o programa, eliminando as variáveis globais e utilizando passagem de parâmetros e retorno da função.*/
/// Programa abaixo está modificado conforme solicitado na questão b

int f(int a, int b, int c){
    int d = pow(b,2)-4*a*c;
    return d;
}
int main(){
    int a,b,c;
    printf("\t\t\t Vamos calcular o delta da fórmula de BHASKARA, digite o valor de a b e c:\n\n");
    scanf("%i %i %i",&a,&b,&c);
    int resultado=f(a,b,c);
    printf("O delta vale: %i",resultado);
    getch();///Este getch é só pra travar o programa no momento da resposta é como se fosse um system("pause")
    ///<ta aqui mas ñ precisa
    return 0;///Este return também não faz diferença
}
