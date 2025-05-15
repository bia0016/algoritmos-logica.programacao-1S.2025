#include <stdio.h>

int main(int argc, char *argv[]){
//verificar se um numero é primo 
//if(numero é divisivel somente por numero e 1) entao ele é primo
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

    if(n/n == 1 && n/1 == n){
        printf("O valor %d eh primo\n", n);
    } else {
        printf("O valor %d nao eh primo\n", n);
    }

    return 0;
}
