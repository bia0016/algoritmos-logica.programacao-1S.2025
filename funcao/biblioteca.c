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


    int maior_n(int numeros[], int n){
        int maior = numeros[0];
        for(int i = 0; i < n; i++){
            maior = maior_2n(maior, numeros[i]);
        }
        return 0;
    }

    int verificar_primo(int n){
        if(n < 2){
            return 0;
        }
        if((n % 2 == 0) && (n!=2)){
            return 0;
        }
        for(int i = 3; i < n; i+=2){
            if(n % i == 0){
                return 0;
            }
        }
        return 1;
    }

