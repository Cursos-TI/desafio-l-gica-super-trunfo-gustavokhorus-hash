#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int num, jogador1, cpu, resultado, continuar = 1;

        while(continuar == 1){

        srand(time(0));
        cpu = rand() % 11;
        
        printf("Faça sua escolha: \n");
        printf("\n");
        printf("1. Par\n");
        printf("2. Ímpar\n");
        scanf("%d", &jogador1);
        printf("\n");
        if(jogador1 !=1 && jogador1 !=2){
            printf("Opção inválida\n");
        } else {
        printf("Escolha um número ente 0 e 10\n");
        scanf("%d", &num);
        if(num > 10 || num < 0){
            printf("Número diferente do solicitado.\n");
        } else {

        resultado = cpu + num;

        switch(jogador1){
            case 1:
            if(resultado % 2 == 0){
                printf("Jogador: %d / CPU: %d\n", num, cpu);
                printf("A soma dos números é: %d\n", resultado);
                printf("Logo, %d é par\n", resultado);
                printf("### Você ganhou! ###\n");
            } else {
                printf("Jogador: %d / CPU: %d\n", num, cpu);
                printf("A soma dos números é: %d\n", resultado);
                printf("Logo, %d é ímpar\n", resultado);
                printf("### Você perdeu! ###\n");
            }
            break;
            case 2:
            if(!(resultado % 2 == 0)){
                printf("Jogador: %d / CPU: %d\n", num, cpu);
                printf("A soma dos números é: %d\n", resultado);
                printf("Logo, %d é ímpar\n", resultado);
                printf("### Você ganhou! ###\n");
            } else {
                printf("Jogador: %d / CPU: %d\n", num, cpu);
                printf("A soma dos números é: %d\n", resultado);
                printf("Logo, %d é par\n", resultado);
                printf("### Você perdeu! ###\n");
            }
            break;
            
           
            
        }
    }
        }
        printf("Deseja continuar? 1=SIM / 2=NÃO\n");
        scanf("%d", &continuar);
    }
        printf("Até mais!\n");
    return 0;
    }