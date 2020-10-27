class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int ans = 0;
        unordered_set<char> jew(J.begin(), J.end());
        for(auto x: S){
            if (jew.count(x)) ans++;
        }return ans;
    }
};