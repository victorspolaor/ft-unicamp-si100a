#include <stdio.h>

//Soma: z + w = (a + bi) + (c + di) = (a + c) + (b + d)i
//Multiplicação: z * w = (a + bi) * (c + di) = (ac - bd) + (ad + bc)i

void somaComplexo(int a, int b, int c, int d){
    int parteReal, parteImaginaria;

    parteReal = a + c;
    parteImaginaria = b + d;

    printf("%d + %di\n", parteReal, parteImaginaria);
}

void multiplicaComplexo(int a, int b, int c, int d){
    int parteReal, parteImaginaria;

    parteReal = ((a * c) - (b * d));
    parteImaginaria = ((a * d) + (b * c));

    printf("%d + %di\n", parteReal, parteImaginaria);
}

int main(){

    int a = 0, b = 0, c = 0, d = 0;
    char operador;

    scanf("%d %d %c %d %d", &a, &b, &operador, &c, &d);

    if(operador == '+'){
        somaComplexo(a, b, c, d);
    }

    if(operador == '*'){
        multiplicaComplexo(a, b, c, d);
    }

    return 0;
}
