#include <stdio.h>

int main(int argc, char* argv[]){ 
    float dm, d, area;
    printf("digite o diagonal maior: ");
    scanf("%f", &dm);
    printf("digite o diagonal menor: ");
    scanf("%f", &d);
    area = (dm*d)/2;
    printf("a area do losango eh: %.2f", area);
    return 0;
}