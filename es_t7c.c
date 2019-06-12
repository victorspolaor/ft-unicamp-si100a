#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void){

    char vetor[80];

    scanf("%s", vetor);

    int tamanho = strlen(vetor);
    char aux[tamanho + 1];

    for(int i = 0; i < tamanho; i++){
        vetor[i] = tolower(vetor[i]);
    }

    for(int c = 0; c < tamanho; c++){
        aux[c] = vetor[tamanho - c - 1];
    }

    aux[tamanho] = 0;

    if(strcmp(vetor, aux)){
        printf("Esta palavra nao e um palindromo");
    }
    else{
        printf("Esta palavra e um palindromo");
    }
}
