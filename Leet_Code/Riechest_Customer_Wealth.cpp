class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max = 0;
        for(int i = 0; i < accounts.size(); i++){
            int sum = 0;
            for(int k = 0; k < accounts[i].size(); k++){
                sum += accounts[i][k];
            }max = (max > sum) ? max : sum;
        }return max;
    }
};