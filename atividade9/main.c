
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char* argv[]){
    if(argc != 5){
        printf("eh necessario pelo menos 5 argumentos\n");
        return 1;
    }
    
    FILE *log = fopen(argv[1], "a");
    if(log == NULL){
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    int a = atoi(argv[2]);
    int z = atoi(argv[3]);
    int valesp = atoi(argv[4]);

    if(a >= z){
        printf("primeiro argumento deve ser menor que o segundo\n");
        return 1;
    }
    if(valesp > z){
        printf("o valor esperado deve ser menor ou igual ao segundo argumento\n");
        return 1;
    }
    if(valesp < a){
        printf("o valor esperado deve ser maior ou igual ao primeiro argumento\n");
        return 1;
    }
    srand(time(NULL));
    int sorteado = rand() % (z - a + 1) + a;
    printf("primeiro numero = %d\nultimo numero = %d\nvalor esperado = %d\nvalor sorteado = %d\n", a, z, valesp, sorteado);
    fprintf(log, "primeiro numero = %d\nultimo numero = %d\nvalor esperado = %d\nvalor sorteado = %d\n", a, z, valesp, sorteado);
    fclose(log);
    return 0;
}