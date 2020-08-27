#include <iostream>

using namespace std;

int main (void){
    int n, x, total = 0;
    cin >> n >> x;
    for (int i = 1; i < n+1; i++){
        if (x / i <= n && x % i == 0){
            total++;
        }
    }cout << total;
    return 0;
}