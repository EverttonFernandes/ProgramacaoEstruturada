#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/** Escreva um programa que mostre na tela um menu com as op��es de cadastrar usu�rio, procurar usu�rio e sair do programa.
 Caso ele escolha cadastrar pe�a para ele informar o nome, data de nascimento, endere�o e email.
 Fa�a a valida��o para somente permitir email que contenha uma '@' no meio, e da data para que contenha um '/' nos lugares corretos.
 Caso ele escolha a op��o de procurar usu�rio, pergunte se ele deseja buscar por nome, idade ou email. Caso escolha por nome,
 pe�a para ele digitar um nome (parte do nome tamb�m deve funcionar), e caso algum usu�rio contenha em seu nome a string digitada,
 mostre na tela todos os dados destas pessoas, ou uma mensagem se ningu�m for encontrado.
 Caso escolha busca por email, o email exato dever� ser informado.
 Caso encontre, mostre os dados, caso contr�rio, uma mensagem.
 Caso escolha a busca por idade, pergunte para o usu�rio um valor, e se ele deseja buscar somente os que tiverem idade pelo menos
 o valor informado, at� o valor informado ou exatamente o valor informado
, e mostre na tela todos os dados dos usu�rio que se encontram no crit�rio escolhido. Caso ele escolha sair, encerre o programa. **/


struct dados{
    char nome[50];
    int dia;
    int mes;
    int ano;
    char endere�o[50];
    char email[50];
};
int t=0;
struct cadastrando cadastro[3];

void cadastrar(){
    printf("Informe seus dados para se cadastrar: \n");
    printf("Seu nome: \n");
    gets(cadastro[t].nome);
    fflush(stdin);
    printf("Dia em que nasceu: \n");
    scanf("%i",&cadastro[t].dia);
    fflush(stdin);
    printf("Mes em que nasceu: \n");
    scanf("%i",&cadastro[t].mes);
    fflush(stdin);
	printf("Ano em que nasceu: \n");
    scanf("%i",&cadastro[t].ano);
    fflush(stdin);
    printf("Seu endereco: \n")
    gets(cadastro[t].endereco);
    fflush(sdtin);
    printf("Digite seu email: \n");
    do{
        gets(cadastro[t].email);
        fflush(sdtin);
    }while(cadastrando[i].email=='@');
    t++;
}
void procurar_usuario(){

}
main(){
    int opcao;
    while(opcao!=0){
    printf("Qual das opcoes voce deseja?\n1) Cadastrar usu�rio \n2)Buscar o nome do usuario no sistema \n0) Sair do programa \n");
    fflush(stdin);
    scanf("%i",&opcao);
        switch(opcao){
        case 1:
            cadastrar();
            break;
        case 2:
            procurar_usuario();
            break;
        }
    }
}
