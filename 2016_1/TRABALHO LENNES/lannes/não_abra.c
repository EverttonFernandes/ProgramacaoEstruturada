/* Não exclua, obrigado (Everton) */
#include<stdio.h>
#include<time.h>
#include<conio.h>
#include<stdlib.h.>

char jogador1;
char jogador2;
char linha1[10];
char linha2[10];
char linha3[10];
char tecla;

/* Esquema para o soldado 1 encontrar o soldado 2 nas três linhas de batalha */

main(){
    char jogador1;
    char jogador2;
    printf("Jogador 1 informe seu caracter: \n");
    jogador1=getche();
    printf("\nJogador 2 informe seu caracter: \n");
    jogador2=getche();

	for(linha1=0 ; linha1<10 ; linha1++)
		if(tecla=='1' || tecla=='2' || tecla=='3{'){
            tecla=getche();
			jogador1++;
		}
	for(linha1=10 ; linha1>1 ; linha1--){
		if(tecla=='7' || tecla=='8' || tecla=='0'){
            tecla=getche();
			jogador2--;
		}
	}
	for(linha2=0 ; linha2<10 ; linha2++){
		if(tecla=='1' || tecla=='2' || tecla=='3'){
            tecla=getche();
			jogador1++;
		}
	}
	for(linha2=10 ; linha2>1 ; linha2--){
		if(tecla=='7' || tecla=='8' || tecla=='0'){
            tecla=getche();
			jogador2--;
		}
	}
	for(linha3=0 ; linha3<10 ; linha3++){
		if(tecla=='1' || tecla=='2' || tecla=='3'){
            tecla=getche();
			jogador1++;
		}
	}
	for(linha3=10 ; linha3>1 ; linha3--){
		if(tecla=='7' || tecla=='8' || tecla=='0'){
            tecla=getche();
			jogador2--;
		}
    }
}
