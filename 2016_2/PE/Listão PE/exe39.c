#include<stdio.h>
#include<string.h>

/* Seu Jatobá possui um pequeno comércio tem o costume de anotar no caderninho quando
algum cliente compra fiado. Crie um programa que ajude o Seu Jatobá e gerenciar seu
boteco. Mostre um menu na tela com três opções. Caso a primeira seja escolhida, peça para
o usuário inserir o nome do cliente e valor da compra. Caso escolha a segunda opção, peça
um nome, e mostre o total que este cliente deve para o Seu Jatobá. Caso a terceira opção
seja escolhida, finalize o programa. Utilize uma struct para salvar os dados dos clientes.
Salve e carregue automaticamente o conteúdo da struct em um arquivo externo. */

struct cliente{
	char nome[10];
	float valor_da_compra;
};
int t=0;
struct cliente compras_realizadas[10];
void inicia(){
	// logica para iniciar o programa caso o arquivo externo ainda não tenha sido criado
	FILE *arq;
	arq=fopen("boteco.dat","rb");
	if(arq==NULL){
        arq=fopen("boteco.dat","wb");
        fclose(arq);
        arq=fopen("boteco.dat","rb");
        fclose(arq);
	}
	else{
        while(!feof(arq)){
            fread(compras_realizadas+t,sizeof(struct cliente),1,arq);
        }
        t--;
	}
}
void compras(){
	printf("Digite o nome do cliente: \n");
	gets(compras_realizadas[t].nome);
	fflush(stdin);
	printf("Digite o valor da sua compra: ");
	scanf("%f",&compras_realizadas[t].valor_da_compra);
	fflush(stdin);
	(t)++;
}
void divida(){
	// logica da funcao divida
	char nome_do_cliente[20];
	printf("Informe o seu nome: ");
    gets(nome_do_cliente);
	int i;
	for(i=0 ; i<t ; i++){
        if(strcmp(compras_realizadas[i].nome,nome_do_cliente==0)){
                printf("Total: 2.f",compras_realizadas[i].valor_da_compra);
           }
           system("pause");
	}
}
main(){
	char opcao;
	char nome_do_cliente[20];
    inicia();

	while(opcao!='3'){
    system("cls");
    printf("Qual das opcoes voce deseja?\n1) Realizar compra \n2) Consultar sua divida \n3) Sair do programa");
    opcao=getche();
		switch(opcao){
			case '1':
			    system("cls");
				compras();
				break;
			case '2':
			    system("cls");
				divida();
				break;
			case '3':
			    system("cls");
				printf("Programa finalizado");
				break;
			default:
				printf("Opcao invalida");
				break;
		}
	}
}
