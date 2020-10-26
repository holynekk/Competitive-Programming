class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if (start == destination){
            return 0;
        }
        if (start > destination){
            int temp = start;
            start = destination;
            destination = temp;
        }
        int total = 0;
        int ans = 0;
        for(int i = 0; i < distance.size(); i++){
            total += distance[i];
        }
        for(int i = start; i < destination; i++){
            ans += distance[i];
        }ans = ans < total - ans ? ans : total - ans;
        
        return ans;
    }
};