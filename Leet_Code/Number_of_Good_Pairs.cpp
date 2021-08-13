class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ans = 0;
        int count_arr[101] = {0};
        for(int i = 0; i < size(nums); i++){
            ans += count_arr[nums[i]]++;
        }
        return ans;
    }
};