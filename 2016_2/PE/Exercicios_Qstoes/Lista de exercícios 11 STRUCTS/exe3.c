#include <stdio.h>
#include <string.h>

/* Crie uma função que receba por parâmetro o nome de uma pessoa cadastrada e a data atual, e retorne a idade dessa pessoa.
 Caso a pessoa não esteja cadastrada, retorne 0. */
 struct cadastrando resultado (struct cadastrando idade); ///PROTÓTIPO
 main(){
 	struct cadastrando{
    char nome[50];
    int dia;
    int mes;
    int ano;
 };
    struct cadastrando data_atual;
    data_atual.dia=12;
    data_atual.mes=03;
    data_atual.ano=2017;
    struct cadastrando cadastro;
    printf("Informe seus dados para se cadastrar: \n");
    printf("Seu nome: \n");
    gets(cadastro.nome);
    fflush(stdin);
    printf("Dia em que nasceu: \n");
    scanf("%i",&cadastro.dia);
    fflush(stdin);
    printf("Mes em que nasceu: \n");
    scanf("%i",&cadastro.mes);
    fflush(stdin);
	printf("Ano em que nasceu: \n");
    scanf("%i",&cadastro.ano);
    fflush(stdin);

    int id=resultado(cadastro,data_atual);
    if(struct cadastrando resultado==0){
    	printf("Este nome nao esta cadastrado! \n");
    }
    else{
    	printf("A idade da pessoa e: %i \n",id);
    }
 }
 struct cadastrando resultado(struct idade,struct data_atual){
	if(cadastro.nome==NULL){
		return 0;
	}
	else{
		idade=data_atual.ano-cadastrando.ano;
        return idade;
	}
}
