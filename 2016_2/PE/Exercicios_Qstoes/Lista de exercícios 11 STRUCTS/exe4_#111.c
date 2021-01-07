#include<stdio.h>
#include<string.h>
#include<stdlib.h>

/** Escreva um programa que mostre na tela um menu com as opções de cadastrar usuário, procurar usuário e sair do programa.
 Caso ele escolha cadastrar peça para ele informar o nome, data de nascimento, endereço e email.
 Faça a validação para somente permitir email que contenha uma '@' no meio, e da data para que contenha um '/' nos lugares corretos.
 Caso ele escolha a opção de procurar usuário, pergunte se ele deseja buscar por nome, idade ou email. Caso escolha por nome,
 peça para ele digitar um nome (parte do nome também deve funcionar), e caso algum usuário contenha em seu nome a string digitada,
 mostre na tela todos os dados destas pessoas, ou uma mensagem se ninguém for encontrado.
 Caso escolha busca por email, o email exato deverá ser informado.
 Caso encontre, mostre os dados, caso contrário, uma mensagem.
 Caso escolha a busca por idade, pergunte para o usuário um valor, e se ele deseja buscar somente os que tiverem idade pelo menos
 o valor informado, até o valor informado ou exatamente o valor informado
, e mostre na tela todos os dados dos usuário que se encontram no critério escolhido. Caso ele escolha sair, encerre o programa. **/


struct dados{
    char nome[50];
    int dia;
    int mes;
    int ano;
    char endereço[50];
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
    printf("Qual das opcoes voce deseja?\n1) Cadastrar usuário \n2)Buscar o nome do usuario no sistema \n0) Sair do programa \n");
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
