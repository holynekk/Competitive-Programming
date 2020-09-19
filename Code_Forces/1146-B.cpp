#include <bits/stdc++.h>

using namespace std;

int main(void){
    string str;
    cin >> str;
    int status = 1;
    int n = str.size() - count(str.begin(), str.end(), 'a');
    if (n == 0){
        cout << str;
        return 0;
    }else if (n % 2 == 1){
        cout << ":(" << endl;
        return 0;
    }
    int j = 0;
    for (int i = str.size() - n/2; i < str.size(); i++){
        while (str[j] == 'a'){
            j++;
        }if (str[i] == 'a'){
            status = 0;
            break;
        }else if (str[j++] != str[i]){
            status = 0;
            break;
        }
    }while (str[j] == 'a'){
        j++;
    }
    if (status){
        for (int i = 0; i < j; i++){
            cout << str[i];
        }
    }else cout << ":(";
}