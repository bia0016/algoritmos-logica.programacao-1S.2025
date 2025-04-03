#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area, raio;
    printf("circulo.c\n");
    printf("digite o raio: ");
    scanf("%f", &raio);
    //area = 3.14 * pow(raio, 2);
    area = M_PI * (pow(raio, 2));
    printf("a area (A) do circulo eh: %.2f", area);
    return 0;
}