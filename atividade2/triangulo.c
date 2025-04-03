#include <stdio.h>

int main(int argc, char* argv[]){

// triangulo.c area = base * altura / 2

float base, altura, area;
printf("triangulo.c\n");
printf("digite a base e altura: ");
scanf("%f %f", &base, &altura);
area = (base * altura)/2;

printf("a area (A) do triangulo eh: %.2f", area);
return 0;
}