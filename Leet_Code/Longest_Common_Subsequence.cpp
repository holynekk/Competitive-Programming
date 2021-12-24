class Solution {
public:
    
    int LCSBottomUp(string text1, string text2) {
        int m = size(text1), n = size(text2);
        vector<vector<int>> dp(m+1, vector<int>(n+1, 0));
        for(int i = m-1; i >= 0; i--) {
            for(int j = n-1; j >= 0; j--) {
                if (text1[i] == text2[j]) {
                    dp[i][j] = 1 + dp[i+1][j+1];
                }else {
                    dp[i][j] = max(dp[i][j+1], dp[i+1][j]);
                }
            }
        }
        return dp[0][0];
    }
    
    
    int longestCommonSubsequence(string text1, string text2) {
        return LCSBottomUp(text1, text2);
    }
};