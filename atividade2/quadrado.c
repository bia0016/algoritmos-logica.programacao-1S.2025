#include <stdio.h>

int main(int argc, char* argv[]){
    //quadrado.c, area = lado^2
    float area, lado;
    printf("digite o lado do quadrado: ");
    scanf("%f", &lado);
    area = lado * lado;

    printf("a area do quadrado eh: %.2f", area);
    return 0;

    /*quadrado.c
retangulo.c
triangulo.c
trapezio.c
losango.c
circulo.c*/
}