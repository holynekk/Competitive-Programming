#include <stdio.h>

int main(){

    int i, k;
    long long y;
    scanf("%ld",&i);
    for (k = 0; k < i; k++){
        scanf("%lld",&y);
        long long total = 0;
        total = y*(y+1)/2;
        long q = 1;
        while(q <= y ){
            total -= 2*q;
            q *= 2;

        }printf("%lld\n",total);

    }
	return 0;
}
