#include<stdio.h>
#include<stdlib.h>

/* Escreva um programa que pe�a para o usu�rio cadastrar em uma struct o nome data de mascimento e g�nero de 5 pessoas.
 Ent�o mostre na tela os dados de todas elas. A data de nascimento dever� ser uma struct com os campos dia, m�s e ano. */

 struct pessoa{
    char nome[20];
    char genero;
 };
 struct data{
    int dia;
    int mes;
    int ano;
 };
 main(){
    struct pessoa cadastro[30];
    struct data nascimento[15];
    int i;
    for(i=0 ; i<2 ; i++){
        printf("\nInforme o nome: \n");
        gets(cadastro[i].nome);
        printf("Informe a data de nascimento (dia,mes,ano): \n");
        scanf("%i",&nascimento[i].dia);
        scanf("%i",&nascimento[i].mes);
        scanf("%i",&nascimento[i].ano);
        fflush(stdin); /* linha buffer do teclado */
        printf("Informe o genero: \n");
        cadastro[i].genero=getche();
    }
 }
