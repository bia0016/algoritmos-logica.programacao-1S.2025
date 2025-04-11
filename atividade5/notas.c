/* Solicite ao usuário o número de alunos da turma.
Leia as notas dos alunos (valores entre 0.0 e 10.0), armazenando-as em um vetor de float.
Calcule:
A média geral da turma.
A maior e a menor nota.
A quantidade de alunos aprovados (nota ≥ 6.0).
A nota do aluno na posição k, escolhida pelo usuário.
Exiba os resultados calculados.
*/
#include <stdio.h>

int main(int argc, char* argv[]){
    int alu;
   
    printf("Digite a quantidade de alunos da turma: \n");
    scanf("%d", &alu);
    printf("Quantidade de alunos: %d.\n", alu);
    /* pedir as notas ao usuário*/
    float notas[alu], media;
    for (int i = 0; i < alu; i++){
        printf("\nDigite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
    }
    for (int i = 0; i < alu; i++){
        printf("\nNota do aluno %d: %.2f", i, notas[i]);
        
    }

    printf("Digite as notas de cada aluno: \n");
    scanf("%f", &notas[alu]);

    media = notas[alu] / alu;
    /*if(nota[alu] >= 0 && <= 5){
        printf("A nota é baixa.\n");
    }
    if (nota[alu] <5 && <8){
        printf("A nota é media.\n");
    }
    if(nota[alu] <8 && <=10){
        printf("Nota é alta.\n");
    }
    // menor nota está entre >= 0 notas <=5
    // medias nota está entre <5 notas > 8
    // maior nota está entre >= 8 notas <= 10
    se nota for == ou <= 0 é a menor nota se for == ou >== 10 é a maior nota, */
    
    return 0;
}