#include <stdio.h>
#include <stdlib.h>
#include "mmextras.h"

int main()
{
    int select, reserve;
    int exit_flag = 0;
//    rezerve = mode_select();
    while(exit_flag == 0){
        system("clear");
        printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
        printf("=====================\n");
        printf("1) Начать игру\n");
        printf("2) Выйти из игры\n");
        printf("\n");
        printf("Выберите действие: ");
        scanf("%d%*c", &select);
        if(select == 1){
            select = mode_select();
        }
        if(select == 2){
            exit_flag = 2;
        }
    }
    return 0;
}
