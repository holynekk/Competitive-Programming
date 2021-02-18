class Solution {
public:
    bool isPalindrome(string s) {
        int len = size(s) - 1;
        cout << len << endl;
        int k = 0;
        while(k < len){
            if(!isalnum(s[k])){
                k++;
                continue;
            }if(!isalnum(s[len])){
                len--;
                continue;
            }
            if(toupper(s[len--]) != toupper(s[k++])){
                return false;
            }
        }return true;
    }
};