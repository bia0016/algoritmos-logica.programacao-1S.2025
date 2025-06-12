#include <stdio.h>
#include <stdlib.h> 
typedef struct ponto
{
    int x;
    float y;
}ponto;

int main(int argc, char* argv[]){
    int qtd_linhas = 0;
    float y, mediax, mediay, somax, somay;
    int x;
    ponto *numeros;

    FILE *arq = fopen("dados_regressao.csv", "r");
    if(arq == NULL){
        printf("erro ao abrir arquivo\n");
        return 1;
    }
    while(fscanf(arq, "%d,%f", &x, &y)!= EOF){
        qtd_linhas++;
        printf("%d, %.2f\n", x, y);
    }
    numeros = malloc(sizeof(ponto) * qtd_linhas);
    printf("qtdlinhas = %d\n", qtd_linhas);
    if(numeros != NULL){
        somax = 0;
        somay = 0;
        int i = 0;
        fseek(arq, 0, SEEK_SET);
        while(fscanf(arq, "%d,%f", &x, &y)!= EOF){
            numeros[i].x = x;
            numeros[i].y = y;
            somax+=x;
            somay+=y;
            i++;
        }
        mediax = somax / qtd_linhas;
        mediay = somay / qtd_linhas;
    }
    float inclinacaodivendo = 0;
    float inclinacaodividor = 0;
    for(int i = 0; i < qtd_linhas; i++){
        inclinacaodivendo += (numeros[i].x - mediax) * (numeros[i].y - mediay);
        inclinacaodividor += (numeros[i].x - mediax) * (numeros[i].x - mediax);
    }
    float a = inclinacaodivendo / inclinacaodividor;
    float b = mediay - (a * mediax);
    printf("%.2fx + %.2f", a, b);
    fclose(arq);
    return 0;
}