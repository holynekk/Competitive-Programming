class Solution {
public:
    void reverse(char * first, char * last) {
        while (first < last) {
            swap(*first, *last);
            first++, last--;
        }
    }
    
    string reverseWords(string s) {
        int front = 0;
        for(unsigned int i = 0; i <= s.size(); i++) {
            if (s[i] == ' ' || i == s.size()) {
                reverse(&s[front], &s[i-1]);
                front = i+1;
            }
        } return s;
    }
};