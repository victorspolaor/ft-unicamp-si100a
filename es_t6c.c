#include <stdio.h>

int main(void){

    int lin = 0, col = 0, primeiroLinMax = 0, primeiroColMax = 0, segundoLinMax = 0, segundoColMax = 0, aux = 0, soma = 0;
    char space[1];

    scanf("%d", &primeiroLinMax);
    fgets(space, 1, stdin);
    scanf("%d", &primeiroColMax);

    scanf("%d", &segundoLinMax);
    fgets(space, 1, stdin);
    scanf("%d", &segundoColMax);

    int primeiraMatriz[primeiroLinMax][primeiroColMax];
    int segundaMatriz[segundoLinMax][segundoColMax];
    int matrizResultado[primeiroLinMax][segundoColMax];

    if(primeiroColMax != segundoLinMax){

        printf("As dimensoes das duas matrizes nao permitem a multiplicacao");
        return 0;
    }
    else{

        for(lin = 0; lin < primeiroLinMax; lin++){
            for(col = 0; col < primeiroColMax; col++){
                scanf("%d", &primeiraMatriz[lin][col]);
            }
        }

        for(lin = 0; lin < segundoLinMax; lin++){
            for(col = 0; col < segundoColMax; col++){
                scanf("%d", &segundaMatriz[lin][col]);
            }
        }

        for(lin = 0; lin < primeiroLinMax; lin++){
            for(col = 0; col < segundoColMax; col++){
                soma = 0;
                for(aux = 0; aux < primeiroColMax; aux++){
                    soma += (primeiraMatriz[lin][aux] * segundaMatriz[aux][col]);
                }
                matrizResultado[lin][col] = soma;
            }
        }

        for(lin = 0; lin < primeiroLinMax; lin++){
            for(col = 0; col < segundoColMax; col++){
                printf("%d ", matrizResultado[lin][col]);
            }
            printf("\n");
        }
    }
}
