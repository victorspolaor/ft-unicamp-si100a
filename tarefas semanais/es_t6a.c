#include <stdio.h>

int main (void){

    int lin = 0, linMax = 0, col = 0, colMax = 0;
    char space[1];

    scanf("%d", &linMax);
    fgets(space, 1, stdin);
    scanf("%d", &colMax);

    int matrix[linMax][colMax];

    for(lin = 0; lin < linMax; lin++){
        for(col = 0; col < colMax; col++){
            scanf("%d", &matrix[lin][col]);
        }
    }

    for(lin = 0; lin < colMax; lin++){
        for(col = 0; col < linMax; col++){
            printf("%d ", matrix[col][lin]);
        }
        printf("\n");
    }
}
