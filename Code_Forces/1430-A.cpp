#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        int k;
        cin >> k;
        if (k == 1 || k == 2 || k == 4){
            cout << -1<< endl;
        }else{
            if (k % 3 == 0){
                cout << k/3 << ' ' << 0 << ' ' << 0 << endl;
            }else if (k % 3 == 1){
                cout << (k-7)/3 << ' ' << 0 << ' ' << 1 << endl;
            }else{
                cout << (k-5)/3 << ' ' << 1 << ' ' << 0 << endl;
            }
        }
    }

    return 0;
}