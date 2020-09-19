#include <bits/stdc++.h>

using namespace std;

int main(void){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> list(n);
        for(int i = 0; i < n; i++){
            cin >> list[i];
        }sort(list.begin(), list.end());
        int gr = 0, cur = 0;
        for (int i = 0; i < n; i++){
            if (++cur == list[i]){
                gr++;
                cur = 0;
            }
        }
        cout << gr << endl;
    }
}