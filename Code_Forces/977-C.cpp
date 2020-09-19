#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n, k, result;
    cin >> n >> k;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++){
        cin >> numbers[i];
    }sort(numbers.begin(), numbers.end());
    if (k == 0){
        if (numbers[0]-1){
            cout << numbers[0] -1 << endl;
        }else cout << -1 << endl;
    }else{
        int cur = 0;
        while(k--){
            result = numbers[cur++];
        }if (cur < n){
            if (result != numbers[cur]){
                cout << result << endl;
            }else{
                cout << -1;
            }
        }else cout << result << endl;
    }
    
    
}