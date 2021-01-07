#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <windows.h>

struct palavra
{
    char pal[10];
};
struct palavra palavras[100];
char spal[10];
int t=0;

void salva_arquivo()
{
    FILE *arq = fopen("palavras","wb");
    fwrite(palavras, sizeof(struct palavra), t, arq);
    fclose(arq);
}

void carrega_arquivo()
{
    FILE *arq = fopen("palavras.txt","rb");
    if (arq != NULL)
	{
        while(feof(arq)==0)
		{
            fread(palavras+t, sizeof(struct palavra), 1, arq);
            printf("\t%s\n",palavras[t].pal);
            t++;
        }
        t--;
    }
}
void sorteia()
{
	int s;
	s=(rand() % (t+1));
	printf("\n%i\n",t);
	printf("%i\n",s);
	strcpy(spal,palavras[s].pal);
}

int main (void)
{
	///carrega_arquivo();
	float sec=100.00;
	int c,cont,cont2,pontos=0,x=5,y=5,control=0;
	char mat[10] [10],l,pal[10];
	srand(time(NULL));
	system("color 0b");
	sorteia();
	printf("%s",spal);
	getch();

	for(cont=0;cont<10;cont++)//inserindo tabuleiro
	{
		for(cont2=0;cont2<10;cont2++)
 		{
			mat[cont] [cont2]=97+(rand() % (122-97+1));
  		}
 	}
	while(sec>0)
	{
		for(cont=0;cont<10;cont++)
		{
 			printf("\t");
			for(cont2=0;cont2<10;cont2++)
 			{
 				if(cont==x && cont2==y)
 				{
 					if(control!=0)
 					{
 						printf(">%c<",mat[cont] [cont2]);
					}
					else
					{
					 	printf("[%c]",mat[cont] [cont2]);
					}
				}
				else
				{
					printf(" %c ",mat[cont] [cont2]);
				}
  			}
  			printf("\n");
 		}
 		fflush(stdin);
 		if(kbhit()!=0)
 		{
 			printf("thales");
 			l=getch();
 			if((l=='w' || l=='W') && x>0)
 			{
 				x--;
			}
			if((l=='s' || l=='S') && x<9)
 			{
 				x++;
			}
			if((l=='a' || l=='A') && y>0)
 			{
 				y--;
			}
			if((l=='d' || l=='D') && y<9)
 			{
 				y++;
			}
			if(l==' ')
 			{
 				if(control==0)
 				{
 					control=1;
 				}
 				else
 				{
 					control=0;
				}
			}

 		}
		printf("\t pontos: %i \t  tempo: %.1f\n",pontos,sec);
		Sleep(100);
		system("cls");
		sec=sec-0.10;
	}

}


