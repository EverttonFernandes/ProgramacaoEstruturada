#include<stdio.h>
#include<conio.h>
#include<windows.h>

char lane1[30]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
char lane2[30]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};
char lane3[30]={'-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-'};

void lanes(){
    char op;
    int cont=0,i=0,j=30;
    char tecla;
    while(op!=27){
            if(kbhit()){
                op = getch();
            }
        while(1){
            system("cls");
            puts(lane1);
            puts(lane2);
            puts(lane3);
            printf("%i",cont);
            Sleep(100);
            for(i=27 ; i>0 ; i--){
                if(lane1[i]=='k' && lane1[i+1]=='-'){
                    lane1[i+1]=='k';
                    lane1[i]='-';
                }
            }
            switch(tecla){
            case'1':
                lane1[0]='k';
                break;
            }



            /*if(op=='1'){
                lane1[i+1]='k';
                lane1[i]='-';
                i++;
                lane1[j-1]='j';
                lane1[j]='-';
                j--;
            }
                if(lane1[i]==lane1[j]){
                    i++;
                    j++
                }
            cont++;*/
        }
    }
}
main(){
    lanes();
}
