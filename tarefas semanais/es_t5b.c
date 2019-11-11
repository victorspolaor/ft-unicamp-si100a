#include <stdio.h>

int main(void){

    int quantidadeVendido[10], numeroVendido = 0, totalVendido = 0, contador = 0;
    float valorUnitario[10], valor = 0, totalValor = 0, valorTotal = 1;

    for(contador = 0; contador < 10; contador++){

        scanf("%d", &numeroVendido);
        quantidadeVendido[contador] = numeroVendido;
        totalVendido += quantidadeVendido[contador];
    }

    for(contador = 0; contador < 10; contador++){

        scanf("%f", &valor);
        valorUnitario[contador] = valor;
    }

    for(contador = 0; contador < 10; contador++){
        valorTotal = quantidadeVendido[contador] * valorUnitario[contador];
        totalValor += valorTotal;
    }

    printf("o lucro foi de %.3f e a quantidade de produtos vendidos foi de %d", totalValor, totalVendido);
}
