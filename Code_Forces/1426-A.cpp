#include<bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        n -= 2;
        if (n <= 0){
            cout << 1 << endl;
        }else if (n % x == 0){
            cout << 1 + n/x << endl;
        }else{
            cout << 2 + n/x << endl;
        }
    }
    return 0;
}