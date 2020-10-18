class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> scores;
        int n = 0;
        for (auto op : ops){
            if (op == "+"){
                scores.push_back(scores[n - 2] + scores[n - 1]);
                n++;
            }else if (op == "D"){
                scores.push_back(2 * scores[n - 1]);
                n++;
            }else if (op == "C"){
                scores.pop_back();
                n--;
            }else{
                scores.push_back(stoi(op));
                n++;
            }
        }int ans = 0;
        for (int i = 0; i < n; i++){
            ans += scores[i];
        }return ans;
    }
};
                                 
