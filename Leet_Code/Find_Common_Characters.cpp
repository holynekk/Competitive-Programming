class Solution {
public:
    vector<string> commonChars(vector<string>& A) {
        vector<int> chars(26, INT_MAX);
        vector<string> answer;
        for (auto s : A) {
            vector<int> cnt1(26, 0);
            for (auto c : s){
                ++cnt1[c - 'a'];
            }
            for (auto i = 0; i < 26; ++i){
                chars[i] = min(chars[i], cnt1[i]);
            }
        }
        for (auto i = 0; i < 26; ++i)
            for (auto j = 0; j < chars[i]; ++j){
                answer.push_back(string(1, i + 'a'));
            } 
        return answer;
    }
};