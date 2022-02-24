class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        std::unordered_map<int, int> hash;
        vector<int> ans;
        for(int i = 0; i < size(nums1); i++) {
            hash[nums1[i]]++;
        }
        for(int i = 0; i < size(nums2); i++) {
            if (hash[nums2[i]]) {
                ans.push_back(nums2[i]);
                hash[nums2[i]]--;
            }
        }
        return ans;
    }
};