#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, s;
    cin >> n >> s;
    int ans = 0;
    while (n){
        ans += s/n;
        s %= n--;
    }cout << ans;
    
}