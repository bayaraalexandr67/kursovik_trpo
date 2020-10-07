int strln(char *string)
{
    int len = 0;
    while(string[len] != '\0' && string[len] != '\n'){
        len += 1;
    }
    return len;
}

int checkln(char *first_string, char *second_string)
{
    int first_len = strln(first_string);
    int second_len = strln(second_string);
    return (first_len - second_len);
}

int check(char *correct_word, char *entered_word)
{
    int test;
    int i = 0;
    int flag = 0;
    int uncorrect_symbs = 0;
    test = checkln(correct_word, entered_word);
    if(test != 0){
        if(test < 0){
            test = (test * (-1));
        }
        return test;
    } else {
        while(correct_word[i] != '\0' && entered_word[i] != '\0'){
            if(entered_word[i] != correct_word[i]){
                uncorrect_symbs += 1;
            }
            i += 1;
        }
    }
    return uncorrect_symbs;
}
