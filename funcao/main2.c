#include <stdio.h>
#include <string.h>
#define  TAM 80
typedef struct aluno{
    char nome[TAM];
    float nota;
}aluno;

void imprimir(aluno a){
    printf("Nome: %s\nNota: %s\n", a.nome, a.nota);
}
int main(int argc, char* argv[]){
    int n = 5;
    aluno alunos[n];
    
        fgets(alunos[i].nome, TAM, stdin);
         printf("Digite a nota do aluno: \n");

        scanf("%f", &alunos[i].nota);
        getchar();
        }
    return 0;
}

