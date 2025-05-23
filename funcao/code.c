#include <stdio.h>
#include <string.h>
#define TAM_NOME 64
//typedef serve para nao declarar struct todas as vezes
 typedef struct aluno{
    char nome[TAM_NOME];
    float nota;
}aluno;

void imprimir(aluno a){
    printf("Nome: %s\nNota: %.2f\n", a.nome, a.nota);
}

int main(int argc, char* argv[]){
    int n = 5;
   
    // sem typedef
    /*struct aluno aluno[n] (todas as vezes)*/
    aluno alunos[n];
    printf("Digite o nome do aluno 0: \n");
    fgets(alunos[0].nome, TAM_NOME, stdin);
    printf("Digite a nota do aluno 0: \n");
    scanf("%f", &alunos[0].nota);
    imprimir(alunos[0]);
    printf("O nome do aluno eh: %s\n", alunos[0].nome);
    printf("A nota do aluno: %.2f\n", alunos[0].nota);
        return 0;
}