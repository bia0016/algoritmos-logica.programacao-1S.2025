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

    printf("o IMC eh: %.2f\n", imc);
    
    if(imc <= 18.5){
        printf("abaixo do peso.\n");
    }

    if(imc > 18.5 && imc <= 24.9){ 
        printf("peso normal.\n");
    }
    
    if(imc > 24.9 && imc <= 29.9){
        printf("sobrepeso.\n");
    }

    if(imc > 29.9 && imc <= 34.9){ 
    printf("obesidade grau 1.\n");
    }

    if(imc > 34.9 && imc <= 39.9){
        printf("obesidade grau 2.\n");
    }

    if(imc > 39.9 && imc <= 49.9){
        printf("obesidade grau 3.\n");
    }
    
        return 0;
}