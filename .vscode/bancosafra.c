#include <stdio.h>
    int main(){
        int opcao, faturapay, oppagar;
        float saldo = 3500, vsaque, fatura=780.93;

        
        //Menu
        printf("Menu Banco Safra\n");
        printf("\n");
        printf("Escolha uma opção:\n");
        printf("\n");
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

            saldo = saldo - vsaque; // subtrai o valor sacado do saldo

            if(vsaque > saldo){ //Caso valor do saque seja maior que o saldo
                printf("Saldo insuficiente");// aparece a mensagem
            } else{// se o saldo estiver no limite vai para a proxima linha
            printf("Valor retirado com sucesso!\n");
            printf("Seu novo saldo é de: %.2f", saldo);
            }
            break;
            case 4:
            printf("A fatura do seu cartão de crédito é: R$ %.2f\n",fatura);
            printf("Deseja pagar agora?\n");
            printf("1=SIM / 2=NÃO\n");
            scanf("%d", &faturapay);
                if(faturapay == 1){
                    printf("Deseja pagar usando o saldo da conta corrente?\n");
                    printf("1=SIM / 2=NÃO\n");
                    scanf("%d", &oppagar);
                    if(oppagar == 1){
                        if(fatura > saldo){
                            printf("Seu saldo é insuficiente para pagar a fatura.\n");
                            printf("Seu saldo é de: R$ %.2f\n", saldo);
                            printf("Entre em contato com o setor financeiro para negociar.\n");
                        }
                        else if(oppagar == 1){
                        saldo = saldo - fatura;
                        printf("Fatura paga com sucesso!\n");
                        printf("Novo saldo: R$ %.2f\n", saldo);
                    }
                    } else {
                        printf("Desculpe. Outras modalidades indisponíveis no momento.\n");
                        printf("Outras opções de pagamento em desenvolvimento. Desculpe.\n");
                    }
                } else {
                    printf("Tudo bem! Qualquer dúvida nosso time de atendimento está disponível 24 horas.\n");
                }
            break;
            default:
                printf("Opção inválida.\n");
        }

    return 0;
}