/* Mostre na tabela abaixo todos os passos (teste de mesa) e identifique qual ser� a sa�da do programa em C,
 para os valores lidos (x = 3 e y = 4).
  */

void func(int *px, int *py) { /// recebe o valor de x no ponteiro *px e de y no ponteiro *py
    px = py;/// px recebe o endere�o de mem�ria da vari�vel y
    *py = (*py) * (*px); /// py recebe = 4x4=16
    *px = *px + 2;/// como px equivale ao conte�do da variavel y, ent�o y recebe 16+2=18
}
void main(void) {
    int x, y;
    printf("Digite o valor de x: \n");
    scanf("%d",&x);/*3*/ /// Guardo um valor na vari�vel x
    printf("Digite o valor de y: \n");
    scanf("%d",&y); /*4*/  ///Guardo um valor na vari�vel x
    func(&x,&y); /// passagem de parametro por valor para a fun��o
    printf("x = %d\ny = %d", x, y);
}
/*
px  |   py  |   x   |   y
                3       4
3       4
3
        16
        18
*/
