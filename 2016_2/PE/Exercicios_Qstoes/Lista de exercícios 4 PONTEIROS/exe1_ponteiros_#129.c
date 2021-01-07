#include<stdio.h>

main(){
int a=10,b,*p;
p=&a; /* p recebe o endereço de memória da variavel a */
(*p)++; /* o ponteiro acessa o conteudo da variavel a e incrementa assim o valor de 10 passa a ser 11 */
b=*p*a; /* b recebe 11 *11 que resulta no valor de 121 */
*p-=a+2*(*p);/* a operação matemática fica: 11+2*11 que da 32 - 11 que é o valor da variavel b que resulta enfim em 22*/
printf("%i %i",a,b); /* mostra na tela o valor da variavel a que é 22 e o valor da variavel b que é 121 */
}
/* Teste de mesa
a | b | *p
10|   | &a
11|121|
22|   |   */

///*(p)++;
///(*p)++;
///p++; O ponteiro avança para a próxima posição do vetor
