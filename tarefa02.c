#include <stdio.h>

int main (){

    int numero = 0, primeiroContador = 0, segundoContador = 0, div = 0, somaPrimo = 0, somaPar = 0, somaImpar = 0;

    scanf("%d", &numero);

    for(primeiroContador = 1; primeiroContador < numero; primeiroContador++, div = 0){
        for(segundoContador = 1; segundoContador < numero; segundoContador++){
            if(primeiroContador % segundoContador == 0){
                div++;
            }
        }

        if(div == 2){
            somaPrimo += primeiroContador;
        }
        else if(primeiroContador % 2 == 0 && div != 2){
            somaPar += primeiroContador;
        }
        else if(primeiroContador % 2 != 0 && primeiroContador != 1 && div != 2){
            somaImpar += primeiroContador;
        }
    }
    printf("%d %d %d\n", somaPar, somaImpar, somaPrimo);
}


