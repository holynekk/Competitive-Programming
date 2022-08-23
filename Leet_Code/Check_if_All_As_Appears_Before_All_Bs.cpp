class Solution {
public:
    bool checkString(string s) {
        int index = 0;
        bool flag = false;
        while(index < s.length()) {
            if (flag && s[index] == 'a') {
                return false;
            } else if (s[index] == 'b') flag = true;
            index++;
        }
        return true;
    }
};