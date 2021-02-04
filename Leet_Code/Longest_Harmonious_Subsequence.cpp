class Solution {
public:
    int findLHS(vector<int>& nums) {
        unordered_map<int,int> hold;
        int ans = 0;
        for(auto x: nums){
            hold[x]++;
            if(hold.count(x+1))
                ans = max(ans, hold[x] + hold[x+1]);
            if(hold.count(x-1))
                ans = max(ans, hold[x] + hold[x-1]);
        }
        return ans;        
    }
};