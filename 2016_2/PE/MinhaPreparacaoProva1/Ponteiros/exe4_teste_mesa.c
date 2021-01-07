#include <stdio.h>
///O exercício 4 mostra um exemplo de função que retorna um ponteiro.
///A função achaSobrenome retorna o ponteiro pnome. O que você acha que o programa imprime?

char * acheSobrenome(char nome[]) {
    char *pnome;
    int i = 0;
    while (nome[i] != ' ') {/// enquanto ele for diferente de espaço significa que ele ainda não percorreu todo o primeiro nome
        i++;
    }
        i++;/// ++ pois na próxima posição em diante já é o sobrenome do usuário
        pnome = &nome[i];///pnome aponta para o sobrenome do usuário
  return pnome;
}
int main (void) {
    char nomeCompleto[80];///Usuario digita o nome completo
    char *p;/// declaramos um ponteiro do tipo char
    puts("Entre com o seu nome e um sobrenome.");
    gets(nomeCompleto);///guardamos a string nome completo no vetor
    p = acheSobrenome(nomeCompleto);/// na chamada da função enviamos por parâmetro o nome completo
    puts(p);///ponteiro p atráves da função nos retornou o sobrenome do usuário
    return 0;
}
