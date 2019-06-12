/*#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    typedef struct{

    char nomeAgente[102];
    char departamento[62];
    char mensagemVulneravel[42];
    char mensagemCripto[42];
    char numIdentif[10];

    } Mensagem;

    Mensagem mensagem[1000];

    int escolha = 0, index = 0, indexAux = 0, contadorPadrao = 0, mensagens = 0;
    char padrao[40], mensagemCriptoAux[42];

        do{

            printf("****MENU DE CRIPTOGRAFIA****\n"
                "1: Criptografar mensagem\n"
                "2: Encontrar padroes\n"
                "3: Descriptografar mensagem\n"
                "4: Visualizar todas as mensagens\n"
                "0: Sair!\n");

            scanf("%d", &escolha);

            switch(escolha){

                case 1:

                    for(index = indexAux; index < indexAux + 1; index++){

                        printf("****ADICIONAR MENSAGEM****\n");
                        printf("Digite o nome do Agente:\n");
                        fgets(mensagem[index].nomeAgente, sizeof(mensagem[index].nomeAgente), stdin);
                        fgets(mensagem[index].nomeAgente, sizeof(mensagem[index].nomeAgente), stdin);

                        printf("Digite o departamento:\n");
                        fgets(mensagem[index].departamento, sizeof(mensagem[index].departamento), stdin);

                        printf("Digite a mensagem a ser criptografada:\n");
                        fgets(mensagem[index].mensagemVulneravel, sizeof(mensagem[index].mensagemVulneravel), stdin);

                        strcpy(mensagem[index].mensagemCripto, mensagem[index].mensagemVulneravel);

                        for (int i = 0; i < strlen(mensagem[index].mensagemCripto); i++) {
                            if (mensagem[index].mensagemCripto[i] >= 'A' && mensagem[index].mensagemCripto[i] <= 'Z') {
                                if (mensagem[index].mensagemCripto[i] > 'U') {
                                    mensagem[index].mensagemCripto[i] += -21;
                                }else{
                                    mensagem[index].mensagemCripto[i] += 5;
                                }
                            }
                        }

                        printf("Digite o numero de identificacao do agente:\n");
                        fgets(mensagem[index].numIdentif, sizeof(mensagem[index].numIdentif), stdin);
                    }

                    mensagens++;

                    indexAux++;

                    break;

                case 2:

                    printf("****ENCONTRAR PADROES****\n");
                    printf("Digite o padrao a ser encontrado:\n");
                    fgets(padrao, sizeof(padrao), stdin);
                    fgets(padrao, sizeof(padrao), stdin);

                    padrao[strcspn(padrao, "\n")] = '\0';

                    for(index = 0; index < indexAux + 1; index++){

                        if((strstr(mensagem[index].mensagemVulneravel, padrao)) != NULL){
                            contadorPadrao++;
                        }
                    }

                    if(contadorPadrao > 0){
                        printf("****Padrao encontrado em %d mensagens!****\n", contadorPadrao);
                    }
                    else{
                        printf("****Padrao nao encontrado!****\n");
                    }

                    contadorPadrao = 0;

                    break;

                case 3:

                    printf("****DESCRIPTOGRAFAR MENSAGEM****\n");
                    printf("Digite a mensagem criptografada:\n");
                    fgets(mensagemCriptoAux, sizeof(mensagemCriptoAux), stdin);
                    fgets(mensagemCriptoAux, sizeof(mensagemCriptoAux), stdin);

                    for (int i = 0; mensagemCriptoAux[i] != '\0'; i++) {
                            if (mensagemCriptoAux[i] >= 'A' && mensagemCriptoAux[i] <= 'Z') {
                                if (mensagemCriptoAux[i] <= 'E') {
                                    mensagemCriptoAux[i] += 21;
                                }else if(mensagemCriptoAux[i] > 'E'){
                                    mensagemCriptoAux[i] -= 5;
                                }
                            }
                        }

                    for(index = 0; index < 1000; index++){

                        if((strcmp(mensagem[index].mensagemVulneravel, mensagemCriptoAux)) == 0){
                            printf("%s", mensagem[index].nomeAgente);
                            printf("%s", mensagem[index].departamento);
                            printf("%s", mensagem[index].mensagemVulneravel);
                            printf("%s", mensagem[index].numIdentif);

                            break;
                        }
                    }

                    if((strcmp(mensagem[index].mensagemVulneravel, mensagemCriptoAux)) != 0){
                        printf("****Mensagem nao encontrada!****\n");

                        break;
                    }

                    for(int i = 0; i < 40; i++){
                        mensagemCriptoAux[i] = '\0';
                    }

                    break;

                case 4:
                    printf("****VISUALIZAR TODAS AS MENSAGENS****\n");

                    if(mensagens > 0){

                        for(index = 0; index < indexAux + 1; index++){
                            printf("%s", mensagem[index].nomeAgente);
                            printf("%s", mensagem[index].departamento);
                            printf("%s", mensagem[index].mensagemCripto);
                            printf("%s", mensagem[index].numIdentif);
                        }
                    }
                    else{
                        printf("****Sistema Vazio!****\n");
                    }

                    break;

                case 0:
                    break;

                default:
                    printf("****Opcao Invalida, tentar novamente****\n");
            }
        }while(escolha != 0);

    return 0;
}*/
