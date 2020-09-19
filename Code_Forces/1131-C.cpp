#include <bits/stdc++.h>

using namespace std;

int main(void){
    int n;
    cin >> n;
    vector<int> circle(n);
    for (int i = 0; i < n; i++){
        cin >> circle[i];
    }sort(circle.begin(), circle.end());
    
    for (int i = 0; i < n; i+=2){
        cout << circle[i] << ' ';
    }for (int i = n % 2 == 1 ? n - 2 : n - 1; i > 0; i-=2){
        cout << circle[i] << ' ';
    }
}