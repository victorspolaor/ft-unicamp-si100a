
#include <stdio.h>

void recebeVetor(int vetorCubo[10]){

    for(int i = 0; i < 10; i++){
        printf("%d\n", vetorCubo[i]);
    }
}

int main(){

    int vetorNumeros[10];
    int vetorCubo[10];
    int numero = 0;
    int numeroCubo = 0;

    for(int i = 0; i < 10; i++){
        scanf("%d", &numero);
        vetorNumeros[i] = numero;
        numeroCubo = numero * numero * numero;
        vetorCubo[i] = numeroCubo;
    }

    recebeVetor(vetorCubo);

    return 0;
}

