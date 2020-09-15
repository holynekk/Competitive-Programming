#include <bits/stdc++.h>

using namespace std;

int main (void){
    int t; 
    cin >> t;
    while (t--){
        int k;
        cin >> k;
        vector<int> a(k), ans;
        int cnt0 = 0;
        for (int p = 0; p < k; p++){
            cin >> a[p];
            if (!a[p]) cnt0++;
        }int cnt1 = k - cnt0;
        if (cnt0 >= k / 2){
            cout << cnt0 << endl;
            for (int p = 0; p < cnt0; p++) cout << 0 << ' ';
        }else{
            cout << cnt1 - cnt1 % 2 << endl;
            for (int p = 0; p < cnt1 - cnt1 % 2; p++){
                cout << 1 << ' ';
            }
        }cout << '\n';
    }

    return 0;
}