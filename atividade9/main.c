
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//argv[2], [3], [4]
int main(int argc, char* argv[]){
    if(argc != 5){
        printf("eh necessario pelo menos 5 argumentos\n");
        return 1;
    }
    
    FILE *log = fopen(argv[1], "w");
    if(log == NULL){
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    int a = atoi(argv[2]);
    int z = atoi(argv[3]);
    int valesp = atoi(argv[4]);
    //a e valesp devem ser menores que z
    if(a > z){
        printf("primeiro argumento deve ser menor que o segundo\n");
        return 1;
    }
    if(valesp >= z){
        printf("o valor esperado deve ser menor ou igual ao segundo argumento\n");
        return 1;
    }
    int sorteado = rand() % (z - a + 1) + a;
    fprintf(log, "primeiro numero = %d\nultimo numero = %d\nvalor esperado = %d\n valor sorteado = %d\n", a, z, valesp, sorteado);
    fclose(log);
    return 0;
}