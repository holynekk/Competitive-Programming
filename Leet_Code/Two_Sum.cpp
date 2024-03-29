class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;
        vector<int> ans;
        for(int i = 0; i < nums.size(); i++) {
            if (hash.find(nums[i]) != hash.end()) {
                ans.push_back(i);
                ans.push_back(hash[nums[i]]);
                break;
            } else {
                hash[target-nums[i]] = i;
            }
        } return ans;
    }
};