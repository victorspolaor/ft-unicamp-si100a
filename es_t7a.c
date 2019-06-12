#include <stdio.h>
#include <stdlib.h>

int main(){
    int contador = 0, i = 0;
    char vetor[80];

    fgets(vetor, 80, stdin);

    while(vetor[i] != '\0'){
        contador++;
        i++;
    }

    contador--;

    printf("%d", contador);
}
