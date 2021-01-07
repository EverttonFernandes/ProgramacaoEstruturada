#include <stdio.h>
///O exerc�cio 4 mostra um exemplo de fun��o que retorna um ponteiro.
///A fun��o achaSobrenome retorna o ponteiro pnome. O que voc� acha que o programa imprime?

char * acheSobrenome(char nome[]) {
    char *pnome;
    int i = 0;
    while (nome[i] != ' ') {/// enquanto ele for diferente de espa�o significa que ele ainda n�o percorreu todo o primeiro nome
        i++;
    }
        i++;/// ++ pois na pr�xima posi��o em diante j� � o sobrenome do usu�rio
        pnome = &nome[i];///pnome aponta para o sobrenome do usu�rio
  return pnome;
}
int main (void) {
    char nomeCompleto[80];///Usuario digita o nome completo
    char *p;/// declaramos um ponteiro do tipo char
    puts("Entre com o seu nome e um sobrenome.");
    gets(nomeCompleto);///guardamos a string nome completo no vetor
    p = acheSobrenome(nomeCompleto);/// na chamada da fun��o enviamos por par�metro o nome completo
    puts(p);///ponteiro p atr�ves da fun��o nos retornou o sobrenome do usu�rio
    return 0;
}
