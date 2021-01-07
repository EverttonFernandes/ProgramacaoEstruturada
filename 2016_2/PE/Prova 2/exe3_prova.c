#include<stdio.h>
#include<stdlib.h>

/** Crie uma struct para guardar o resultado de um bolão de 10 jogos.
 A struct deve guardar o nome do jogador, telefone, e as apostas dos resultados dos 10 jogos.
  Cada aposta consiste em dizer qual dos dois times irá ganhar, ou se dará empate ('1', '2' ou 'e').
   Crie funções para guardar e carregar automaticamente o conteúdo da struct em um arquivo externo ao fim e
   início do programa (permissão binária). Crie um programa que ofereça as opções de sair,
   inserir jogador e verificar ganhador. Caso o jogador escolha cadastrar, peça os dados e as apostas do jogador,
    e cadastre este jogador em um vetor struct. O vetor struct deverá ser alocado dinamicamente.
    Caso o jogador escolha verificar vencedor, chame uma função que peça o resultado de cada um dos 10 jogos.
     Então a função deve contar os acertos que cada jogador conseguiu, e retornar o código do jogador vencedor (ignore empate).
 Mostre no main o nome do jogador vencedor e telefone. **/

 struct jogos{
    char nome[20];
    int telefone;

 };
