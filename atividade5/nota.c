#include <stdio.h>
int main(int argc, char* argv[]){

    int alunos;
    printf("Digite a quantidade de alunos: ");
    scanf("%d", &alunos);
    printf("A quantidade de alunos eh: %d\n", alunos);
    
    float notas[alunos];
    for(int i = 0; i < alunos; i++){
        printf("\nDigite a nota do aluno %d\n", i);
        scanf("%f", &notas[i]);
    }
    for(int i = 0; i < alunos; i++){
        printf("A nota do aluno %d eh: %.1f\n", i, notas[i]);
    }
    
    int alunos_consulta;
    printf("\nDigite o numero do aluno que deseja ver a nota: ");
    scanf("%d", &alunos_consulta);
    if(alunos_consulta >= 1 && alunos_consulta <= alunos){
    printf("\nA nota do aluno %d eh: %.1f", alunos_consulta, notas[alunos_consulta - 1]);
    }else {
        printf("Numero do aluno invalido\n");
    }
    
    int aprovados = 0;
    for (int i = 0; i < alunos; i++){
        if(notas[i] >= 6 && notas[i] <= 10){
            aprovados++;
        }
    }
    printf("\nQuantidade de alunos aprovados: %d\n", aprovados);
   
    float maior_nota = notas[0];
    float menor_nota = notas[0];
    for (int i = 1; i < alunos; i++){
        if(notas[i] > maior_nota) {
            maior_nota = notas[i];
        }
        if(notas[i] < menor_nota) {
            menor_nota = notas[i];
        }
    }
    printf("\nA maior nota eh: %.1f", maior_nota);
    printf("\nA menor nota eh %.1f", menor_nota);
   
    float soma = 0.0;
    for(int i = 0; i < alunos; i++){
        soma += notas[i];
    }
    float media = soma/alunos;
    printf("\nA media das notas eh: %.1f", media);
   
    return 0;
}
