#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while (t--){
        int n, k;
        cin >> n >> k;
        vector<int> bar(n);
        for (int i = 0; i < n; i++){
            cin >> bar[i];
        }sort(bar.begin(), bar.end());
        reverse(bar.begin(), bar.end());
        long long ans = 0;
        for (int a = 0; a < k+1; a++){
            ans += bar[a];
        }cout << ans << endl;
    }

    return 0;
}