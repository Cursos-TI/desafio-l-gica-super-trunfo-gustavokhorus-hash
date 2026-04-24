#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){

        int opcao, num1, num2, resultado, resposta;

        printf("Esolha uma operação matemática:\n");
        printf("1. Multiplicação\n");
        printf("2. Subtração\n");
        printf("3. Adição\n");
        scanf("%d", &opcao);

        srand(time(0));
        num1 = rand() % 10+1;
        num2 = rand() % 10+1;

        switch(opcao){
            case 1: //multiplicação
            resposta = num1 * num2;
            printf("%d x %d:\n", num1, num2);
            scanf("%d", &resultado);
            if(resultado == resposta){
                printf("Você acertou.\n");
            } else {
                printf("Resposta errada.\n");
                printf("Resposta = %d\n", resposta);
            }
            break;

            case 2: //subtração
            resposta = num1 - num2;
            printf("%d - %d:\n", num1, num2);
            scanf("%d", &resultado);
            if(resultado == resposta){
                printf("Você acertou\n");
            } else {
                printf("Resposta errada.\n");
                printf("Resposta = %d\n", resposta);
            }
            break;

            case 3: //adição
            resposta = num1 + num2;
            printf("%d + %d:\n", num1, num2);
            scanf("%d", &resultado);
            if(resultado == resposta){
                printf("Você acertou\n");
            } else {
                printf("Resposta errada.\n");
                printf("Resposta = %d\n", resposta);
            }
            defalut:
            printf("Opção inválida.\n");
        }
        




        return 0;
    }