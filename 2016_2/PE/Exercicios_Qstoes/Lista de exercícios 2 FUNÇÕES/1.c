 #include<stdio.h >


 /* Escreva uma função que dado o valor de um número presente em uma variável global, mostre na tela se este número é primo ou não.
 O número deve ser informado pelo usuário na função main. */

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
