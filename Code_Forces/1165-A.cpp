#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, x ,y, result = 0;
    string str;
    cin >> n >> x >> y >> str;
    for (int i = n - x; i < n; ++i){
        if (i == n-y - 1) result += str[i] != '1';
        else result += str[i] != '0';
    }cout << result << endl;
    return 0;
}