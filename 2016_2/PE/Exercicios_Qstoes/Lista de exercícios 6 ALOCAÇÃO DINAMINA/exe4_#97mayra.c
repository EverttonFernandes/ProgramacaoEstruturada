#include<stdio.h>
#include<stdlib.h>

main(){
	//Escreva um programa que pe�a para o usu�rio informar 10 valores.
	//Ent�o gere conjuntos de 10 n�meros aleat�rios entre o maior e o menor n�mero informado.
	//O programa dever� gerar conjuntos at� que um conjunto exatamente igual ao conjunto informado pela usu�rio seja gerado (os n�meros n�o precisam estar na mesma ordem).
	//Todos os conjuntos gerados dever�o ser armazenados.
	//Note que n�o temos como prever o tamanho necess�rio alocado, pois vai depender dos n�meros informados pelo usu�rio, e da chance deles serem sorteados.
	srand(time(NULL));

	int n,i,l=0,menor,maior=0,cont,x,y,j,*pos;

	//Aloca um Vetor de Ponteiros do tipo Matriz
	int **c = (int**)malloc(sizeof(int*));

	//Estutura a quantidade de colunas da matriz
 	c[l] = (int*) malloc(10 * sizeof(int));

 	//Solicita 10 valores e aloca dinamicamente dentro de cada coluna
 	printf("Informe 10 n�meros: \n");
	for(i=0; i<10; i++){
		scanf("%i",&n);
		c[0][i]=n;
	}

	//Identifica o maior e menor n�mero dentre os 10 digitados pelo usu�rio
	for(i=0; i<10; i++){
		if(c[0][i] > maior && c[0][i] > c[0][i+1]){
			maior=c[0][i];
		}
		if(i == 0){
			menor=c[0][i];
		}else if(c[0][i] < menor){
			menor=c[0][i];
		}
	}

//Enquanto n�o achar um conjunto igual ao conjunto indicado pelo usu�rio
    do{
    	free(pos);
    	cont=0;//zera contador, pois se chegou aqui, � porque o conjunto anterior n�o era igual ao conjunto do usu�rio
    	l++; //identificador da linha da matriz

    	//Sorteia n�meros e coloca no conjunto (matriz)
        c[l] = (int*) malloc(10 * sizeof(int)); //Estrutura 10 colunas para a linha "l" da matriz
        for (i=0; i<10; i++){ //Percorre as colunas do vetor
        	n=rand()%(maior-menor+1)+menor; //Sorteia n�mero e atribui � vari�vel "n"
        	c[l][i] = n; //Atribui o valor da vari�vel "n" � matriz na linha "l" e na coluna "j"
        }

        //Mostra na tela o conjunto sorteado
        for(i=0; i<10; i++){
        	printf("%i ",c[l][i]);
		}
		printf("\n");

        //Verifica se � igual ao conjunto do usu�rio
        for(x=0; x<10; x++){ //Varre  conjunto que o usu�rio indicou
        	int pula=0;
        	for(y=0; y<10 && pula == 0; y++){ //Varre conjuntos sorteados
        		if(c[0][x] == c[l][y]){ //Confere se o elemento do conj do usu�rio � igual ao elemento do conj sorteado
        			if(cont == 0){ //Se for o primeiro elemento igual encontrado
        				pos=(int*)malloc(sizeof(int)); //Cria um vetor pra guardar as posi��es de mem�rias j� utilizadas
						*(pos+cont)=y; //Guarda a posi��o da mem�ria do elemento do conjunto sorteado
        				cont++; //Conta que achou um elemento igual
        				pula++; //For�a que o pragrama pule para outro elemento do conjunto original
					}else{
						for(j=0; j<cont; j++){
	        				if(y!=*(pos+j)){ //Se a posi��o do elemento do conj sorteada n�o � uma das posi��es j� encontradas
	        					cont++; //Conta que achou um elemento igual
	        					pos=(int*)realloc(pos,sizeof(int)*cont+1); //Aumenta o tamanho do vetor "pos"
								*(pos+cont)=y; //Guarda a posi��o da mem�ria do elemento do conjunto sorteado
        						pula++;//For�a que o pragrama pule para outro elemento do conjunto original
							}
						}
					}
				}
			}
		}
    }while(cont<10);

}
