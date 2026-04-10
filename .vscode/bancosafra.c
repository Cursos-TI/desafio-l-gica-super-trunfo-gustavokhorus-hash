#include <stdio.h>
    int main(){
        int opcao, faturapay, oppagar;
        float saldo = 3500, vsaque, nsaldo, fatura=1325.80;

        
        //Menu
        printf("Escolha uma opção:\n");
        printf("1. Verificar saldo\n");
        printf("2. Fazer depósito\n");
        printf("3. Fazer saque\n");
        printf("4. Fatura cartão de crédito.\n");
        scanf("%d", &opcao);


        switch(opcao){
            case 1:
            printf("O seu saldo é: R$ %.2f\n", saldo);
            break;
            case 2:
            printf("Digite o banco que você deseja depositar: \n");
            printf("Digite a agência que você deseja depositar: \n");
            printf("Digite a conta que você deseja depositar: \n");
            break;
            case 3:
            printf("Digite o valor a sacar\n");
            scanf("%f", &vsaque);

            nsaldo = saldo - vsaque; // subtrai o valor sacado do saldo

            if(vsaque > saldo){ //Caso valor do saque seja maior que o saldo
                printf("Saldo insuficiente");// aparece a mensagem
            } else{// se o saldo estiver no limite vai para a proxima linha
            printf("Valor retirado com sucesso!\n");
            printf("Seu novo saldo é de: %.2f", nsaldo);
            }
            break;
            case 4:
            printf("A fatura do seu cartão de crédito é: R$ %.2f\n",fatura);
            printf("Deseja pagar agora? 1=SIM / 2=NÃO?\n");
            scanf("%d", &faturapay);
                if(faturapay == 1){
                    printf("Deseja pagar usando o saldo da conta corrente? 1=SIM / 2=NÃO\n");
                    scanf("%d", &oppagar);
                    if(oppagar == 1){
                        nsaldo = saldo - fatura;
                        printf("Fatura paga com sucesso!\n");
                        printf("Novo saldo: R$ %.2f", nsaldo);
                    } else {
                        printf("Desculpe. Outras modalidades indísponíveis no momento.\n");
                    }
                }
            break;
            default:
                printf("Opção inválida.\n");
        }

    return 0;
}