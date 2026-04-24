#include <stdio.h>
    int main(){
        int i = 1;

        do{
            printf("%d\n", i);
            i++;
        } while(i >= 5);



        return 0;
    }

    /*
    executa pelo menos uma vez o codigo
    indepente da condição ser verdadeira ou falsa.
    Se for verdadeira, vai executar várias vezes até a condição se tornar falsa.
    Se for falsa, vai executar uma vez e encerrar o bloco de códigos*/