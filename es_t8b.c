#include <stdio.h>

typedef struct Ponto{

        float X;
        float Y;

} Ponto;

typedef struct Retangulo{

        Ponto inferiorEsquerdo;
        Ponto superiorDireito;

} Retangulo;

int main(){

    int X = 0, Y = 0;

    Retangulo retA, retB;
    Ponto pontoA, pontoB;

    scanf("%d %d", &X, &Y);

    pontoA.X = X;
    pontoA.Y = Y;

    retA.inferiorEsquerdo = pontoA;

    scanf("%d %d", &X, &Y);

    pontoB.X = X;
    pontoB.Y = Y;

    retA.superiorDireito = pontoB;

    scanf("%d %d", &X, &Y);

    pontoA.X = X;
    pontoA.Y = Y;

    retB.inferiorEsquerdo = pontoA;

    scanf("%d %d", &X, &Y);

    pontoB.X = X;
    pontoB.Y = Y;

    retB.superiorDireito = pontoB;

    if(retB.inferiorEsquerdo.X >= retA.inferiorEsquerdo.X && retB.inferiorEsquerdo.X <= retA.superiorDireito.X && retB.inferiorEsquerdo.Y >= retA.inferiorEsquerdo.Y && retB.inferiorEsquerdo.Y <= retA.superiorDireito.Y){
        printf("o segundo retangulo esta contido no primeiro\n");

    } else{

        printf("o segundo retangulo nao esta contido no primeiro\n");
    }

    return 0;
}

