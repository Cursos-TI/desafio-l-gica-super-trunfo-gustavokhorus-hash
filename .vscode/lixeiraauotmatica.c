#include <unistd.h>
#include <stdio.h>

    int main(){
        int sensor, cond = 1;

        sensor = cond ? 1 : 0;

        if(sensor == 1){
            printf("Lixeira abre\n");
            sleep(6);
            printf("Lixeira fecha\n");
        }

        return 0;
    }