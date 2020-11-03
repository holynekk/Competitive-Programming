class Solution {
public:
    int maxPower(string s) {
        int i = 0, maxx = 0;
        while(i < s.length()){
            int start = i;
            while(i < s.length() && s[i] == s[i+1]){
                i++;
            }maxx = maxx > i-start+1 ? maxx : i-start+1;
            i++;
        }return maxx;
    }
};