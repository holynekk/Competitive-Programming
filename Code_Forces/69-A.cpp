#include <iostream>

using namespace std;

int main (void){
    int n, x = 0, y = 0, z = 0;
    cin >> n;
    for (int i; i < n; i++){
        int xi, yi , zi;
        cin >> xi >> yi >> zi;
        x += xi, y += yi, z += zi;
    }if (x == 0 && y == 0 && z == 0){
        cout << "YES" << endl;
    }else cout << "NO" << endl;
    return 0;
}