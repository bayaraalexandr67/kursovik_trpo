int check(char *correct_word, char *entered_word)
{
    int i = 0;
    int uncorrect_symbs = 0;
    while(correct_word[i] != '\0' && entered_word[i] != '\0'){
        if(entered_word[i] != correct_word[i]){
            uncorrect_symbs += 1;
        }
        i += 1;
    }
    return uncorrect_symbs;
}
