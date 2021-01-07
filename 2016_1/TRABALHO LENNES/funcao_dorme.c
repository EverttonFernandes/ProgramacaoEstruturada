#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
//Função TIME

char jogador1;
char jogador2;
char linha1[10];
char linha2[10];
char linha3[10];
char tecla;

void dorme(int t){
    int inicio=clock();
    int agora, dif=0;
    while(dif<t){
        agora=clock();
        dif=1000*(agora-inicio)/CLOCKS_PER_SEC;
    }
}
main(){
    char tecla;
    int cont=0;
    while(tecla!=27){
        if(kbhit()){
            tecla=getche();
            if(tecla==13){
                cont++;
            }
        }
        if(tecla=='1' || tecla=='2' || tecla=='3'){
            tecla=getche();
            for(linha2=0 ; linha2<10 ; linha2++){
                jogador1++;
            }
        printf("-------------------------------------------",linha2);
        printf("%c",linha2);*/
        system("cls");
        printf("%i",cont);
        dorme(700);
        cont++;
    }
}
/*
void jogo(){
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
	while(){
        printf("")
	}
} */
