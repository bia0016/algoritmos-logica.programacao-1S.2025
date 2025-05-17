#include <stdio.h>
#include <stdlib.h>
#include "biblioteca.h"
int main(int argc, char* argv[]){
    int x = atoi(argv[1]);
    int y = atoi(argv[2]);
    int z = atoi(argv[3]);
    printf("O maior valor entre (%d e %d) eh %d\n", x, y, maior_2n(x, y));
    printf("O maior valor entre (%d, %d e %d) eh %d\n", x, y, z, maior_3n(x, y, z));
    return 0;
}