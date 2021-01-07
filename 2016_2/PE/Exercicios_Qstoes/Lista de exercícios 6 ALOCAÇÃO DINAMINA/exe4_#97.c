#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

/* Escreva um programa que peça para o usuário informar 10 valores.
Então gere conjuntos de 10 números aleatórios entre o maior e o menor número informado.
 O programa deverá gerar conjuntos até que um conjunto exatamente igual ao conjunto informado pela usuário seja gerado
  (os números não precisam estar na mesma ordem). Todos os conjuntos gerados deverão ser armazenados.
  Note que não temos como prever o tamanho necessário alocado,
 pois vai depender dos números informados pelo usuário, e da chance deles serem sorteados. */
///ALOCAÇÃO DINÂMICA E NUMEROS ALEATÓRIOS

compara_vetor(int *vet1, int *vet2, int t){ ///retorna 1 se os vetores tiverem os mesmos valores, caso contrário 0
    int i, j, ok=0, cont=0;
    for(i=0; i<t; i++){///Varre o primeiro vetor
        cont=0;
        for(j=0;j<t;j++){///VARRE o segundo vetor
            if(*(vet1+i) == *(vet2+j)){///acessa posição por posição comparando cada um dos conteúdos
                cont++;///se os conteúdos dos vetores forem iguais o cont incrementa
            }
        }
        if(cont==1){ ///se cont for 1, pq só pode ter um igual, então está TUDO ok++
            ok++;
        }
    }
    if(ok==t){///se o numero de elementos que tem um IGUALZINHO no outro vetor for igual ao tamanho do vetor,
        return 1;    ///retorna 1 pq os vetores têm os mesmos valores
    }
    else{
        return 0;///se não, tiverem os mesmo, retorna 0
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
        ///Nos IF'S verifico agora qual é o menor numero e também qual é o maior numero informado pelo usuário(que está no vetor)
        if(menor_num > vet[i]){
 			menor_num = vet[i];///aqui foi encontrado o menor
        }
        if(maior_num<vet[i] || i==0){
 			maior_num = vet[i];///aqui foi encontrado o maior
        }
	 }
	 printf("MAIOR: %i\n\nMENOR %i\n\n",maior_num,menor_num);


    int *p[1000],buscador=0,aleatorio,j=0;
    while(1){///Enquanto ele não encontrar os numeros informados pelo usuario (indepepente da ordem) ele ñ sai desse LOOP
        srand(time(NULL));
        p[j]=(int*)malloc(sizeof(int)*4);///VETOR DINÂMICO também com 4 posições (ou seja tem o mesmo tamanho)
        Sleep(100);///Função que mostra o tempo que demora para encontrar o conjunto (perfumaria do código mais p/ entendimento )
        for(i=0 ; i<4 ; i++){
            aleatorio=rand()%(maior_num-menor_num+1)+menor_num;///sorteia um numero entre o menor e o maior elemento do vetor
            *(p[j]+i)=aleatorio;///salva esse numero dentro do vetor DINÂMICO, e assim repetindo até preencher as 4 posições
            printf("| %i ", aleatorio);
        }
        printf("|\n");
        buscador=compara_vetor(vet, p[j], 4);
        //if(buscador==1){
            if(compara_vetor(vet, p[j] ,4)){
            ///encerra o while quando a função compara_vetor retornar 1
                printf("\n\nEncontrou o conjunto de valores digitados pelo usuario");
                break;///Força a parada do while assim que a função compara_vetor retorna 1 no qual encontrou o conjunto!
            }
    j++;
    }
}
