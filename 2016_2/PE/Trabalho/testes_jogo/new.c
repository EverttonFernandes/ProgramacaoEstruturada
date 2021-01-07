#include <stdio.h>
#include <string.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <time.h>
/// DECLARAÇÃO DOS PROTÓTIPOS DAS FUNÇÕES

///FIM DAS DECLARAÇÕES DOS PROTÓTIPOS

/** ---------------------------------------------------- **/
///ESTRUTURAS DO JOGO E VARIAVEIS GLOBAIS USADAS NO PROGRAMA
struct jogador{
    char nome[50];
    int pontuacao;
};
struct palavras{
    char word[10];
};
struct palavras p[1000]; /** Variavel p do tipo struct palavras que vai puxar as palavras do arquivo p/jogo **/
struct jogador ranking[10]; /** Salva os dados do jogador no ranking **/
struct palavras *string;
int linha,coluna; /** Linha e coluna usadas para percorrer a matriz **/
int tam=0, controle=0, cord_x=5, cord_y=5, pontos=0, tempo=0;
char matriz[10][10];
char cursor; /// CURSOR do teclado "w","s","a","d"
/// FIM DAS DECLARAÇÕES GLOBAIS
void carrega_arquivo(){
    FILE *ponteiro_arq;
    ponteiro_arq=fopen("palavras.txt","rb");
    if(ponteiro_arq!=NULL){
        while(!feof(ponteiro_arq)){
            fread(ranking+tam,sizeof(struct palavras),tam,ponteiro_arq);
        }
        tam++;
    }
    tam--;
}
void letras_aleatorias(){
    srand(time(NULL));
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            matriz[linha][coluna]=97+(rand() % (122-97+1));
        }
    }
}
/*void cadastra_ranking(){
    printf("Digite seu nome para cadastrar no ranking: \n");
    gets(jogador[tam].nome);
    jogador[tam].pontuacao=pontuacao;
    return tam+1; /** aumenta o tamanho do ranking
}*/
/*void salva_arquivo(int tam){
    FILE *arq = fopen("palavras","wb");
    fwrite(ranking, sizeof(struct palavras), tam, ponteiro_arq);
    fclose(ponteiro_arq);
}*/
void temporizador(int t){
    float inicio=clock();
    float agora,dif=0;
    while(dif<t){
        agora=clock();
        dif=1000*(agora-inicio)/CLOCKS_PER_SEC;
    }
}
void ordena_ranking(){
    struct jogador aux;
    int i=0;
    int j=0;
    for(i=0; i<tam-1; i++){
        for(j=i+1; j<tam; j++){
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
/** ---------------------------------------------------- **/
main(){
    carrega_arquivo();
    float tempo=100;
    letras_aleatorias();
    while(tempo!=-1){ ///Lógica vai dentro do while
        for(linha=0; linha<10; linha++){
            printf("\n");
            for(coluna=0; coluna<10; coluna++){
                printf(" [ %c ]",matriz[linha][coluna]);
            }
        }
        printf("\t pontos: %i \t tempo: %.1f \n",pontos,tempo);
        temporizador(100);
        system("cls");
        tempo=tempo-0.1;
    }
    cadastra_ranking();
    ordena_ranking();
    salva_arquivo();
}
