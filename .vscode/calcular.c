#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int numeroSecreto, opcao, palpite;

            printf("Menu principal\n");
            printf("1. Iniciar jogo\n");
            printf("2. Ver Regras do jogo\n");
            printf("3. Sair\n");
            printf("Escolha uma opção: \n");
            scanf("%d", &opcao);
            
            switch(opcao){
                case 1:
                srand(time(0));
                numeroSecreto = rand() % 600;
                printf("Esolha um número da sorte:\n");
                scanf("%d", &palpite);

                if(palpite == numeroSecreto){
                    printf("Você acertou.\n");
                } else {
                    printf("Você errou.\n");
                    printf("O número da sorte é: %d\n", numeroSecreto);
                }
                break;

                case 2:
                printf("A regra do jogo é você escolher um número de 0 a 9\n");
                printf("e tentar acertar o número que o computador gerou.\n");
                break;

                default:
                printf("Opção inválida\n");
            }


        return 0;
    }