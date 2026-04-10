#include <stdio.h>

   int main(){
    
       char codigo1[4], codigo2[4], cidade1[50], cidade2[50];
       int resposta, atributo;
       double populacao1, populacao2, pib1, pib2;
       double area1, area2, vencedor1, vencedor2;
       double percapta1, percapta2, areapta1, areapta2;

       //Aqui começa o cadastro da primeira carta
       printf("Digite o código da primeira cidade(Máx. 3 caracteres): \n");
       scanf("%s", codigo1);
       printf("Digite o nome para essa cidade: \n");
       scanf("%s", cidade1);
       printf("Digite a população de %s: \n", cidade1);
       scanf("%lf", &populacao1);
       printf("Digite a área de %s: \n", cidade1);
       scanf("%lf", &area1);
       printf("Digite o PIB de %s: \n", cidade1);
       scanf("%lf", &pib1);
       //Aqui começa o cadastro da segunda carta
       printf("Digite o código da segunda cidade(Máx. 3 caracteres): \n");
       scanf("%s", codigo2);
       printf("Digite o nome para essa cidade: \n");
       scanf("%s", cidade2);
       printf("Digite a população de %s: \n", cidade2);
       scanf("%lf", &populacao2);
       printf("Digite a área de %s: \n", cidade2);
       scanf("%lf", &area2);
       printf("Digite o PIB de %s: \n", cidade2);
       scanf("%lf", &pib2);
       //Aqui quero determinar os melhores valores per capta de cada propriedade das cartas
       percapta1 = pib1 / populacao1;
       percapta2 = pib2 / populacao2;
       areapta1 = area1 / populacao1;
       areapta2 = area2 / populacao2;
       vencedor1 = (percapta1 + areapta1);
       vencedor2 = (percapta2 + areapta2);
       //Usuário escolhe se quer comparação completa ou por atributo
       printf("Você quer jogar escolhendo cada atributo por rodada, ou comparação completa?\n");
       printf("1 = Comparação por atributo / 0 = Comparação completa\n");
       scanf("%d", &resposta);
       //Comparação por atributo
       if(resposta == 1){
           printf("Esolha o atributo para jogar na rodada: 1 = POPULAÇÃO / 2 = ÁREA / 3 = PIB: \n");
           scanf("%d", &atributo);
       } else if(resposta != 1 && resposta !=0){
        printf("Opção inválida. Recomece o jogo.\n");
       } 
       else {
           printf("Vamos para a comparação completa.\n");
       } 

       if(resposta == 1){
           if(atributo == 1){
               if(populacao1 > populacao2){
                   printf("%s(%s) tem maior população que %s(%s).\n", cidade1, codigo1, cidade2, codigo2);
               } else {
                   printf("%s(%s) tem maior população que %s(%s).\n", cidade2, codigo2, cidade1, codigo1);
               }
           }
           else if (atributo == 2){
               if(area1 > area2){
                   printf("%s(%s) tem uma área maior que %s(%s).\n", cidade1, codigo1, cidade2, codigo2);
               } else {
                   printf("%s(%s) tem uma área maior que %s(%s).\n", cidade2, codigo2, cidade1, codigo1);
               }
           }
           else if (atributo == 3){
               if(pib1 > pib2){
                   printf("%s(%s) tem um PIB maior que %s(%s).\n", cidade1, codigo1, cidade2, codigo2);
               } else {
                   printf("%s(%s) tem um PIB maior que %s(%s).\n", cidade2, codigo2, cidade1, codigo1);
               }
           }
           else {
            printf("Opção inválida. Volte o jogo do início.\n");
           }
       }

          if (resposta == 0){
       //Comparação completa das cartas
       if(populacao1 > populacao2){
           printf("%s(%s), tem mais habitantes que %s(%s). \n", cidade1, codigo1, cidade2, codigo2);
       } else {
           printf("%s(%s), tem mais habitantes que %s(%s). \n", cidade2, codigo2, cidade1, codigo1);
       }
       if(area1 > area2) {
           printf("%s(%s), é maior que %s(%s). \n", cidade1, codigo1, cidade2, codigo2);
       } else {
           printf("%s(%s), é maior que %s(%s). \n", cidade2, codigo2, cidade1, codigo1);
       }
       if(pib1 > pib2) {
           printf("%s(%s), tem o PIB maior que %s(%s). \n", cidade1, codigo1, cidade2, codigo2);
       } else {
           printf("%s(%s), tem o PIB maior que %s(%s). \n", cidade2, codigo2, cidade1, codigo1);
       }

           //vencedor geral de todos os atributos juntos
       if(vencedor1 > vencedor2){
           printf("A cidade vencedora é: %s.\n", cidade1);
           printf("%s, tem a melhor média de pontuação de: %.2f.\n", cidade1, vencedor1);
       } else {
           printf("A cidade vencedora é: %s.\n", cidade2);
           printf("%s, tem a melhor média de pontuação de: %.2f.\n", cidade2, vencedor2);
       }
   }
           //Corrigir os calculos e a impressão dos resultados
       return 0;
   }

   /*
Cidade 1: Manaus
Nome: Manaus
População: 2200000
Área: 11401.1
PIB: 103000000000
Cidade 2: Belém
Nome: Belém
População: 2150000
Área: 1059.5
PIB: 98000000000
*/