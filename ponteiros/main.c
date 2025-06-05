#include <stdio.h>
//escopo local
#define tam 25
int u = 1;

void incrementaX(){
    int z = 1;
    while(z < 5){
        z++;
    }
    printf("z = %d\n", z);
}
void incrementaW(int w){
    while (w < 5){
        w++
    }
    printf("w = %d\n", w);
}
void incrementaT(int *t){
    while(*t < 5){
        *t = 11;
        u++;
    }
}
//escopo local != escopo global
int main(int argc, char* argv[]){
    int x = 3;
    int y;
    int v = 1;
    for(y = 1; y < 5; y+=2){
        printf("");
    }
    printf("y = %d\n", y);
    while(x < 5){
        if(x % 2 == 0){
            x = x + 2;
        }else{
            x--;
        }
    }
    incrementaX();
    incrementaW(v);
    incrementaT(&y);
    
    printf("x = %d\n", x);
    printf("%d\n", tam);
    printf("v = %d\n", v);
    printf("y = %d\n", y);
    
    return 0;
}