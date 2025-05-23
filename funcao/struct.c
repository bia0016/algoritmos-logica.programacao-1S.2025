#include <stdio.h>
#include <string.h>
#define  TAM 80
typedef struct aluno{
    char nome[TAM];
    float nota;
}aluno;

void imprimir(aluno a){
    printf("Nome: %s\nNota: %.2f\n", a.nome, a.nota);
}
int main(int argc, char* argv[]){
    int n = 5;
    aluno alunos[n];
    
    for(int i = 0; i < n; i++){
        printf("Digite o nome do %d aluno: \n", i);
        fgets(alunos[i].nome, TAM, stdin);
        printf("Digite a nota do %d aluno: \n", i);
        scanf("%f", &alunos[i].nota);
        getchar();
        }

        float soma = 0.0;
        for(int i = 0; i < n; i++){
            soma += alunos[i].nota;
        }
        float media = soma/n;
        printf("A media das notas eh: %.2f\n", media);

        aluno maior_nota = alunos[0];
        aluno menor_nota = alunos[0];
        for(int i = 0; i < n; i++){
            if(maior_nota.nota < alunos[i].nota){
                maior_nota = alunos[i];
            }
            if(menor_nota.nota > alunos[i].nota){
                menor_nota = alunos[i];
            }
        }

        printf("A maior nota eh: \n");
        imprimir(maior_nota);
        printf("A menor nota eh: \n");
        imprimir(menor_nota);
    return 0;
}

