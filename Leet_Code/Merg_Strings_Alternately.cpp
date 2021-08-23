class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int ptr = 0, len = min(word1.length(), word2.length());
        while(ptr < len){
            ans += string() + word1[ptr] + word2[ptr++];
        }ans += ptr < word2.length() ? word2.substr(ptr) : word1.substr(ptr);
        return ans;
    }
};