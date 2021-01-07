#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <locale.h>

/* struct */
struct pontos {
    char nome[200];
    int pontuacao;
};

struct palavra{
    char pala[13];
};
/* fim da struct */

/* Declarando globais: */
struct pontos ranking[5];
struct palavra *acha;
char palavraSorteada[10],aux[10];
int linha = 5 , coluna = 5, numSorteado, li, co,posicao=0,linha_sorteada,coluna_sorteada,tamanho_palavra_sorteada=0;
int tLista=0,indice_tentativa=0,x,y,i,k,i1,k1,j,tentativa1[2],tentativa2[2],cont=0,conta_ocorrencia=0,acertou=1 /* 0 vai ser verdadeiro e 1 falso */;
char quadro[10][10],pos=0,nome_atual[200];// a variavel tentativa salva as duas letras que o usuário selecionou
int pontuacao_atual=0,tamanho_ranking=0,conta=0,controle=0;//variavel controle, controla se o usuario quer ver o ranking
/* fim da declaração de globais */

void sorteia_palavra(){
		srand(time(NULL));
		numSorteado=(rand() % (tLista+1));
		strcpy(palavraSorteada,acha[numSorteado].pala);
		tamanho_palavra_sorteada = strlen(palavraSorteada);
}
/*----------------------------------------------------------------------------------------------------*/
void carrega_lista(){
    FILE *arq = fopen("palavras.txt","r");
    if (arq != NULL){
        while(feof(arq)==0){
           fgets(acha[tLista].pala,sizeof(struct palavra),arq);

            tLista++;
            acha = realloc(acha,(tLista+1)*sizeof(struct palavra));
        }
        tLista--;
    }

}
/*----------------------------------------------------------------------------------------------------*/
void sorteia_posicoes_impressao(){
	srand(time(NULL));
	posicao=(rand() %4)+1; 	//posicao 1 = vertical certo	//posicao 2 = horizontal certo 	//posicao 3 = vertical inverso 	//posicao 4 = horizontal inverso
}
/*----------------------------------------------------------------------------------------------------*/
void pontua(){
	pontuacao_atual++;
}
/*----------------------------------------------------------------------------------------------------*/
void ver_ranking(){
	printf("Para ver o ranking digite 1!");
	scanf("%i",&controle);
	if(controle==1){
		int co1;
		if(tamanho_ranking>=1){
			for(co1=0;co1<tamanho_ranking;co1++)
			{
				printf("\t Nome do Jogador: %s \n \t Pontuação: %i  \n---\n",ranking[co1].nome,ranking[co1].pontuacao);
			}
		}
	}
}
/*----------------------------------------------------------------------------------------------------*/
void carrega_ranking(){
    FILE *ponteiro_arq;
    ponteiro_arq=fopen("scores","rb");
    if(ponteiro_arq!=NULL){
        while(!feof(ponteiro_arq)){
            fread(ranking+tamanho_ranking,sizeof(struct pontos),1,ponteiro_arq); //trocar sintaxe do fread
            tamanho_ranking++;
        }
    }
    if(tamanho_ranking>=1)//coloquei o igual
    tamanho_ranking--;
}
/*----------------------------------------------------------------------------------------------------*/
void teste_pontuacao(){
	    for(i=0; i<=tamanho_ranking; i++)
		{
	        		if((pontuacao_atual>ranking[i].pontuacao) || (ranking[i].pontuacao==0)){
						cadastra_ranking();
						conta++;
						break;
					}
					else if(tamanho_ranking<5){
						cadastra_ranking();
						conta++;
						break;
					}
	    }
	}
/*----------------------------------------------------------------------------------------------------*/
void cadastra_ranking(){
	printf("\nDigite seu nome: ");
	gets(nome_atual);
	strcpy(ranking[tamanho_ranking].nome,nome_atual);

	if(strlen(ranking[tamanho_ranking].nome)==0)//se o nome não foi informado
	  strcpy(ranking[tamanho_ranking].nome,"Anônimo");

	ranking[tamanho_ranking].pontuacao = pontuacao_atual;
	tamanho_ranking++;
}
/*----------------------------------------------------------------------------------------------------*/
void salva_ranking(){
    FILE *ponteiro_arq = fopen("scores","w");
    	fwrite(ranking, sizeof(struct pontos),tamanho_ranking, ponteiro_arq);
    fclose(ponteiro_arq);
}
/*----------------------------------------------------------------------------------------------------*/
void ordena_ranking(){
	int j;
	int f;
	for(f=tamanho_ranking;f>=0;f--)
	{
		if(pontuacao_atual>ranking[f].pontuacao)
		{
				ranking[f+1].pontuacao=ranking[f].pontuacao;
				strcpy(ranking[f+1].nome,ranking[f].nome);
				ranking[f].pontuacao=pontuacao_atual;
				strcpy(ranking[f].nome,nome_atual);
				j=f;
		}
	}
	if(conta>0){//para imprimir que posicao ocupou
		    	printf("\n Parabéns você alcançou o %i° colocado!",j);
		        system("pause");
	}

    if(tamanho_ranking>5){//pro ranking não passar de 4, em caso de perda de posicao
    	for(i=5;i<=tamanho_ranking;i++){
    		tamanho_ranking--;
    		strcpy(ranking[i].nome,"\0");
    		ranking[i].pontuacao = "\0";
		}
	}
}
/*----------------------------------------------------------------------------------------------------*/
void gera_quadro(){
	char l;
	int i,j;
	srand(time(NULL));
	for (i=0;i<10;i++)
	{
		for (j=0;j<10;j++)
		{
			l=rand()%(122-97)+97;
			quadro[i][j] =l;
		}
	}
	if(posicao==2){ //horizontal certa
	//do while para inserir palavra sorteada no quadro
	linha_sorteada=(rand() %10)+0;
	do{
		coluna_sorteada=(rand() %10)+0;
	}while((9-(coluna_sorteada-1))<tamanho_palavra_sorteada-1);
	//9 pq éo tamanho máximo
	//coluna sorteada - 1 (para dar a dif exata de quantos espaços tem a frente)
	//se o tamanho que tive ra frente for menor, sorteia outra coluna;
	for(i=0;palavraSorteada[i]!='\n';i++)
		quadro[linha_sorteada][coluna_sorteada+i]=palavraSorteada[i];
	}
		else if(posicao==1){ //vertical certa
			coluna_sorteada=(rand() %10)+0;
			do{
				linha_sorteada=(rand() %10)+0;
			}while((9-(linha_sorteada-1))<tamanho_palavra_sorteada-1);

			for(i=0;palavraSorteada[i]!='\n';i++)
				quadro[linha_sorteada+i][coluna_sorteada]=palavraSorteada[i];//coluna 0 para teste
		}
			else if(posicao==3){ //vertical inverso
					coluna_sorteada=(rand() %10)+0;
				do{
					linha_sorteada=(rand() %10)+0;
				}while((9-(linha_sorteada-1))<tamanho_palavra_sorteada-1);

				for(i=0;palavraSorteada[i]!='\n';i++)
					quadro[linha_sorteada+i][coluna_sorteada]=palavraSorteada[(tamanho_palavra_sorteada-2)-i];
			}

				else if(posicao==4){ //horizontal inverso
					linha_sorteada=(rand() %10)+0;
				do{
					coluna_sorteada=(rand() %10)+0;
				}while((9-(coluna_sorteada-1))<tamanho_palavra_sorteada-1);

				for(i=0;palavraSorteada[i]!='\n';i++)
					quadro[linha_sorteada][coluna_sorteada+i]=palavraSorteada[(tamanho_palavra_sorteada-2)-i];//o 0 da linha é só pra teste
				}
}
/*----------------------------------------------------------------------------------------------------*/
void imprime_quadro(){
	for (li=0;li<10;li++){// imprime o tabuleiro
            for (co=0;co<10;co++)
                {
                	if(li==linha && co==coluna){
                		if(indice_tentativa==1){
                			printf("<%c>",quadro[li][co]-32);
						}else
						printf("[%c]",quadro[li][co]-32);
					}
				else
					printf(" %c ",quadro[li][co]);
                }
                printf("\n");
    }
}
/*----------------------------------------------------------------------------------------------------*/
int selecionou_letra(){
	i=tentativa1[0];//passo os índices recolhidos para variáveis menores
	k=tentativa1[1];
	i1=tentativa2[0];
	k1=tentativa2[1];

	cont = 0;
	if(posicao==4 || posicao==2){//horizontal certa e inversa
	if(k<k1){ //se selecionou primeiro a primeira letra
	for(x=i;x<=i1;x++){
		for(y=k;y<=k1;y++){
			if(posicao==4){
				if(quadro[x][y]==palavraSorteada[(tamanho_palavra_sorteada-2)-cont]){
					conta_ocorrencia++;
				}
				cont++;
			}else{
				if(quadro[x][y]==palavraSorteada[cont])
					conta_ocorrencia++;
			cont++;
			}
			}
		}
		}else{ //se selecionou primeiro a segunda
			for(x=i;x<=i1;x++){
				for(y=k1;y<=k;y++){
					if(posicao==4){
						if(quadro[x][y]==palavraSorteada[(tamanho_palavra_sorteada-2)-cont]){
							conta_ocorrencia++;
						}

					}else{
						if(quadro[x][y]==palavraSorteada[cont])
							conta_ocorrencia++;
						}
						cont++;
				}
			}
			}
		}else if(posicao==1 || posicao==3){ //vertical certa e invertida

			if(i<i1){ //se selecionou primeiro a primeira letra
				for(x=k;x<=k1;x++){
					for(y=i;y<=i1;y++){
						if(posicao==3){
							if(quadro[y][x]==palavraSorteada[(tamanho_palavra_sorteada-2)-cont])
								conta_ocorrencia++;
						}else{
							if(quadro[y][x]==palavraSorteada[cont])
								conta_ocorrencia++;

						}
						cont++;
						}
					}
			}else{ //se selecionou primeiro a segunda
			for(x=k;x<=k1;x++){
					for(y=i1;y<=i;y++){
					if(posicao==3){
						if(quadro[y][x]==palavraSorteada[(tamanho_palavra_sorteada-2)-cont])
							conta_ocorrencia++;

					}else{
						if(quadro[y][x]==palavraSorteada[cont])
							conta_ocorrencia++;
						}
						cont++;
				}
			}
			}
		}
	if(conta_ocorrencia==(tamanho_palavra_sorteada-1)){
		conta_ocorrencia = 0;
		acertou = 0;
	}
	conta_ocorrencia = 0;
}
/* fim da declaração de funções */
main(){
	setlocale(LC_ALL, "Portuguese");
	acha=malloc(sizeof(struct palavra));
	carrega_ranking();
	carrega_lista();
	sorteia_palavra();
	sorteia_posicoes_impressao();
	float sec=100.00;
	gera_quadro();
	while(sec>0){
		imprime_quadro();
                 fflush(stdin);
                 if(kbhit()!=0)
 				{
                 pos=getch();
            switch (pos){
                    case 'w': //para cima
                    if(linha!=0){
                    		linha--;
						}
                    break;

					case 's': //para baixo
					if(linha!=9){
                    		linha++;
						}
                    break;

                    case 'a'://para esquerda
                    if(coluna!=0){
                    		coluna--;
						}
                    break;

                    case 'd': //para direita
                    if(coluna!=9){
                    		coluna++;
						}
                    break;
                    case 'W': //para cima
                    if(linha!=0){
                    		linha--;
						}
                    break;

					case 'S': //para baixo
					if(linha!=9){
                    		linha++;
						}
                    break;

                    case 'A'://para esquerda
                    if(coluna!=0){
                    		coluna--;
						}
                    break;

                    case 'D': //para direita
                    if(coluna!=9){
                    		coluna++;
						}
                    break;
                    case 32:
                    		if(indice_tentativa==0){
                    			tentativa1[0] = linha; //salva a posição da primeira seleciona
							 	tentativa1[1] = coluna;
							 	indice_tentativa++;
							 	break;
							 }
                    		if(indice_tentativa==1){
 								tentativa2[0] = linha; //salva a posição da segunda seleciona
							 	tentativa2[1] = coluna;

								 selecionou_letra();
									 if(acertou==0){
									 pontua();//salva a pontuação
									 	acertou = 1;
									 	setbuf(stdin,NULL);//limpa buffer do teclado, mais recomendado do que fflush
									 	sorteia_palavra();
										gera_quadro();
										for(i=0;i<2;i++){ //zera tentativas
											tentativa1[i]=0;
											tentativa2[i]=0;
										}
									}
									indice_tentativa=0;
									break;
							}
                	}
                }
            setbuf(stdin,NULL);
			printf("\n \n  tempo: %.1f ",sec);
			printf("Pontos: %i",pontuacao_atual);
            	Sleep(100);
				sec=sec-0.10;
				system("cls");
            }
            if(pontuacao_atual>0)
        		teste_pontuacao();
            else
            	printf("\nVocê não fez NENHUM ponto! :( \n");
			ordena_ranking();
            salva_ranking();
            ver_ranking();
		}



