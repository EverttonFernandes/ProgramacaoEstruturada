#include<stdio.h>
#include<string.h>
/* Escreva um programa que peça para o usuário cadastrar em uma struct o nome data de mascimento e gênero de 5 pessoas.
Então mostre na tela os dados de todas elas. A data de nascimento deverá ser uma struct com os campos dia, mês e ano. */
struct data{
	int dia;
	int mes;
	int ano;
};
struct pessoa{
	char nome[50];
	char genero[50];
	struct data nascimento;
};
main(){
	struct pessoa info[2];
	int i,j,k;
	for (i = 0; i <2; ++i){
		printf("Pessoa %i, digite seu nome: \n",i+1,info[i].nome);
		gets(info[i].nome);
		fflush(stdin);
		printf("Pessoa %i, agora digite o seu genero: \n");
		gets(info[i].genero);
		printf("\n");
		fflush(stdin);
	}
	for (j = 0; j <2; ++j){
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome);
		scanf("%i",&info[j].nascimento.dia);
		fflush(stdin);
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome);
		scanf("%i",&info[j].nascimento.mes);
		fflush(stdin);
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome);
		scanf("%i",&info[j].nascimento.ano);
		fflush(stdin);
	}
	for (k = 0; k <2; ++k){
		printf("A pessoa %i, se chama %s, seu genero e %s e sua data de nascimento e %i/%i/%i \n",k+1,info[k].nome,info[k].genero,
        info[k].nascimento.dia,info[k].nascimento.mes,info[k].nascimento.ano);
	}
	return 0;
}
