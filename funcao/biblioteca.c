/*verificar se um numero e maior que outro*/
int maior_2n(int a, int b){
    int maior;
    if(a > b){
        maior = a; 
    }else {
        maior = b;
    }
    return maior;
}
int maior_3n(int a, int b, int c){
    return maior_2n(maior_2n(a, b), c);
}