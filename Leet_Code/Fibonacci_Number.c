/*Iterative Approach*/

int fib(int N){
    int prev = 0, result = 1, temp;
    if (N <= 1){
        return N;
    }while (N >= 2){
        temp = prev;
        prev = result;
        result += temp;
        N--;
    }return result;
}


