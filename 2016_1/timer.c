#include<stdio.h>
#include<conio.h>
#include<time.h>

void dorme(int t){
    float inicio=clock();
    float agora,dif=0;
    while(dif<t){
        agora=clock();
        dif=1000*(agora-inicio)/CLOCKS_PER_SEC;
    }
}

main(){
    ///char tecla;
    float cont = 100;
    while(cont!=-1){
        /*if(kbhit()){
            tecla = getch();
            if(tecla==13){
                cont--;
            }
        }*/
    system("cls");
    printf("%.1f",cont);
    dorme(100);
    cont=cont-0.1;
    }
}
