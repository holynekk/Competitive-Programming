
int square_sum(int number){
    int square = 0;
    while (number){
        square += (number%10)*(number%10);
        number /= 10;
    }
    return square;
}

bool isHappy(int n){
    int slow = n, fast = n;
    while (1){
        slow = square_sum(slow);
        fast = square_sum(square_sum(fast));
        if (slow != fast){
            continue;
        }else{
            break;
        }
    }return (slow == 1);
    
    
}
