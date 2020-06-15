#include <stdio.h>
#include "game.h"

int main()
{
    int select;
    printf("КЛАВИАТУРНЫЙ ТРЕНАЖЁР\n");
    printf("=====================\n");
    printf("1) Начать игру\n");
    printf("2) Выйти из игры\n");
    printf("\n");
    printf("Выберите действие: ");
    scanf("%d%*c", &select);
    if(select == 1){
        game();
    }
    return 0;
}
