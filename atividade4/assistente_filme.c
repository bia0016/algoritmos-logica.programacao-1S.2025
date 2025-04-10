#include <stdio.h>

int main(int argc, char* argv[]){
    char opcao;
    
    printf("Assistente de Filmes.\n");

    printf("Para assistir Filmes Leves pressione (L), para assistir Filmes Intensos pressione (I).\n");
    scanf("%c", &opcao);
    
    if(opcao == 'l'){
        printf("Assistir Filmes Leves.\n");
        scanf("%c", &opcao);
        printf("Filmes Leves> Para assistir filmes de Animacao pressione (A) ou (C) para assistir filmes de Comedia.\n");
        scanf("%c", &opcao);
        if(opcao == 'a'){
            printf("Filmes Leves> indicacao de Filme de Animacao: TOY STORY.\n");
        } else if(opcao == 'c'){
            printf("Filmes Leves> indicacao de Filme de Comedia: TROVAO TROPICAL.\n");
        } else {
            printf("Opcao invalida.\n");
        }
    } else if(opcao == 'i'){
        printf("Assistir Filmes Intensos.\n");
        scanf("%c", &opcao);
        printf("Filmes Intensos> Para assistir filmes de Terror pressione (T) ou (S) para filmes de Acao.\n");
        scanf("%c", &opcao);
        if(opcao == 't'){
            printf("Filmes Intensos de Terror.\n");
            scanf("%c", &opcao);
            printf("Filmes intensos> Para Terror Psicologico pressione (P), para Terror Natural (N).\n");
                scanf("%c", &opcao);
            if(opcao == 'p'){
                printf("Filmes Intensos de Terror.\n");
                scanf("%c", &opcao);
                printf("Filmes Intensos> Terror> indicacao para Filme de Terror Psicologico: CORRA!.\n");
            }else if(opcao == 'n'){
                printf("Filmes intensos> Terror> indicacao para Filme de Terror Natural: INVOCACAO DO MAL.\n");
            } else {
                printf("Opcao invalida.\n");
            }
        }else if(opcao == 's'){
            printf("Filmes Intensos de Acao.\n");
            scanf("%c", &opcao);
            printf("Filmes Intensos> Para Acao Realista pressione (R), para Acao de Super-Heroi (H).\n");
            scanf("%c", &opcao);
            if(opcao == 'r'){
                printf("Filmes Intensos> Acao> indicacao para Filme de Acao Realista: MAD MAX.\n");
                
            }else if(opcao == 'h'){
            printf("Filmes Intensos> Acao> indicacao para Filme de Acao de Super-Heroi: HOMEM-ARANHA.\n");
        } else{
            printf("Opcao invalida.\n");
        }
        } else{
            printf("Opcao invalida.\n");
        }
   
    } else{
        printf("Opcao invalida.\n");
    }
    return 0;
}