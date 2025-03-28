#include <stdio.h>
//#include <stdlib.h>

int main(int argc, char* argv[]) 
{
    //soma, sub, mul, div, pot, raiz, resto da div, quocientes da div, incremento, decremento

    float n1, n2, soma, sub, mul, div, pot, raiz;
    int resto;
    printf("digite o valor de n1: ");
    scanf("%f", &n1);
    printf("digite o valor de n2: ");
    scanf("%f", &n2);
    soma = n1+n2;
    sub = n1-n2;
    mul = n1*n2;
    div = n1/n2;
    pot = pow(n1, n2);
    raiz = sqrt(n1);
    resto = (int) n1 % (int) n2;

    printf("o resultado da soma eh: %.1f\n", soma);

    printf("o resultado da subtracao eh: %.1f\n", sub);

    printf("o resultado da multiplicacao eh: %.1f\n", mul);

    printf("o resultado da divisao eh: %.1f\n", div);

    printf("o resultado da potenciacao eh: %.1f\n", pot);

    printf("o resultado da radiciacao eh: %.1f\n", raiz);

    printf("o resultado do resto da divisao eh: %d\n", resto);
    //printf("%.0f %% %.0f = %d\n", n1, n2, resto);

    int quo = n1 / (int) n2;
    printf("%.2f // %.2f = %d\n", n1, n2, quo);

    n1++;
    printf("%.2f++ = %.2f\n", n1-1, n1);

    n1--;
    printf("%.2f-- = %.2f\n", n1+1, n1);

    return 0;
}
