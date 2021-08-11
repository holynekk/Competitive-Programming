class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int> ans;
        int count_arr[101] = {0};
        for(int i = 0; i < size(nums); i++){
            count_arr[nums[i]]++;
        }
        for(int i = 1; i < 101; i++){
            count_arr[i] += count_arr[i-1];
        }
        for(int i = 0; i < size(nums); i++){
            if (nums[i] == 0){
                ans.push_back(0);
            }else{
                ans.push_back(count_arr[nums[i]-1]);
            }
        }
        return ans;
    }
};