#include <stdio.h>
#include <math.h>
#include <string.h>

typedef struct Pessoa{

        float altura;
        float peso;
        char nome[20];

    } Pessoa;

float calculaIMC(float altura, float peso);

int main(){

    Pessoa pessoa;

    float altura = 0, peso = 0;
    char nome[20];

    scanf("%f %f %s", &altura, &peso, nome);

    pessoa.altura = altura;
    pessoa.peso = peso;
    strcpy(pessoa.nome, nome);

    calculaIMC(altura, peso);

    return 0;
}

float calculaIMC(float altura, float peso){

    float alturaIMC;
    float IMC;

    alturaIMC = pow(altura, 2);
    IMC = peso / alturaIMC;

    printf("%.3f\n", IMC);

    return 0;
}
