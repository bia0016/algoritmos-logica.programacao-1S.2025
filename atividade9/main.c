/*
O programa deve receber, por linha de comando, 3 argumentos inteiros;
O primeiro argumento representa o menor valor possível e deve ser menor que o segundo argumento;
O segundo argumento representa o maior valor possível e deve ser maior que o primeiro argumento;
O terceiro argumento representa o valor esperado pelo usuário e deve ser maior ou igual ao primeiro argumento e menor ou igual ao segundo argumento;
O seu programa deve realizar um sorteio de um número aleatório entre o primeiro e segundo argumento.
O seu programa deve informar se o usuário foi sorteado ou não, considerando o terceiro argumento;
O seu programa deve escrever em um arquivo log.txt o registro de todos os sorteios: numero mínimo, número máximo, número esperado, número sorteado e resultado.
Ex.: ./sorteio 1 6 3
log.txt>
número mínimo: 1
número máximo: 6
número esperado: 3
número sorteado: 5
resultado: não sorteado
*/
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
//argv[2], [3], [4]
int main(int argc, char* argv[]){
    FILE *abc = fopen(argv[1], "w");
    if(abc == NULL){
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    fprintf(abc, argv[2])
    //for(int i = 1; i < 7; i++){}
    return 0;
}