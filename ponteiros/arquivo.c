#include <stdio.h>
int main(int argc, char* argv[]){
    /*modos de abertura de um arquivo
    'r' -> para leitura
    'w' -> criar/sobrescrever e escrever no arquivo
    'a' -> criar, se nao existir, e adicionar ao final do arquivo*/

    printf("hello, world!\n");
    FILE *sexta = fopen("C:\\Users\\beatriz.evangelista\\Documents\\Nova pastasexta.txt", "w");
    if(sexta == NULL){
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    //imprimir um arquivo
    fprintf(sexta, "hello, world!\n");
    fclose(sexta);
    return 0;
}