#include <stdio.h>
#include <string.h>

/* Crie uma função que receba por parâmetro o nome de uma pessoa cadastrada e a data atual, e retorne a idade dessa pessoa.
 Caso a pessoa não esteja cadastrada, retorne 0. */
 main(){
 	struct cadastrando{
    char nome[50];
    int dia;
    int mes;
    int ano;
 };
    struct cadastrando cadastro;
    struct cadastrando resultado (struct cadastrando idade);
    struct cadastrando data_atual;
    data_atual.dia=12;
    data_atual.mes=03;
    data_atual.ano=2017;
    printf("Informe seus dados para se cadastrar: \n");
    printf("Seu nome: \n");
    gets(cadastro.nome);
    fflush(sdtin);
    printf("Dia em que nasceu: \n");
    scanf("%i",&cadastro.dia);
    fflush(sdtin);
    printf("Mes em que nasceu: \n");
    scanf("%i",&cadastro.mes);
    fflush(sdtin);
	printf("Ano em que nasceu: \n");
    scanf("%i",&cadastro.ano);
    fflush(sdtin);

    int id=resultado(cadastro,data_atual);
 }
 struct cadastrando resultado(struct idade){
	if(cadastro.nome==0){
		printf("Este nome nao esta cadastrado! \n");
	}
	else{
		idade=
	}
	return idade;
}
