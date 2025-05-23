#include <stdio.h>
#include <string.h>
#include "biblioteca.h"
int main(int argc, char* argv[]){
    if(argc < 3){
        printf("Argumentos invalidos\n");
        return 1;
    }

    if(strcmp(argv[1], "-maior") == 0){
        if(argc != 4){
            printf("argumentos invalidos\n");
            return 1;
        }
        int x = atoi(argv[2]);
        int y = atoi(argv[3]);
        
        printf("%d", maior_2n(x, y));
    }

    if(strcmp(argv[1], "-primo") == 0){
        if(argc < 4){
            printf("argumentos invalidos\n");
            return 1;
        }  
        int x = atoi(argv[2]);
        printf("%d\n", verificar_primo);
    }

    return 0;
}