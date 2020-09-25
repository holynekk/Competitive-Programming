#include<bits/stdc++.h>

using namespace std;

int main(void){
    int t; 
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> list(n);
        for (int i = 0; i < n; i++){
            cin >> list[i];
        }
        bool tr = true;
        for (int i = 1; i < n; i++){
            if (list[i-1] <= list[i]){
                tr = false;
                break;
            }
        }if (tr){
            cout << "NO" << endl;
        }else{
            cout << "YES" << endl;
        }
    }
    return 0;
}