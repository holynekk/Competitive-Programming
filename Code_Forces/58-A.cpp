#include <iostream>

using namespace std;

int main(void){
    string input;
    string hel = "hello";
    int i = 0;
    cin >> input;
    for (char letter : input){
        if (letter == hel[i]){
            i++;
        }else;
    }if (i == 5){
        cout << "YES" << endl;
    }else cout << "NO" << endl;

    return 0;
}