#include <stdio.h>
#include <math.h>

typedef struct Ponto{

        float primeiroValor;
        float segundoValor;

} Ponto;

int main(){

    float primeiroValor = 0, segundoValor = 0;
    Ponto A, B;

    scanf("%f %f", &primeiroValor, &segundoValor);

    A.primeiroValor = primeiroValor;
    A.segundoValor = segundoValor;

    scanf("%f %f", &primeiroValor, &segundoValor);

    B.primeiroValor = primeiroValor;
    B.segundoValor = segundoValor;

    float distanciaEuclidiana = sqrt(pow(A.primeiroValor - B.primeiroValor, 2) + pow(B.segundoValor - A.segundoValor, 2));

    if(distanciaEuclidiana < 0.0000001){

        printf("os pontos sao iguais");

    } else{

        printf("os pontos nao sao iguais");
    }

    return 0;
}
