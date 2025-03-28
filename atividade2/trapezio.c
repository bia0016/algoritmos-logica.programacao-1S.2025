#include <stdio.h>

int main(int argc, char* argv[]){
    //trapezio.c area = (base maior + base menor) * altura / 2
    float bm, b, alt, area;
    printf("digite o valor da maior base: ");
    scanf("%f", &bm);
    printf("digite o valor da menor base: \n");
    scanf("%f", &b);
    printf("digite a altura: ");
    scanf("%f", &alt);
    area = ((bm+b)*alt)/2;
    printf("a area do trapezio eh: %.2f", area);
    return 0;
}