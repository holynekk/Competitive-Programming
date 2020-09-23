#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    int k = 3;
    cout << n << ' ';
    while (n % 2 == 0){
        cout << n/2 << ' ';
        n /= 2;
    }while (n > 1){
        while (n % k == 0){
            cout << n/k << ' ';
            n = n/k;
        }k += 2;
    }
}