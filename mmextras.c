#include <stdio.h>
#include "game.h"
#include "timemode.h"

int mode_select(){
    int select;
    int cont_flag = 0;
    int flag = 0;
    printf("ВЫБЕРИТЕ РЕЖИМ ИГРЫ:\n");
    printf("====================\n");
    printf("1) 10 СЛОВ\n");
    printf("    Даётся 10 слов. Необходимо продублировать их за наименьшее время\n");
    printf("2) НА ВРЕМЯ\n");
    printf("    Даётся 30 секунд. Требуется продублировать как можно больше слов\n");
    printf("\n");
    printf("3) Вернуться в меню\n");
    printf("\n");
    printf("Выберите вариант: ");
    scanf("%d%*c", &select);
    if(select == 1){
        flag = game();
    } else if (select == 2){
        flag = mode_time();
    } else if (select == 3){
        return 1;
    }
    while(cont_flag == 0){
       if(flag == 2){
           flag = game();
       } else if(flag == 22){
           flag = mode_time();
       } else {
           cont_flag = 1;
       }
    }
    if(flag == 1){
        return 2;
    } else {
        return 0;
    }
}
