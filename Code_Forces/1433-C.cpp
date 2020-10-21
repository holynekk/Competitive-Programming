#include <bits/stdc++.h>


using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        int maxx = 0;
        for(auto & x : a){
            cin >> x;
            maxx = max(x, maxx);
        }
        int idx = -1;

        for(int i = 0; i < n; ++i){
            if (a[i] != maxx){
                continue;
            }if (i > 0 && a[i-1] != maxx){
                idx = i + 1;
            }if (i < n - 1 && a[i+1] != maxx){
                idx = i + 1;
            }
        }

        cout << idx << endl;
    }

    return 0;
}