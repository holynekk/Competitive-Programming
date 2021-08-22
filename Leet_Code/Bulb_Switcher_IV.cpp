class Solution {
public:
    int minFlips(string target) {
        int current = 0, ans = 0;
        for(auto x: target){
            if (x - 48 != current){
                current = x - 48;
                ans++;
            }
        }return ans;
    }
};