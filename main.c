#include <stdio.h>
#include "game.h"

int main()
{
    int select;
    int cont_flag = 0;
    while(cont_flag != 1){
        if(cont_flag == 2){
            cont_flag = game();
        }
        printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
        printf("=====================\n");
        printf("1) Начать игру\n");
        printf("2) Выйти из игры\n");
        printf("\n");
        printf("Выберите действие: ");
        scanf("%d%*c", &select);
        if(select == 1){
            cont_flag = game();
        } else {
            cont_flag = 1;
        }
    }
    return 0;
}
