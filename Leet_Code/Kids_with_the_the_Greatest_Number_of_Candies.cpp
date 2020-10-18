class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size(), max = 0;
        for(int i = 0; i < n; i++){
            if (max < candies[i]) max = candies[i];
        }
        for (int i = 0; i < n; i++){
            if (extraCandies < max - candies[i]){
                ans.push_back(false);
            }else ans.push_back(true);
        }return ans;
    }
};