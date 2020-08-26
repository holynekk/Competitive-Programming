#include <iostream>

using namespace std;

int main(void){
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;
    int total = a1 + a2 + a3;
    total = max(total, a1*(a2 + a3));
    total = max(total, (a1+a2) * a3);
    total = max(total, a1*a2 * a3);
    cout << total << endl;
    return 0;
}