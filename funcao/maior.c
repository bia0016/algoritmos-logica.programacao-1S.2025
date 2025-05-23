#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main (int argc, char* argv[]){
if(argc != 4){
        printf("Digite ate 3 argumentos\n", argv[0]);
        return 1;
    }
           
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);
    int numeros[argc - 1];
    if(argc < 3){
        printf("Digite ate 3 argumentos\n", argv[0]);
        return 1;
    }
    if(argc == 3){
        x = atoi(argv[1]);
        y = atoi(argv[2]);
        printf("%d", maior_2n(x, y));
    }
    
    printf("o maior valor entre %d e %d eh %d\n", x, y, maior_2n(x, y));
    printf("o maior valor entre %d, %d e %d eh %d\n", x, y, z, maior_3n(x, y, z));
    return 0;


}