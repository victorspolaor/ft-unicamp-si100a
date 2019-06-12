#include <stdio.h>

int main(void){

    int lin = 0, col = 0, linMax = 0, colMax = 0, tam = 0, indice = 0;
    char space[1];

    scanf("%d", &linMax);
    fgets(space, 1, stdin);
    scanf("%d", &colMax);

    tam = linMax * colMax;

    int matrix[linMax][colMax];

    int vetorMatriz[tam];

    for(lin = 0; lin < linMax; lin++){
        for(col = 0; col < colMax; col++){
            scanf("%d", &matrix[lin][col]);
        }
    }

    for(lin = 0; lin < linMax; lin++){
        for(col = 0; col < colMax; col++){
            vetorMatriz[indice] = matrix[lin][col];
            indice++;
        }
    }

    for(lin = 0; lin < indice; lin++){
        printf("%d ", vetorMatriz[lin]);
    }
}
