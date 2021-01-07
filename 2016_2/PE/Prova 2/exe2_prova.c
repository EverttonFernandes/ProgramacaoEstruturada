#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>

/** Supondo um arquivo de texto chamado nomes.txt e outro snomes.txt.
 Ambos contém strings de no máximo 20 caracteres em cada linha.
 O número máximo de linhas é 1000. Escreva um programa que leia e armazene em uma matriz de nomes o conteúdo do arquivo nomes.txt,
  e uma matriz de sobrenomes o conteúdo do arquivo snomes.txt. Caso algum dos arquivos não exista,
   o programa deve mostrar uma mensagem de erro e encerrar.
   Então peça para o usuário informar em N quantos nomes completos deseja gerar.
   Mostre na tela N nomes completos gerados a partir de uma string aleatória da matriz nome seguido
    de duas strings aleatórias da matriz de sobrenomes.
    Ao fim, pergunte para o usuário se ele deseja salvar os nomes,
    e em caso afirmativo peça para ele informar o nome do arquivo e concatene o nome informado com a extensão ".txt"
 e grave os N nomes gerados no arquivo escolhido pelo usuário, um em cada linha.  **/

 main(){
    FILE *arq;
    FILE *arq2;
    FILE *arq3;
    char arquivo_nome[20],arquivo_snome[20],matriz_nome[20][20],matriz_snome[20][20],arquivo_completo[20];
    int opcao,i,j,linha=0,linha2=0,linha_nome,linha_snome,linha_snome2,quantidade_nomes;
    printf("Digite o nome do arquivo com os nomes: \n");
    gets(arquivo_nome);
    printf("Digite o nome do arquivo com os sobrenomes: \n");
    gets(arquivo_snome);

    arq=fopen(arquivo_nome,"r");
    arq2=fopen(arquivo_snome,"r");

    if(arq==NULL){
        printf("Erro! \n");
    }
    else{
        while(!feof(arq)){
            fgets(matriz_nome[linha],20,arq);
            matriz_nome[linha][strlen(matriz_nome[linha])-1] = '\0';
            ///printf("%s\n",matriz_nome[linha]); CORRETO
            linha++;
        }
    }
    if(arq2==NULL){
        printf("Erro \n");
    }
    else{
        while(!feof(arq2)){
            fgets(matriz_snome[linha2],20,arq2);
            matriz_snome[linha2][strlen(matriz_snome[linha2])-1] = '\0';
            ///printf("%s\n",matriz_snome[linha2]); CORRETO
            linha2++;
        }
    }
    fclose(arq);
    fclose(arq2);

        printf("Digite o nome do arquivo para salvar estes nomes: \n");
        gets(arquivo_completo);

            arq3=fopen(arquivo_completo,"w"); /// AO INVÉS DE CONCATENAR, OS NOMES SERÃO ESCRITOS ATRAVÉS DA FUNÇÃO sprintf

            char pfinal[100];

            srand(time(NULL));
            if(arq3!=NULL){
                printf("Digite quantos nomes completos voce deseja gerar: \n");
                scanf("%i",&quantidade_nomes);
                for(i=0; i<quantidade_nomes; i++){
                    linha_nome = rand()%linha;
                    linha_snome = rand()%linha2;
                    linha_snome2 = rand()%linha2;

                    /// função sprintf já mando toda a string formatada pra dentro do vetor, seria uma concatenação de nomes,
                    /// porém de uma forma mais direta, no fim eu só mando um fputs e jogo essa string concatenada no arquivo
                    sprintf(pfinal, "%s %s %s\n",matriz_nome[linha_nome],matriz_snome[linha_snome],matriz_snome[linha_snome2]);
                    fputs(pfinal,arq3);
                    /** AQUI SERIA A PARTE BRAÇAL CUIDANDO OS ESPAÇOS E AO FIM DANDO UM \ n
                    fputs(matriz_nome[linha_nome],arq3);
                    fputs(" ",arq3);
                    fputs(matriz_snome[linha_snome],arq3);
                    fputs(" ",arq3);
                    fputs(matriz_snome[linha_snome2],arq3);
                    fputs("\n",arq3);
                    **/
                }
            }
}

