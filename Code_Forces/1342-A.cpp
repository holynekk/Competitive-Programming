#include <iostream>

using namespace std;

int main (void){
    int n;
    cin >> n;
    for (int i = 0; i < n; i++){
        long long a, b, x, y;
        cin >> x >> y;
        cin >> a >> b;
        b = b <= a + a ? b : a + a;
        if (x >= y){
            cout << b * y + a * (x-y) << endl;
        }else{
            cout << b * x + a * (y-x) << endl;
        }
    }
    return 0;
}