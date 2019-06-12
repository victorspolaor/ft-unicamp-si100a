#include <stdio.h>
#include <string.h>

int main(void){

    char vetor[80];

    fgets(vetor, 80, stdin);

    int tamanho = strlen(vetor);
    char aux[tamanho + 1];

    for(int c = 0; c < tamanho; c++){
        aux[c] = vetor[tamanho - c - 2];
    }

    aux[tamanho] = 0;

    printf("%s", aux);
}
