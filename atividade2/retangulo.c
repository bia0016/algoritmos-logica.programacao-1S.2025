#include <stdio.h>

int main(int argc, char* argv[]){
    float area, b, a;
    //retangulo. c area = base * altura
    printf("retangulo.c\n");
    printf("digite a base e a altura: "),
    scanf("%f %f", &b, &a);
    
    area = b * a;

    printf("a area (A) do retangulo eh: %.2f", area);
    return 0;
}