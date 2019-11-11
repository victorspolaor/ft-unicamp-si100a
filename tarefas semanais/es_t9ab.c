#include <stdio.h>
#include <math.h>

float media(char tipo[1], float notaA, float notaB);

int main(){

    float notaA = 0, notaB = 0;
    char tipo[1];

    scanf("%c %f %f", tipo, &notaA, &notaB);

    printf("%.3f\n", media(tipo, notaA, notaB));

    return 0;
}

float media(char tipo[1], float notaA, float notaB){

    float mediaAritmetica, mediaGeometrica, mediaPadrao;

    if(tipo[0] == 'A'){
        mediaAritmetica = (notaA + notaB) / 2;
        mediaPadrao = mediaAritmetica;
    }
    else if(tipo[0] == 'B'){
        mediaGeometrica = sqrt(notaA * notaB);
        mediaPadrao = mediaGeometrica;
    }
    return mediaPadrao;
}
