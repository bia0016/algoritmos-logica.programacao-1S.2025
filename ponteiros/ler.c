#include <stdio.h>
#define MAX_TXT 256
int main(int argc, char* argv[]){
    char texto[MAX_TXT];
    FILE *sexta = fopen(argv[1], "r");
    if (sexta == NULL)
    {
        printf("erro ao abrir o arquivo\n");
        return 1;
    }
    
    while(fgets(texto, 256, sexta)){
        fprintf(stdout, texto);
    }
    fclose(sexta);
    
    return 0;
}