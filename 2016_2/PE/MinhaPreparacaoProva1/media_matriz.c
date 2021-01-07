#include<stdio.h>
#include<stdlib.h>
#include<locale.h>///Biblioteca para deixar o programa em português!
/// Programa que calcula a média do ano letivo de cada aluno e mostra se ele ao fim passou ou rodou de ano.
main(){
    setlocale(LC_ALL, "Portuguese");///Função que habilita programar em portugues
    float matriz[3][4]; ///o colchete que tem o n°3 significa o numero de alunos e o outro significa o numero de bimestres
    int aluno,bimestre; ///usados nos ciclos for
    float media_alunos[4];///vetor que irá armazenar a média final de cada aluno em cada fim de bimestre.
    float media=0;/// variavel que armazena a média final de cada bimestre, guarda na pos1, depois da pos2,3 e na pos 4.

    printf("\t\t\t\t\t\tInformando as notas dos alunos: \n");
    for(aluno=0; aluno<3; aluno++){
            printf("Informe as notas do aluno %i\n\n",aluno+1);
        for(bimestre=0; bimestre<4; bimestre++){
            printf("Informe a nota do %i° bimestre deste aluno: \n\n",bimestre+1);
            scanf("%f",&matriz[aluno][bimestre]);///peço a 1° nota do aluno 1 até chegar na 4° nota, depois se repete novamente
            media += matriz[aluno][bimestre];///somo todos as notas e faço a média deste aluno
        }
        media_alunos[aluno]=media/4;///guardo a media final deste aluno nas posições do vetor
        media=0;///zero a média para que ela volte ao ciclo for e armazene uma nova média
    }
    for(aluno=0; aluno<3; aluno++){
        media_alunos[aluno]>=60 ?
        printf("A média do aluno %i ficou: %.2f, portanto ele está APROVADO\n\n",aluno+1,media_alunos[aluno])///Isso seria IF
        :
        printf("A média do aluno %i ficou: %.2f, portanto ele está REPROVADO\n\n",aluno+1,media_alunos[aluno]);/// Aqui é um ELSE
        ///AQUI TERMINA A LÓGICA O OPERADOR TERNÁRIO!!!
        /*if(media_alunos[aluno]>=60){
            printf("\nA média do aluno %i ficou: %.2f, portanto ele está APROVADO\n\n",aluno+1,media_alunos[aluno]);
        }
        else{
            printf("\nA média do aluno %i ficou: %.2f, portanto ele está REPROVADO\n\n",aluno+1,media_alunos[aluno]);
        }*/
    }
}

