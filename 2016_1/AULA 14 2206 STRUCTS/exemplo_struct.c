#include<stdio.h>
#include<stdlib.h>

struct pessoa{
	char nome[50];
	int idade;
	char genero;
};
main(){
	struct pessoa alunos[15];
	int i;
	for(i=0 ; i<5 ; i++){
        printf("Informe o nome: \n");
		gets(alunos[i].nome);
        printf("Informe a idade: \n");
		scanf("%i",&alunos[i].idade);
		fflush(stdin); /* linha buffer do teclado */
		printf("Informe o genero: \n");
		alunos[i].genero=getche();
    }
}
