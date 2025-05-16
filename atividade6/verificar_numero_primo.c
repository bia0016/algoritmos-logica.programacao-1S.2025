#include <stdio.h>
int main(int argc, char* argv[]){
    int num, primo = 1;
    printf("digite um numero inteiro: ");
    scanf("%d", &num);
    if(num <= 1){
        primo = 0;
    }else{
        for(int i = 2; i < num; i++){
            if(num % i == 0){
                primo = 0;
                break;
            }
        }
    }
    if(primo){
        printf("o numero %d eh primo\n", num);
    }else{
        printf("o numero %d nao eh primo\n", num);
    }
    return 0;
}
