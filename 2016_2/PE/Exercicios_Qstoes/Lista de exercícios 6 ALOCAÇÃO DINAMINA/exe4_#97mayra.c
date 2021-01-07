#include<stdio.h>
#include<stdlib.h>

main(){
	//Escreva um programa que peça para o usuário informar 10 valores.
	//Então gere conjuntos de 10 números aleatórios entre o maior e o menor número informado.
	//O programa deverá gerar conjuntos até que um conjunto exatamente igual ao conjunto informado pela usuário seja gerado (os números não precisam estar na mesma ordem).
	//Todos os conjuntos gerados deverão ser armazenados.
	//Note que não temos como prever o tamanho necessário alocado, pois vai depender dos números informados pelo usuário, e da chance deles serem sorteados.
	srand(time(NULL));

	int n,i,l=0,menor,maior=0,cont,x,y,j,*pos;

	//Aloca um Vetor de Ponteiros do tipo Matriz
	int **c = (int**)malloc(sizeof(int*));

	//Estutura a quantidade de colunas da matriz
 	c[l] = (int*) malloc(10 * sizeof(int));

 	//Solicita 10 valores e aloca dinamicamente dentro de cada coluna
 	printf("Informe 10 números: \n");
	for(i=0; i<10; i++){
		scanf("%i",&n);
		c[0][i]=n;
	}

	//Identifica o maior e menor número dentre os 10 digitados pelo usuário
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

//Enquanto não achar um conjunto igual ao conjunto indicado pelo usuário
    do{
    	free(pos);
    	cont=0;//zera contador, pois se chegou aqui, é porque o conjunto anterior não era igual ao conjunto do usuário
    	l++; //identificador da linha da matriz

    	//Sorteia números e coloca no conjunto (matriz)
        c[l] = (int*) malloc(10 * sizeof(int)); //Estrutura 10 colunas para a linha "l" da matriz
        for (i=0; i<10; i++){ //Percorre as colunas do vetor
        	n=rand()%(maior-menor+1)+menor; //Sorteia número e atribui à variável "n"
        	c[l][i] = n; //Atribui o valor da variável "n" à matriz na linha "l" e na coluna "j"
        }

        //Mostra na tela o conjunto sorteado
        for(i=0; i<10; i++){
        	printf("%i ",c[l][i]);
		}
		printf("\n");

        //Verifica se é igual ao conjunto do usuário
        for(x=0; x<10; x++){ //Varre  conjunto que o usuário indicou
        	int pula=0;
        	for(y=0; y<10 && pula == 0; y++){ //Varre conjuntos sorteados
        		if(c[0][x] == c[l][y]){ //Confere se o elemento do conj do usuário é igual ao elemento do conj sorteado
        			if(cont == 0){ //Se for o primeiro elemento igual encontrado
        				pos=(int*)malloc(sizeof(int)); //Cria um vetor pra guardar as posições de memórias já utilizadas
						*(pos+cont)=y; //Guarda a posição da memória do elemento do conjunto sorteado
        				cont++; //Conta que achou um elemento igual
        				pula++; //Força que o pragrama pule para outro elemento do conjunto original
					}else{
						for(j=0; j<cont; j++){
	        				if(y!=*(pos+j)){ //Se a posição do elemento do conj sorteada não é uma das posições já encontradas
	        					cont++; //Conta que achou um elemento igual
	        					pos=(int*)realloc(pos,sizeof(int)*cont+1); //Aumenta o tamanho do vetor "pos"
								*(pos+cont)=y; //Guarda a posição da memória do elemento do conjunto sorteado
        						pula++;//Força que o pragrama pule para outro elemento do conjunto original
							}
						}
					}
				}
			}
		}
    }while(cont<10);

}
