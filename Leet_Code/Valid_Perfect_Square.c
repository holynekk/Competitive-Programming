

bool isPerfectSquare(int num){
    long total = 0, q = 1;
    while (total < num){
        total += q;
        q += 2;
    }if (total == num){
        return 1;
    }else{
        return 0;
    }
}

