#include <stdio.h>

void ordenaVetor(int tamanhoVetor, int *vetorA);

int main(){

    int tamanhoVetor;

    scanf("%d", &tamanhoVetor);

    int vetorA[tamanhoVetor];

    for(int i = 0; i < tamanhoVetor; i++){
        scanf("%d", &vetorA[i]);
    }

    ordenaVetor(tamanhoVetor, vetorA);

    printf("maior valor: %d\n", vetorA[tamanhoVetor - 1]);
    printf("menor valor: %d\n", vetorA[0]);

    return 0;
}

void ordenaVetor(int tamanhoVetor, int *vetorA){

    int aux;

    for(int i = 0; i < tamanhoVetor; i++){
        for(int j = i + 1; j < tamanhoVetor; j++){
            if(vetorA[i] > vetorA[j]){
                aux = vetorA[i];
                vetorA[i] = vetorA[j];
                vetorA[j] = aux;
            }
        }
    }
}

