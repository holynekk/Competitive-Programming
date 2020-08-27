#include <iostream>

using namespace std;

int main(void){

    int n;
    cin >> n;
    for (int k = 0; k < n; k++){
        int p, closed = 0, open = 0, move = 0;
        string str;
        cin >> p >> str;
        for (char letter: str){
            if (letter == '('){
                open++;
            }else{
                if (open){
                    open--;
                }else move++;
            }
        }cout << move << endl;
    }


    return 0;
}