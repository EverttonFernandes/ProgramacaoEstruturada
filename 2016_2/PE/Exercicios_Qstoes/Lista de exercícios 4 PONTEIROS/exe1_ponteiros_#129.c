#include<stdio.h>

main(){
int a=10,b,*p;
p=&a; /* p recebe o endere�o de mem�ria da variavel a */
(*p)++; /* o ponteiro acessa o conteudo da variavel a e incrementa assim o valor de 10 passa a ser 11 */
b=*p*a; /* b recebe 11 *11 que resulta no valor de 121 */
*p-=a+2*(*p);/* a opera��o matem�tica fica: 11+2*11 que da 32 - 11 que � o valor da variavel b que resulta enfim em 22*/
printf("%i %i",a,b); /* mostra na tela o valor da variavel a que � 22 e o valor da variavel b que � 121 */
}
/* Teste de mesa
a | b | *p
10|   | &a
11|121|
22|   |   */

///*(p)++;
///(*p)++;
///p++; O ponteiro avan�a para a pr�xima posi��o do vetor
