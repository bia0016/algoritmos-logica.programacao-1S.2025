#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main(int argc, char* argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);
    printf("O menor valor entre (%d e %d) eh %d\n", x, y, menor_2n(x, y));
    printf("O menor valor entre (%d, %d e %d) eh %d\n", x, y, z, menor_3n(x, y, z));
    return 0;
}