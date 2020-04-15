

int arrangeCoins(int n){
    int counter = 0, q = 1;
    while (n >= 0){
        n -= q;
        q++;
        if (n >= 0){
            counter++;
        }else;
    }return counter;
}


