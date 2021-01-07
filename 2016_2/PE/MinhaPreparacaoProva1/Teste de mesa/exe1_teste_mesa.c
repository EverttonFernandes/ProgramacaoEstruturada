/* Mostre na tabela abaixo todos os passos (teste de mesa) e identifique qual será a saída do programa em C,
 para os valores lidos (x = 3 e y = 4).
  */

void func(int *px, int *py) { /// recebe o valor de x no ponteiro *px e de y no ponteiro *py
    px = py;/// px recebe o endereço de memória da variável y
    *py = (*py) * (*px); /// py recebe = 4x4=16
    *px = *px + 2;/// como px equivale ao conteúdo da variavel y, então y recebe 16+2=18
}
void main(void) {
    int x, y;
    printf("Digite o valor de x: \n");
    scanf("%d",&x);/*3*/ /// Guardo um valor na variável x
    printf("Digite o valor de y: \n");
    scanf("%d",&y); /*4*/  ///Guardo um valor na variável x
    func(&x,&y); /// passagem de parametro por valor para a função
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
