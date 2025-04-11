#include <stdio.h>
#include <unistd.h>

int main(int argc, char* argv[]){
    // imprimir numeros de 0 a 100 em segundos
    for (int i = 0; i <= 100; i++){
        printf("%d segundos \n", i);
        sleep (1);
    }

    return 0;
}