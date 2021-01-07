#include<stdio.h>

main(){
char frase[27],*c;
c=frase; /// ponteiro aponta para a primeira posição do vetor
int i=0; /// i vale 0
do{
    if (c+i==frase) /// como na 1°vez o i vale 0 o ponteiro c é a mesma coisa que frase
        *c='a'; /// no entendo a posição 0 desde vetor frase recebe como conteudo o caracter 'a'
    else
        *(c+i)=*(c+i-1)+1; /// *(c+1) o ponteiro c avança para a próxima posição e *(c+i-1) avança a proxima pos volta, acessa
///a posição e recebe b como conteudo
    i++; /// i era 0 e vira um, e assim sucessivamente entrando no else
}while (*(c+i-1)!=  'z'); /// acessou o conteudo e viu que ainda é diferente de z ou seja ele ainda não é z, no entanto ele fica no
// loop
*(c+i)='\0'; /// a posição 25 proxima ao z recebe o '\0' indicando que é o fim da string.
printf("f:%s",c); /// mostra na tela o conteudo do vetor frase, no qual é apontado por c
}

/* TESTE DE MESA

pos     0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25  26  27
frase

*c      a   b   c   d   e   f   g   h   i   j   k   l   m   n   o   p   q   r   s   t   u   v   w   x   y   z   \0
i++     0   1   2   3   4   5   6   7   8   9   10  11  12  13  14  15  16  17  18  19  20  21  22  23  24  25


*/
