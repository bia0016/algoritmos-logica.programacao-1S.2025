//menores
int menor_2n(int a, int b){
    int menor;
    if(a < b){
        menor = a;
    }else{
        menor = b;
    }
    return menor;
}
int menor_3n(int a, int b, int c){
    return menor_2n(menor_2n(a, b), c);
}
//maiores
int maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a;
    }else{
        maior = b;
    }
    return maior;
}
int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c);
}