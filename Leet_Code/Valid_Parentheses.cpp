class Solution {
public:
    bool isValid(string s) {
        vector<char> ans;
        for(int i = 0; i < s.size(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                ans.push_back(s[i]);
            }
            else {
                if (!ans.size()) return false;
                char q = ans.back();
                ans.pop_back();
                if (s[i] == ')' && q != '(') return false;
                else if (s[i] == '}' && q != '{') return false;
                else if (s[i] == ']' && q != '[') return false;
            }
            
        } return !ans.size();
    }
};