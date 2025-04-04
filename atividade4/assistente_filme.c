#include <stdio.h>

int main(int argc, char* argv[]){
    char opcao, op;
    float n;
    printf("assistente de filmes.\n");
    /*1.assistir filmes leves l, assistir filmes intensos i
    2.leves: animação ou comédia
    2.intensos: terror ou ação
    3.terror psicologico ou natural - ação superheroi ou realista 
    */

    printf("para assistir filmes leves pressione (L), para assistir filmes intensos pressione (I).\n");
    scanf("%c", &opcao);
    
    if(opcao == 'l' || opcao == 'i'){
        printf("assistir filmes leves.\n");
        printf("assistir filmes intensos.\n");
        
        }
        
    printf("filmes leves: animacao (A) ou comedia (C)?\n");
    scanf("%c", &op);
    
   // if(op == a || op == C){
      //  printf()
    //}
   /* switch(op){
        case'a':
        printf("animacao: assista toy story.\n");
        break;
        case'c':
        printf("comedia: assista trovao tropical.\n");
        break;
        default:
        printf("opcao invalida.\n");
    }
    */
    
    return 0;
}

