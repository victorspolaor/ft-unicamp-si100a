#include <stdio.h>

int main(){

    int contador = 0, pertence = 0;
    float notas[20], nota = 0, notaInserida = 0;

    for(contador = 0; contador < 20; contador++){
        scanf("%f", &nota);
        notas[contador] = nota;
    }

    do{
        scanf("%f", &notaInserida);

        if(notaInserida < 0){
            break;
        }

        for(contador = 0; contador < 20; contador++){

            if(notaInserida == notas[contador]){
                pertence = 1;
            }
        }

        if(pertence == 1){
            printf("existe\n");
        }
        else if(pertence == 0){
            printf("nao existe\n");
        }

        pertence = 0;

    }while(notaInserida > 0);
}


