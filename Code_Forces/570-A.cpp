#include <iostream>

using namespace std;

int main(void){
    int n, bac = 0;
    cin >> n;
    while (n){
        if (n&1){
            bac++;
        }n >>=1;
    }cout << bac << endl;
    return 0;
}