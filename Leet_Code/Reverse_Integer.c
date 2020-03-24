#include<stdio.h>

int reverse(int x){
    int reversed;
    while (x != 0){
        int last = x % 10;
        x /= 10;
        if (reversed >= (pow(2,31)-1)/10 || reversed <= (pow(-2,31))/10){
            return 0;
        }else{
            reversed = reversed*10 + last;
        }
    }return reversed;
}
