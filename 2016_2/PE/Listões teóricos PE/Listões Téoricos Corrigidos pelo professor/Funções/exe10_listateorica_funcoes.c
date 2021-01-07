#include<stdio.h>
#include<stdlib.h>
#include<math.h>
/*Escreva uma função que calcule o resultado das duas raízes de uma função de segundo grau utilizando a fórmula de bhaskara.
 Esta função deverá receber por parâmetro os valores necessários para a realizar os cálculos,
 e retornar por referência os dois resultados. */
void raizes_bhaskara(int a, int b, int c, int *delta, int *x, int *y);///Protótipo da função
main(){
    int a,b,c,d;
    int x=0;
    int y=0;
    printf("Digite os valores de a b e c: \n");
    scanf("%i %i %i",&a,&b,&c);
    raizes_bhaskara(a,b,c,&d,&x,&y);/// Mando os valores de a b e c por valor e por referência mando d x e y

    if(d<0){/// Se o resultado do delta for menor que 0 não existe raízes
        printf("Nao existe raizes!!!\n");
    }
    else{/// Se for maior que 0 existe os valores de x e y
        printf("Raiz x: %i\n",x);
        printf("Raiz y: %i\n",y);
    }
}
void raizes_bhaskara(int a, int b, int c, int *delta, int *x, int *y){
    int d=pow(b,2)-4*a*c;/// Calculo o delta usando a fórmula de BHASKARA
    *delta=d;///
    if(d>0){ /// Se o conteúdo for maior que 0, teremos o delta com valor positivo (utilizando a fórmula -b+-Vd-4.a.c/2.a)
        *x=((-b+sqrt(d)-4*a*c))/2*a;
        *y=((-b-sqrt(d)-4*a*c))/2*a;
    }
}
