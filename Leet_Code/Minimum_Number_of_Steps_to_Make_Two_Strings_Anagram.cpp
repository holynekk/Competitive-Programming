class Solution {
public:
    int minSteps(string s, string t) {
        int a[26] = {0}, b[26] = {0};
        int ans = 0;
        for(int i = 0; i < s.length(); i++){
            a[s[i]-'a']++;
            b[t[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if (!a[i] && !b[i]){
                continue;
            }else if (a[i] < b[i]) ans += b[i]-a[i];
        }
        return ans;
    }
};