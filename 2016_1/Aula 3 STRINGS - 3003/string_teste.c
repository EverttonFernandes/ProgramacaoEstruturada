#include<string.h>
#include<stdlib.h>
#include<conio.h>

main(){
    int cont=0;
    char texto[50], l;
        while(l!=13){
            l=getche();
            texto[cont]=l;
            cont++;
        }
    texto[cont]='\0';
    printf("\n\n texto: %s",texto);
}
