#include<stdio.h>
#include<stdlib.h>

/** Crie uma struct para guardar o resultado de um bol�o de 10 jogos.
 A struct deve guardar o nome do jogador, telefone, e as apostas dos resultados dos 10 jogos.
  Cada aposta consiste em dizer qual dos dois times ir� ganhar, ou se dar� empate ('1', '2' ou 'e').
   Crie fun��es para guardar e carregar automaticamente o conte�do da struct em um arquivo externo ao fim e
   in�cio do programa (permiss�o bin�ria). Crie um programa que ofere�a as op��es de sair,
   inserir jogador e verificar ganhador. Caso o jogador escolha cadastrar, pe�a os dados e as apostas do jogador,
    e cadastre este jogador em um vetor struct. O vetor struct dever� ser alocado dinamicamente.
    Caso o jogador escolha verificar vencedor, chame uma fun��o que pe�a o resultado de cada um dos 10 jogos.
     Ent�o a fun��o deve contar os acertos que cada jogador conseguiu, e retornar o c�digo do jogador vencedor (ignore empate).
 Mostre no main o nome do jogador vencedor e telefone. **/

 struct jogos{
    char nome[20];
    int telefone;

 };
