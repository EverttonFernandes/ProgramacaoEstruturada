#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>

char jogador1
char jogador2;
char lane1[10];
char lane2[10];
char lane3[10];
char tecla;
void jogo(){
    int j1;
    int j2;
    for(lane1=0 ; lane1<10 ; lane1++){
        if(tecla=='1' || tecla=='2'|| tecla=='3'){
            jogador1++;
        }
    }
    for(lane1=10 ; lane1>0; lane1--){
        if(tecla=='7' || tecla=='8' || tecla=='0'){
            jogador2--;
        }
    }
}
main(){

}
