class Solution {
public:
    int calc_power(int num) {
        int power = 0;
        while(num > 1) {
            num = num % 2 == 0 ? num /2 : 3*num + 1;
            power++;
        }return power;
    }
    
    int getKth(int lo, int hi, int k) {
        vector<pair<int, int>> temp;
        for(int i = lo; i <= hi; i++) {
            temp.push_back({calc_power(i), i});
        }
        sort(temp.begin(), temp.end());
        return temp[k-1].second;
    }
};