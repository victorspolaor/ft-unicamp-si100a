
#include <stdio.h>

int main(){

    int totalCaminho = 0, vertices = 0, contaSup = 0, contaSegSup = 0, aux = 0;
    int contTrajeto = 1, limiteMax = 50, limite = 1, trajeto[limiteMax];

    scanf("%d", &vertices);

    int vetorSuporte[vertices];
    int grafo[vertices][vertices];

    int lin = 0, col = 0;

    for(lin = 0; lin < vertices; lin++){
        for(col = 0; col < vertices; col++){
            scanf("%d", &grafo[lin][col]);
        }
    }

    int input = 0, output = 0;

    scanf("%d", &input);
    scanf("%d", &output);
    lin = input;

    do{

        col  = 0;

        while(col < vertices){
            vetorSuporte[col] = grafo[lin][col];

            col++;
        }

        for(contaSup = vertices - 1; contaSup > 0; contaSup--){
            for(contaSegSup = 0; contaSegSup < contaSup; contaSegSup++){
                if(vetorSuporte[contaSegSup] > vetorSuporte[contaSegSup + 1]){
                    aux = vetorSuporte[contaSegSup];
                    vetorSuporte[contaSegSup] = vetorSuporte[contaSegSup + 1];
                    vetorSuporte[contaSegSup + 1] = aux;
                }
            }
        }

        contaSup = 0;

        while(contaSup < vertices){
            if(vetorSuporte[contaSup] != 0){
                aux = vetorSuporte[contaSup];
                break;
            }
            contaSup++;
        }

        totalCaminho += aux;
        contaSup = 0;

        while((grafo[lin][contaSup] != aux)){
            if(contaSup != vertices){
                contaSup++;
            }
        }

        trajeto[contTrajeto] = contaSup;

        for(contaSegSup = 0; contaSegSup < vertices; contaSegSup++){
            grafo[lin][contaSegSup] = 0;
            grafo[contaSegSup][lin] = 0;
        }

        lin = contaSup;
        contTrajeto++;
        limite++;

    }while(contaSup != output);

    printf("%d", limite);

    printf("Menor distancia gulosa entre os nos %d e %d:: %d\n", input, output, totalCaminho);

    printf("Caminho:: ");

    contaSegSup = 0;

    for(contaSegSup = 0; contaSegSup < limite - 1; contaSegSup++){
        printf("%d", trajeto[contaSegSup]);

        if(contaSegSup < limite - 1){
            printf("->");
        }
    }
    printf("\n");

  return 0;
}
