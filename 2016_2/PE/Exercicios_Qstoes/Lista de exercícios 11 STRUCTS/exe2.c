#include <stdio.h>
#include <string.h>

/* Escreva um programa que peça para o usuário cadastrar em uma struct o nome data de mascimento e gênero de 5 pessoas.
Então mostre na tela os dados de todas elas. A data de nascimento deverá ser uma struct com os campos dia, mês e ano. */
struct pessoa{
	char nome[50];
	char genero[50];
};
struct data{
	int dia;
	int mes;
	int ano;
};
main(){
	struct pessoa info[2];
	int i,j,k;
	for (i = 1; i <=2; ++i){
		printf("Pessoa %i, digite seu nome: \n",i,info[i].nome);
		gets(info[i].nome);
		fflush(stdin);
		printf("Pessoa %i, agora digite o seu genero: \n");
		gets(info[i].genero);
		printf("\n");
		fflush(stdin);
	}
	struct data nascimento[2];
	for (j = 1; j <=2; ++j){
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome,nascimento[j].dia);
		scanf("%i",&nascimento[j].dia);
		fflush(stdin);
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome,nascimento[j].mes);
		scanf("%i",&nascimento[j].mes);
		fflush(stdin);
		printf("%s informe, o dia em que voce nasceu: \n",info[j].nome,nascimento[j].ano);
		scanf("%i",&nascimento[j].ano);
		fflush(stdin);
	}
	for (k = 1; k <=2; ++k){
		printf("A pessoa %i, se chama %s, seu genero e %s e sua data de nascimento e %i/%i/%i \n",k,info[k].nome,info[k].genero,
        nascimento[k].dia,nascimento[k].mes,nascimento[k].ano);
	}
	return 0;
}

