#include<stdio.h>
main(){
char *a,b;
int *x,*y,m,n;
b='a';// variavel b recebe o caracter a
a=&b;// ponteiro a recebe o endereço de memória da variavel b
(*a)++;// o conteudo apontado por a incrementa ou seja a variavel b que tinha o caracter 'a' avança e passa a valer 'b'
x=&m;//o ponteiro x recebe o endereço de memória da variavel m.
n=*a-'a';// n recebe 98-97 ou 'b' - 'a' que resulta no valor 1
y=x;// ponteiro y recebe ponteiro x ou &m
*x=10; // variavel m recebe 10 como conteudo
x=&n;// x recebe o endereço de memoria de n
*x*=*y*3+*x*2;// (n) recebe: (10*3)+ (1*2) que resulta em (32).
*a-=*x; //
b+=(m*7-*a-4)+*x;// b recebe: 1+=(10*7-32-4)+32 que resulta em 98
printf("%c %i %i",b,m,n); // mostra na tela b,10 e 32
}
/* TESTE DE MESA
  char  char   int    int   int   int
  *a  |  b  |  *x  |  *y  |  m  |  n
      | 'a' |
  &b  | 'b' |  &m |      |     |  1
                     &m
                           10
               &n
                                32
        98
*/
