#include<stdio.h>
#include<stdlib.h>
#include<locale.h>///Biblioteca para deixar o programa em portugu�s!
/// Programa que calcula a m�dia do ano letivo de cada aluno e mostra se ele ao fim passou ou rodou de ano.
main(){
    setlocale(LC_ALL, "Portuguese");///Fun��o que habilita programar em portugues
    float matriz[3][4]; ///o colchete que tem o n�3 significa o numero de alunos e o outro significa o numero de bimestres
    int aluno,bimestre; ///usados nos ciclos for
    float media_alunos[4];///vetor que ir� armazenar a m�dia final de cada aluno em cada fim de bimestre.
    float media=0;/// variavel que armazena a m�dia final de cada bimestre, guarda na pos1, depois da pos2,3 e na pos 4.

    printf("\t\t\t\t\t\tInformando as notas dos alunos: \n");
    for(aluno=0; aluno<3; aluno++){
            printf("Informe as notas do aluno %i\n\n",aluno+1);
        for(bimestre=0; bimestre<4; bimestre++){
            printf("Informe a nota do %i� bimestre deste aluno: \n\n",bimestre+1);
            scanf("%f",&matriz[aluno][bimestre]);///pe�o a 1� nota do aluno 1 at� chegar na 4� nota, depois se repete novamente
            media += matriz[aluno][bimestre];///somo todos as notas e fa�o a m�dia deste aluno
        }
        media_alunos[aluno]=media/4;///guardo a media final deste aluno nas posi��es do vetor
        media=0;///zero a m�dia para que ela volte ao ciclo for e armazene uma nova m�dia
    }
    for(aluno=0; aluno<3; aluno++){
        media_alunos[aluno]>=60 ?
        printf("A m�dia do aluno %i ficou: %.2f, portanto ele est� APROVADO\n\n",aluno+1,media_alunos[aluno])///Isso seria IF
        :
        printf("A m�dia do aluno %i ficou: %.2f, portanto ele est� REPROVADO\n\n",aluno+1,media_alunos[aluno]);/// Aqui � um ELSE
        ///AQUI TERMINA A L�GICA O OPERADOR TERN�RIO!!!
        /*if(media_alunos[aluno]>=60){
            printf("\nA m�dia do aluno %i ficou: %.2f, portanto ele est� APROVADO\n\n",aluno+1,media_alunos[aluno]);
        }
        else{
            printf("\nA m�dia do aluno %i ficou: %.2f, portanto ele est� REPROVADO\n\n",aluno+1,media_alunos[aluno]);
        }*/
    }
}

