

bool detectCapitalUse(char * word){
    int i, n = strlen(word), caps = 0;
    for (i = 0; i < n; i++){
        if (word[i] >= 65 && word[i] <= 90){
            caps++;
        }
    }if (caps == n || caps == 0){
        return 1;
    }return caps == 1 && word[0] <= 90;
}
