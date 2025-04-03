#include <stdio.h>

int main(int argc, char* argv[]){ 
    float dm, d, area;

    printf("losango.c\n");
    printf("digite o diagonal maior: \n");
    scanf("%f", &dm);
    printf("digite o diagonal menor: \n");
    scanf("%f", &d);
    area = (dm*d)/2;
    printf("a area (A) do losango eh: %.2f\n", area);
    return 0;
}