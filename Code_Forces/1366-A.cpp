#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--){
        int a, b;
        cin >> a >> b;
        if (a < b && a < (a+b)/3){
            cout << a << endl;
        }else if(b < a && b < (a+b)/3){
            cout << b << endl;
        }else cout << (a+b)/3 << endl;
    }
}