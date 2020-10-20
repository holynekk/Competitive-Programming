#include <bits/stdc++.h>
     
     
using namespace std;
     
int main(void){
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        int but = 0;
        but += 10*((n%10)-1);
        int i = 1;
        while (n){
            but += i++;
            n/=10;
        }
        cout << but << endl;
    }
     
    return 0;
}