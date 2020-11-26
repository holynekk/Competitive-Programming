class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int i = 1;
        vector<string> li;
        for(int k = 0; k < target.size(); k++){
            while(i != target[k]){
                li.push_back("Push");
                li.push_back("Pop");
                i++;
            }li.push_back("Push");
            i++;
        }return li;
    }
};