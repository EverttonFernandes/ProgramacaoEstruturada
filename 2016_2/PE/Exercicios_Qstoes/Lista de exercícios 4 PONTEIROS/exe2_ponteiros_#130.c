#include<stdio.h>
#include<stdlib.h>

main(){
	char l,m,*p,*q;
	l='a';// variavel l recebe o caracter a
	p=&l; // ponteiro p recebe o endere�o de mem�ria de l no entanto o conteudo de p � o caracter a 
	q=p; // ponteiro q recebe ponteiro p ou seja o ponteiro q tem o mesmo endere�o de mem�ria da variavel l
	p=&m;// ponteiro m passa a apontar para a variavel m
	*q-=32; // o conteudo de q no qual � a variavel a passa a valer A, pois 97-32 equivale a 65 que na ask � o carac A maiusc
	l+=5;// 65 a 5 fica 70 que passa a valer o caracter F maiusculo
	*q='A'+l-*q;// 65 + 70 - 70 = 65, o conteudo de q passa a valer 65 que � a atribuido para a variavel m
	*p=*q+('a'-'A');// 65 +(97 - 65)= 97, o conteudo de p passar a valer 97 que � atribuido para a variavel l
	printf("%c %c",l,m);// mostra na tela o conteudo de l e de m que fica A e a
}
/* l | m | p | q
   a |  |&l | &l
   A |	|	|&m
   F |	|
   A |a |*/
