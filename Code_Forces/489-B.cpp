#include <bits/stdc++.h>

using namespace std;

int main (void){
    int b, g, result = 0;
    cin >> b;
    vector<int> boys(b);
    for (int i = 0; i < b; i++){
        cin >> boys[i];
    }
    cin >> g;
    vector<int> girls(g);
    for (int i = 0; i < g; i++){
        cin >> girls[i];
    }
    sort(boys.begin(), boys.end());
    sort(girls.begin(), girls.end());
    for (int k = 0; k < b; k++){
        for (int i = 0; i < g; i++){
            if (abs(boys[k] - girls[i]) <= 1){
                result++;
                girls[i] = 1000;
                break;
            }
        }
    }cout << result << endl;
    return 0;
}