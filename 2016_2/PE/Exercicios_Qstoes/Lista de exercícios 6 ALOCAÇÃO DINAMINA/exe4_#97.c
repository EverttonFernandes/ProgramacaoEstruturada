#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

/* Escreva um programa que pe�a para o usu�rio informar 10 valores.
Ent�o gere conjuntos de 10 n�meros aleat�rios entre o maior e o menor n�mero informado.
 O programa dever� gerar conjuntos at� que um conjunto exatamente igual ao conjunto informado pela usu�rio seja gerado
  (os n�meros n�o precisam estar na mesma ordem). Todos os conjuntos gerados dever�o ser armazenados.
  Note que n�o temos como prever o tamanho necess�rio alocado,
 pois vai depender dos n�meros informados pelo usu�rio, e da chance deles serem sorteados. */
///ALOCA��O DIN�MICA E NUMEROS ALEAT�RIOS

compara_vetor(int *vet1, int *vet2, int t){ ///retorna 1 se os vetores tiverem os mesmos valores, caso contr�rio 0
    int i, j, ok=0, cont=0;
    for(i=0; i<t; i++){///Varre o primeiro vetor
        cont=0;
        for(j=0;j<t;j++){///VARRE o segundo vetor
            if(*(vet1+i) == *(vet2+j)){///acessa posi��o por posi��o comparando cada um dos conte�dos
                cont++;///se os conte�dos dos vetores forem iguais o cont incrementa
            }
        }
        if(cont==1){ ///se cont for 1, pq s� pode ter um igual, ent�o est� TUDO ok++
            ok++;
        }
    }
    if(ok==t){///se o numero de elementos que tem um IGUALZINHO no outro vetor for igual ao tamanho do vetor,
        return 1;    ///retorna 1 pq os vetores t�m os mesmos valores
    }
    else{
        return 0;///se n�o, tiverem os mesmo, retorna 0
    }
}
main(){
    int vet[4];
    int i;
    int maior_num;
	int menor_num=vet[0];
	printf("\t\t\t\t\t\tInforme 4 valores: \n\n\n");
    for(i=0; i<4 ; i++){///Preenchendo o vetor de tamanho 4
        printf("Digite um numero: \n");
        scanf("%i",&vet[i]);///Guardei os elementos dentro do vetor
        ///Nos IF'S verifico agora qual � o menor numero e tamb�m qual � o maior numero informado pelo usu�rio(que est� no vetor)
        if(menor_num > vet[i]){
 			menor_num = vet[i];///aqui foi encontrado o menor
        }
        if(maior_num<vet[i] || i==0){
 			maior_num = vet[i];///aqui foi encontrado o maior
        }
	 }
	 printf("MAIOR: %i\n\nMENOR %i\n\n",maior_num,menor_num);


    int *p[1000],buscador=0,aleatorio,j=0;
    while(1){///Enquanto ele n�o encontrar os numeros informados pelo usuario (indepepente da ordem) ele � sai desse LOOP
        srand(time(NULL));
        p[j]=(int*)malloc(sizeof(int)*4);///VETOR DIN�MICO tamb�m com 4 posi��es (ou seja tem o mesmo tamanho)
        Sleep(100);///Fun��o que mostra o tempo que demora para encontrar o conjunto (perfumaria do c�digo mais p/ entendimento )
        for(i=0 ; i<4 ; i++){
            aleatorio=rand()%(maior_num-menor_num+1)+menor_num;///sorteia um numero entre o menor e o maior elemento do vetor
            *(p[j]+i)=aleatorio;///salva esse numero dentro do vetor DIN�MICO, e assim repetindo at� preencher as 4 posi��es
            printf("| %i ", aleatorio);
        }
        printf("|\n");
        buscador=compara_vetor(vet, p[j], 4);
        //if(buscador==1){
            if(compara_vetor(vet, p[j] ,4)){
            ///encerra o while quando a fun��o compara_vetor retornar 1
                printf("\n\nEncontrou o conjunto de valores digitados pelo usuario");
                break;///For�a a parada do while assim que a fun��o compara_vetor retorna 1 no qual encontrou o conjunto!
            }
    j++;
    }
}
