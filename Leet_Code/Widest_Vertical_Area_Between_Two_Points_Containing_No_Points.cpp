class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> xpoints;
        int ans = 0;
        for(int i = 0; i < size(points); i++) {
            xpoints.push_back(points[i][0]);
        }
        sort(xpoints.begin(), xpoints.end());
        for(int i = 0; i < size(xpoints)-1; i++) {
            ans = max(ans, xpoints[i+1]-xpoints[i]);
        }
        return ans;
    }
};