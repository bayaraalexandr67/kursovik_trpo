#include <stdio.h>
#include <stdlib.h>
#include "game.h"
#include "timemode.h"

void fp_read_record(double *min_time, float *max_words)
{
    double mt_default = -1;
    float mw_default = -1;
    FILE *fp;
    fp = fopen("records.cfg", "r");
    if(fp == NULL){
        fp = fopen("records.cfg", "w");
        fprintf(fp, "%f %f", mt_default, mw_default);
        *min_time = mt_default;
        *max_words = mw_default;
    } else {
        fscanf(fp, "%lf%f", min_time, max_words);
    }
    fclose(fp);
}

void fp_write_record(double min_time, float max_words)
{
    FILE *fp;
    fp = fopen("records.cfg", "w");
    fprintf(fp, "%f %f", min_time, max_words);
    fclose(fp);
}

int mode_select(){
    int select;
    int cont_flag = 0;
    int fp_rewrite_flag = 0;
    double min_time, curr_min_time;
    float max_words, curr_max_words;
    int flag = 0;
    fp_read_record(&min_time, &max_words);
    curr_min_time = min_time;
    curr_max_words = max_words;
    system("clear");
    printf("ВЫБЕРИТЕ РЕЖИМ ИГРЫ:\n");
    printf("====================\n");
    printf("1) 10 СЛОВ\n");
    printf("    Даётся 10 слов. Необходимо продублировать их за наименьшее время\n");
    if(min_time < 0){
        printf("        Вы ещё не играли в этом режиме.\n");
    } else {
        printf("        Ваш рекорд: %g сек.\n", min_time);
    }
    printf("2) НА ВРЕМЯ\n");
    printf("    Даётся 30 секунд. Требуется продублировать как можно больше слов\n");
    if(max_words < 0){
        printf("        Вы ещё не играли в этом режиме.\n");
    } else {
        printf("        Ваш рекорд: %g слов.\n", max_words);
    }
    printf("\n");
    printf("3) Вернуться в меню\n");
    printf("\n");
    printf("Выберите вариант: ");
    scanf("%d%*c", &select);
//РЕЖИМ 1  
    if(select == 1){
        while(cont_flag == 0){
            flag = game(&curr_min_time);
            if(min_time < 0 || curr_min_time < min_time){
                min_time = curr_min_time;
                fp_rewrite_flag = 1;
            }
            if(flag == 0 || flag == 2){
                if(fp_rewrite_flag == 1){
                    fp_write_record(min_time, max_words);
                }
                return flag;
            }
        }
    }
// РЕЖИМ 2
    if(select == 2){
        while(cont_flag == 0){
            flag = mode_time(&curr_max_words);
            if(max_words < 0 || curr_max_words > max_words){
                max_words = curr_max_words;
                fp_rewrite_flag = 1;
            }
            if(flag == 0 || flag == 2){
                if(fp_rewrite_flag == 1){
                    fp_write_record(min_time, max_words);
                }
                return flag;
            }
        }
    }
    if(select != 1 && select != 2){
        return 0;
    }
}
