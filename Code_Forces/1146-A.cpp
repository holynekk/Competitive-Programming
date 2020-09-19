#include <bits/stdc++.h>

using namespace std;

int main(void){
    string str;
    cin >> str;
    int n =count(str.begin(), str.end(), 'a');
    if (n > str.size()/2){
        cout << str.size();
    }else { 
        cout << 2*n - 1;
    }
    
}