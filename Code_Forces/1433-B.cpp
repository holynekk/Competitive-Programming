    #include <bits/stdc++.h>
     
     
    using namespace std;
     
    int main(void){
        int t;
        cin >> t;
        while(t--){
            int n;
            cin >> n;
            vector<int> book(n);
            for (int i = 0; i < n; i++){
                cin >> book[i];
            }int count = 1;
            int left = 0;
            int right = 0;
            for (int i = 0; i < n; i++){
                if (book[i]){
                    count++;
                }
            }
            if (count == 1){
                cout << 0 << endl;
                continue;
            }
            for (int i = 0; i < n; i++){
                if (book[i]){
                    left = i;
                    break;
                }
            }for (int i = n-1; i > 0; i--){
                if (book[i]){
                    right = i;
                    break;
                }
            }
            cout << right - left - 1 - (count - 2)  + 1<< endl;
     
            
     
            
        }
     
        return 0;
    }