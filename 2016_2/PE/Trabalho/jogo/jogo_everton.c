#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

/** PRÓXIMAS ETAPAS DO JOGO:
1 - sorteie uma palavra da lista carregada, e insira esta palavra no quadro.
2 -  A palavra inserida poderá aparecer de cima para baixo, baixo para cima,
 esquerda para direita ou direita para esquerda, aleatoriamente.
3 -  Quando ele selecionar a primeira e a última letra da palavra (não importa a ordem),
 e programa deverá contar um ponto para ele e refazer o quadro com letras aleatórias,
  sortear uma nova palavra e colocar no quadro
**/

/// DECLARAÇÃO DOS PROTÓTIPOS DAS FUNÇÕES
void letras_aleatorias();
void temporizador();
void sorteia_palavra();
void palavra_quadro_horizontal(); ///Coloca a palavra sorteada dentro da matriz na horizontal
void palavra_quadro_vertical(); /// Coloca a palavra sorteada dentro da matriz na vertical
void carrega_arquivo(); /// CARREGA A PALAVRA DO ARQUIVO TXT
void cadastra_ranking();
void carrega_ranking();
void salva_ranking();
void ordena_ranking(); /** Ordena ranking usando o padrão da variavel auxiliar **/
void print_ranking(); /** 5 primeiros do ranking na tela do usuario, e o arquivo JÁ salvo "TESTE" **/
///FIM DAS DECLARAÇÕES DOS PROTÓTIPOS

/** -------------------------------------------------------------------------------------------------------- **/
///ESTRUTURAS DO JOGO E VARIAVEIS GLOBAIS USADAS NO PROGRAMA
struct jogador{
    char nome[50];
    int pontuacao;
};
struct palavras{
    char word[13];
};
struct palavras *string; /// STRING DINÂMICA QUE PUXA DO ARQUIVO AS PALAVRAS
struct jogador ranking[5]; /** Salva os dados do jogador no ranking **/
char vet_palavra[11];
int linha,coluna; /** Linha e coluna usadas para percorrer a matriz **/
int tam_ranking=0, tam=0, controle=0, cord_x=5, cord_y=5, pontos=0, tempo=0;
int cord_x_aleatoria=0, cord_y_aleatoria=0; /// cordenadas de onde estão armazenadas a palavra sorteada
int str_tam; /// meu strlen
char matriz[10][10];
char cursor; /// CURSOR do teclado "w","s","a","d"
/// FIM DAS DECLARAÇÕES GLOBAIS

/** -------------------------------------------------------------------------------------------------------- **/
main(){
    string=malloc(sizeof(struct palavras));
    int vertical_ou_horizontal;
    carrega_arquivo();
    srand(time(NULL));
    sorteia_palavra();
    letras_aleatorias();
    vertical_ou_horizontal=rand()%(2); /// defini se vai ser vertical ou horizontal
    if(vertical_ou_horizontal==0)
        palavra_quadro_horizontal(); /// se for 0 imprimi na horizontal
    else
        palavra_quadro_vertical(); /// se for 1 vertical


    float tempo=100;

    while(tempo>0){
        for(linha=0; linha<10; linha++){
            printf("\n");
            for(coluna=0; coluna<10; coluna++){
                if(cord_x==linha && cord_y==coluna){
                    if(controle==0){
                        printf("[%c]",matriz[linha][coluna]);
                	}
                	else{
                        printf("<%c>",matriz[linha][coluna]);
                    }
                }
                else{
                    printf(" %c ",matriz[linha][coluna]); /// IMPRIMI SÓ O CARACTER
                }
            }
        }
        fflush(stdin);
        if(kbhit()!=0){ ///retorna 0 se o usuário não está precionando nenhuma tecla.
            /// COMO vai ser diferente de 0, o KBHIT vai retornar 1
            cursor=getch();
            if((cursor=='w' || cursor=='W') && cord_x>0){
                cord_x--;
            }
            else if((cursor=='s' || cursor=='S') && cord_x<9){
                cord_x++;
            }
            else if((cursor=='a' || cursor=='A') && cord_y>0){
                cord_y--;
            }
            else if((cursor=='d' || cursor=='D') && cord_y<9){
                cord_y++;
            }
            else if(cursor==32){
                if(controle==0){
                	controle=1; /// Botão precionado
				}
				else{
                	controle=0; /// Se for 0 não foi precionado
				}
            }
        }
        ///printf("\nPalavra sorteada: %s ",*string);
        printf("\n\n---------------------------------");
        printf("\t \n\nPONTOS: %i \t TEMPO: %.1f \n",pontos,tempo);
        temporizador(100);
        system("cls");
        tempo=tempo-0.1;
    }
    cadastra_ranking();
    ordena_ranking();
    salva_ranking();
}
/** -------------------------------------------------------------------------------------------------------- **/
void carrega_arquivo(){
    FILE *arq = fopen("palavras.txt","rb");
    if (arq != NULL){
        while(feof(arq)==0){
			fgets(string[tam].word,sizeof(struct palavras),arq);
            tam++;
            string = realloc(string,(tam+1)*sizeof(struct palavras));
        }
        tam--;
    }
}
/** -------------------------------------------------------------------------------------------------------- **/
void sorteia_palavra(){
    int i, normal_ou_invertida, cont,cont_aux=0; ///
    srand(time(NULL));
    i=(rand()%(tam+1)); /// sorteia palavra
    normal_ou_invertida=(rand()%2);/// se for 0 é invertida se for 1 a palavra está normal
    for(str_tam=0; string[i].word[str_tam]!='\n'; str_tam++){ /// na variavel str eu tenho o tamanho
            vet_palavra[str_tam]=string[i].word[str_tam];
    }
    vet_palavra[str_tam]='\0'; /// joga o '\0' no fim dessa para definir o final da string

	str_tam--;

    if(normal_ou_invertida==0){ /// Se for 0 ele inverte a string para que ela fique de maneira correta dentro do vetor
        for(cont=str_tam-1; cont>=0; cont--){/// a troca acontece pegando o ultimo caracter e colocando na primeira posição

            vet_palavra[cont_aux]=string[i].word[cont]; /// cont_aux começa em 0, guarda o ultimo caracter da string na 1° posição
            cont_aux++; /// cont_aux++ vira 1
        }
    }

	char primeiro=vet_palavra[0]; /// primeiro caracter
	char ultimo=vet_palavra[str_tam]; /// ultimo caracter
}
/** -------------------------------------------------------------------------------------------------------- **/
void letras_aleatorias(){ /// Preencho a matriz 10x10 com caracteres aleatórios de a a z
    srand(time(NULL));
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            matriz[linha][coluna]=97+(rand() % (122-97+1));
        }
    }
}
/** -------------------------------------------------------------------------------------------------------- **/
void palavra_quadro_horizontal(){ /// Coloca a palavra sorteada dentro da matriz
    srand(time(NULL));
    int coluna_sorteada;
    int linha_sorteada=(rand()%10); /// sorteia uma das linhas de 0 a 9
    /// HORIZONTAL CERTA

    do{
        coluna_sorteada=(rand()%10); /// enquanto a coluna + o str_tam forem>9
    }while((coluna_sorteada+str_tam)>9);/// vai continuar sorteando a coluna, pois a palavra não pode exceder o quadro

    for(linha=0; linha<str_tam; linha++){
		matriz[linha_sorteada][coluna_sorteada]=vet_palavra[linha];
		coluna_sorteada++;
    }

}
/** -------------------------------------------------------------------------------------------------------- **/
void palavra_quadro_vertical(){ /// Coloca a palavra sorteada dentro da matriz
    srand(time(NULL));
    int coluna_sorteada=(rand()%10); /// sorteia uma coluna entre 0 e 9
    int linha_sorteada;
    /// VERTICAL CERTA
    do{
        linha_sorteada=(rand()%10); /// enquanto a coluna + o str_tam forem>9
    }while((linha_sorteada+str_tam)>9);/// vai continuar sorteando a coluna

    for(linha=0; linha<str_tam; linha++){ /// vai de 0 até o tamanho da palavra
		matriz[linha_sorteada][coluna_sorteada]=vet_palavra[linha]; /// pega do vetor e joga pra dentro da matriz
		linha_sorteada++;
    }

}
/** -------------------------------------------------------------------------------------------------------- **/
void temporizador(int t){
    float inicio=clock(); ///
    float agora,dif=0; ///
    while(dif<t){
        agora=clock();
        dif=1000*(agora-inicio)/CLOCKS_PER_SEC;
    }
}
/** -------------------------------------------------------------------------------------------------------- **/
void carrega_ranking(){
    FILE *ponteiro_arq;
    ponteiro_arq=fopen("scores","rb");
    if(ponteiro_arq!=NULL){
        while(!feof(ponteiro_arq)){
            fread(ranking+tam_ranking,sizeof(struct jogador),1,ponteiro_arq);
        }
        tam_ranking++;
    }
    tam_ranking--;
    fclose(ponteiro_arq);
}
/** -------------------------------------------------------------------------------------------------------- **/
void cadastra_ranking(){
    printf("Digite seu nome para cadastrar no ranking: \n");
    gets(ranking[tam_ranking].nome);
    ranking[tam_ranking].pontuacao = pontos;
    tam+1; /// aumenta o tamanho do ranking
}
/** -------------------------------------------------------------------------------------------------------- */
void ordena_ranking(int tam_ranking){
    struct jogador aux;
    int i=0;
    int j=0;
    for(i=0; i<tam_ranking-1; i++){
        for(j=i+1; j<tam_ranking; j++){
            if(ranking[i].pontuacao > ranking[j].pontuacao){
                aux=ranking[i];
                ranking[i]=ranking[j];
                ranking[j]=aux;
            }
            else{
                aux=ranking[j];
                ranking[j]=ranking[i];
                ranking[i]=aux;
            }
        }
    }
}
/** -------------------------------------------------------------------------------------------------------- */
void salva_ranking(){
    FILE *ponteiro_arq = fopen("scores","wb");
    fwrite(ranking, sizeof(struct jogador), tam_ranking, ponteiro_arq);
    fclose(ponteiro_arq);
}
/** -------------------------------------------------------------------------------------------------------- **/
