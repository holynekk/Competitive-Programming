class Solution {
public:
    int maxCoins(vector<int>& piles) {
        int ans = 0;
        
        sort(piles.begin(), piles.end());
        
        for(int k = size(piles)/3; k < size(piles); k += 2){
            ans += piles[k];
        }  
        return ans;
    }
};