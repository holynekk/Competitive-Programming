

bool judgeCircle(char * moves){
    int x = 0, y = 0;
    for (int k = 0; k < strlen(moves); k++){
        if (moves[k] == 'L') x--;
        else if (moves[k] == 'R') x++;
        else if (moves[k] == 'U') y++;
        else y--;
    }if (x == 0 && y == 0){
        return 1;
    }else return 0;
}


