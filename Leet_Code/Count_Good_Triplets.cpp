class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int ans = 0;
        for(int i = 0; i < size(arr)-2; i++){
            for(int k = i+1; k < size(arr)-1; k++){
                if (abs(arr[i] - arr[k]) > a) continue;
                for(int m = k+1; m < size(arr); m++){
                    if (abs(arr[k] - arr[m]) <= b && abs(arr[i] - arr[m]) <= c){
                        ans++;
                    }
                }
            }
        }return ans;
    }
};