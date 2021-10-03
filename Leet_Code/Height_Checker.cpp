class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int ans = 0;
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        for(int i = 0; i < size(expected); i++) {
            if (heights[i] != expected[i]) ans++;
        }
        return ans;
    }
};