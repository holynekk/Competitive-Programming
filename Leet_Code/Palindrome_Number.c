#include<stdio.h>

bool isPalindrome(long x){
    long num = x;
    long reversed = 0;
    if (x % 10 == 0){
        return x == reversed;
    }else{
        while (num > 0){
            reversed += num % 10;
            reversed *= 10;
            num /= 10;
        }reversed /= 10;
    }return x == reversed;
}
