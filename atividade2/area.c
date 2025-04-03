#include <stdio.h>
#include <math.h>

int main(int argc, char* argv[]){
    char opcao;
    float raio, area, dm, d, lado, b, a, base, altura, bm, alt;

    printf("area.c\n");
    printf("escolha uma opcao: \n");
    printf("c - circulo\n");
    printf("l - losango\n");
    printf("q - quadrado\n");
    printf("r - retangulo\n");
    printf("t - triangulo\n");
    printf("z - trapezio\n");
    scanf("%c", &opcao);
    switch(opcao){
        case 'c':
        printf("circulo\n");
         printf("digite o raio: \n");
        scanf("%f", &raio);
        area = M_PI * (pow(raio, 2));
        break;
        case 'l':
        printf("losango\n");
         printf("digite o diagonal maior: \n");
        scanf("%f", &dm);
        printf("digite o diagonal menor: \n");
        scanf("%f", &d);
        area = (dm*d)/2;
        break;
        case 'q':
        printf("quadrado\n");
         printf("digite o lado do quadrado: \n");
        scanf("%f", &lado);
        area = lado * lado;
        break;
        case 'r':
        printf("retangulo\n");
         printf("digite a base: ");
        scanf("%f", &b);
        printf("digite a altura: \n");
        scanf("%f", &a);
        area = b * a;
        break;
        case 't':
        printf("triangulo\n");
        printf("digite a base: ");
        scanf("%f", &base);
        printf("digite a altura: \n");
        scanf("%f", &altura);
        area = (base * altura)/2;
        break;
        case 'z':
        printf("trapezio\n");
        printf("digite o valor da maior base: ");
        scanf("%f", &bm);
        printf("digite o valor da menor base: \n");
        scanf("%f", &b);
        printf("digite a altura: \n");
        scanf("%f", &alt);
        area = ((bm+b)*alt)/2;
        break;
        default: 
        printf("opcao invalida.\n");
    }
    printf("a area (A) eh: %.2f\n", area);
    return 0;
}