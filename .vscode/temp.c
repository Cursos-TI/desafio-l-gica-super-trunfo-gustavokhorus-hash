#include <stdio.h>
#include <stdlib.h>
#include <time.h>

    int main(){
        int temp, verifica;

        srand(time(0));
        temp = rand() % 40 + 1;

        verifica = temp > 30 ? 1 : 0;

        if(verifica == 1){
            printf("Temp está elevado\n");
            printf("Temp está em %dp\n", temp);
        } else {
            printf("Temp está abaixo\n");
            printf("Temp está %dp\n", temp);
        }

        return 0;
    }