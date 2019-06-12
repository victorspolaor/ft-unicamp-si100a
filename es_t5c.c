#include <stdio.h>

int main(void){
    int primeiroVetor[10], segundoVetor[10], contador = 0, valorPrimeiroVetor = 0, valorSegundoVetor = 0;

    for(contador = 0; contador < 10; contador++){

        scanf("%d", &valorPrimeiroVetor);
        primeiroVetor[contador] = valorPrimeiroVetor;
    }

    for(contador = 0; contador < 10; contador++){

        scanf("%d", &valorSegundoVetor);
        segundoVetor[contador] = valorSegundoVetor;
    }

    for(contador = 0; contador < 10; contador++){
        printf("%d|%d|", primeiroVetor[contador], segundoVetor[contador]);
    }
}

