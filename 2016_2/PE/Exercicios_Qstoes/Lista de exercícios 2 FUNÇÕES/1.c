 #include<stdio.h >


 /* Escreva uma fun��o que dado o valor de um n�mero presente em uma vari�vel global, mostre na tela se este n�mero � primo ou n�o.
 O n�mero deve ser informado pelo usu�rio na fun��o main. */

int num;
 void primo(int num){
    int i;
    int cont=0;
    for(i=1 ; i<=num ; i++){ // Lista de numeros primos ate 10: 2,3,5,7
        if(num%i==0){
            cont++;
        }
    }
    if(cont==2){
        printf("E primo! ");
        //getch();
    }
    if(cont!=2){
        printf("Nao e primo! ");
        //getch();
    }
}
main(){

    //int num;
    printf("Informe um numero: \n");
    scanf("%i",&num);
    primo(num);

}
