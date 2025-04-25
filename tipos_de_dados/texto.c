#include <stdio.h>
#include <string.h>

#define TAM 255

int main(int argc, char* argv[]){
    //declaração de strings [], argv[] conjunto de strings
    
    char palavra1[] = "conhecimento";
    char palavra2[] = {'c', 'o', 'n', 'h', 'e', 'c', 'i', 'm', 'e', 'n', 't', 'o', '\0'};
    char frase1[TAM];
    char palavra3[TAM];
    char palavra4[TAM];
    printf("%s\n", palavra1);
    printf("%s\n", palavra2);
    printf("%c\n", palavra2[4]);
    int i;
    printf("digite a posicao da letra que deseja ver: ");
     scanf("%d", &i);
   
        
        printf("\n%c", palavra2[i]);
    
    printf("\ndigite a posicao da letra que deseja ver: ");
    printf("\nDigite uma frase: ");
    
    fgets(frase1, TAM, stdin);
    printf("%s\n", frase1);

    printf("Digite a palavra: ");
    fflush(stdin);
    fgets(palavra3, TAM, stdin);
    printf("Digite outra palavra: ");
    fflush(stdin);
    fgets(palavra4, TAM, stdin);
    if(strcmp(palavra3, palavra4) == 0){
        printf("As palavras sao iguais.\n");
    }else{
        printf("As palavras sao diferentes.\n");
    }

    printf("Tamanho da palavra eh: %d", strlen(palavra3));

    for(int i = 0; i < strlen(palavra3); i++){
        printf("%c", palavra3[i]);
    }
//imprimir a palavra 3 ao contrario
    for(int i = strlen(palavra3); i > -1; i--){
    printf("%c", palavra3[i]);
    }
//fflush?, strlen, 
    //strcat
    strcat(palavra3, palavra4);
    printf("\nPalavra 3 concatenada = %s", palavra3);

    return 0;
}