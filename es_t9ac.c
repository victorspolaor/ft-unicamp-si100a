#include <math.h>

float adicao(float A, float B);
float subtracao(float A, float B);
float multiplicacao(float A, float B);
float divisao(float A, float B);
float potenciacao(float A, float B);

int main(){

    float A = 0, B = 0;
    char operador;

    scanf("%f %c %f", &A, &operador, &B);

    switch(operador){
        case '+':
            printf("%.3f\n", adicao(A, B));
            break;

        case '-':
            printf("%.3f\n", subtracao(A, B));
            break;

        case '*':
            printf("%.3f\n", multiplicacao(A, B));
            break;

        case '/':
            printf("%.3f\n", divisao(A, B));
            break;

        case '^':
            printf("%.3f\n", potenciacao(A, B));
            break;
    }

    return 0;
}

float adicao(float A, float B){
    float resultado;
    return resultado = A + B;
}

float subtracao(float A, float B){
    float resultado;
    return resultado = A - B;
}

float multiplicacao(float A, float B){
    float resultado;
    return resultado = A * B;
}

float divisao(float A, float B){
    float resultado;
    return resultado = A / B;
}

float potenciacao(float A, float B){
    float resultado;
    return resultado = pow(A, B);
}
