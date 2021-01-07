#include<stdio.h>
#include<stdlib.h>

main(){
int *a,*b;
int x,y,z;
x=0; // var x recebe o valor 0
a=&x;// ponteiro a recebe o endereço de memória da varivel x
b=a;// ponteiro b recebe também o endereço de memória da variavel x
x++;// x incrementa e vira 1
y=*b+*a;// y recebe 2, pois 1 + 1 que é o conteudo da variavel x apontado por *b e por *a.
b=&z;// ponteiro b passa a apontar para a variavel z
*b=*a-y*2;// z recebe= 1-2 *2 resulta em --3
*a+=*b;//1-=-2 que resulta em -3
a=&y;// a recebe o endereço de memória de y que tem como conteudo o valor de 2
*a+=*b;// 2+=-3 que resulta em -1
x=2*(*a)-(*b+z);//-1=2*(-1)-(-3+-3) ... x recebe 4
*b-=x-3*(*a)+z; // z recebe // 3-=4-3*(-1)+-3 que resulta em -7
printf("%i %i %i",x,y,z); // mostra na tela 4,-1 e 7
}/* TESTE DE MESA

  *a  |  *b  |   x   |   y   |  z
			     0
   &x
   		 &x
   		         1
   		                 2
   		 &z
                               -3
   		        -2
  &y
                        -1
                 4
                               -7











*/
