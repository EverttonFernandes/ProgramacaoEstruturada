#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

char matriz[10][10];
int linha,coluna;
void letras_aleatorias(){
    srand(time(NULL));
    for(linha=0; linha<10; linha++){
        for(coluna=0; coluna<10; coluna++){
            matriz[linha][coluna]=97+(rand() % (122-97+1));
        }
    }
}
main(){
    letras_aleatorias();
    for(linha=0; linha<10; linha++){
        printf("\n");
        for(coluna=0; coluna<10; coluna++){
            printf(" %c ",matriz[linha][coluna]);
        }
    }
	printf("Aguardando tecla...%c", '\n');
	while (!kbhit()){
	}
	printf("Tecla precionada! Ate logo!%c", '\n');
	system("pause");
	return;

}
