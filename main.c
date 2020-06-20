#include <stdio.h>
#include "game.h"
#include "timemode.h"

int main()
{
    int select;
    int cont_flag = 0;
    while(cont_flag != 1){
        if(cont_flag == 2){
            cont_flag = game();
        }
        if(cont_flag == 22){
            cont_flag = mode_time();
        }
        printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
        printf("=====================\n");
        printf("1) Начать игру\n");
        printf("2) Выйти из игры\n");
        printf("3) На время\n");
        printf("\n");
        printf("Выберите действие: ");
        scanf("%d%*c", &select);
        if(select == 1){
            cont_flag = game();
        } else if (select == 3) {
            cont_flag = mode_time();
        } else {
            cont_flag = 1;
        }
    }
    return 0;
}
