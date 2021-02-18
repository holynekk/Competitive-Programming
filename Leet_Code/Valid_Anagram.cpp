class Solution {
public:
    bool isAnagram(string s, string t) {
        if(size(s) != size(t)){
            return false;
        }
        int arr[26] = {0};
        for(int i = 0; i < size(s); i++){
            arr[s[i]-97]++;
            arr[t[i]-97]--;
        }for(int i = 0; i < 26; i++){
            if(arr[i]){
                return false;
            }
        }return true;
    }
};