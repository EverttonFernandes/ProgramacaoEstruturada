#include<stdio.h>
#include<stdlib.h>

/* Reescreva o programa, eliminando as vari�veis globais e utilizando passagem de par�metros e retorno da fun��o. */


int f(int a,int b,int c){
    int d;
    d = pow(b,2)-4*a*c;
    return d;
}

int main(){
    int a;
    int b;
    int c;
    int d;
    scanf("%i %i %i",&a,&b,&c);
    d=f(a,b,c);
    printf("%i",d);
    getch();
    return 0;
}
