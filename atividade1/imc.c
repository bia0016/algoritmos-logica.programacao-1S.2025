#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[])
{
    float peso, altura, imc;

    printf("digite o peso: ");
    scanf("%f", &peso);

    printf("digite a altura: ");
    scanf("%f", &altura);

    imc = peso / pow(altura, 2);

    printf("o IMC eh: %.2f", imc);
    return 0;
}