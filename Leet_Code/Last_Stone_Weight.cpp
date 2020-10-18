class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        int temp;
        
        while(n > 1){
            sort(stones.begin(), stones.end());
            if (stones[n-1] == stones[n-2]){
                n -= 2;
                stones.pop_back();
                stones.pop_back();
            }else{
                temp = stones[n-1] - stones[n-2];
                stones.pop_back();
                stones.pop_back();
                stones.push_back(temp);
                n--;
            }
        }
        if (n == 0){
            return 0;
        }else{
            return stones[0];
        }
        
    }
};