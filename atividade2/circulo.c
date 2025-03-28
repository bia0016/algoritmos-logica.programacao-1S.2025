#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    float area, raio;
    printf("digite o raio: ");
    scanf("%f", &raio);
    //area = 3.14 * pow(raio, 2);
    area = 3.14159*(raio*raio);
    printf("a area do circulo eh: %.2f", area);
    return 0;
}