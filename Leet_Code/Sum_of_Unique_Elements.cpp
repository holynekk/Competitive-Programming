class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        int count[101] = {}, ans = 0;
        for(auto x: nums){
            count[x]++;
        }for(int i = 0; i < 101; i++){
            if(count[i] == 1){
                ans += i;
            }
        }
        return ans;
    }
};