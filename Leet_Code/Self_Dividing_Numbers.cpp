class Solution {
public:
    
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> ans;
        for(int i = left; i <= right; i++){
            int temp = i;
            bool flag = false;
            while(temp){
                int rem = temp % 10;
                if (!rem){
                    flag = true;
                    break;
                }else{
                    if (i % rem){
                        flag = true;
                        break;
                    }
                }temp /= 10;
            }
            if (!flag){
                ans.push_back(i);
            }
        }
        return ans;
    }
};