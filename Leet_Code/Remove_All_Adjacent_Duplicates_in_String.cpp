class Solution {
public:
    string removeDuplicates(string S) {
        string nw = "";
        for(char & x: S){
            if(nw.size() && nw.back() == x){
                nw.pop_back();
            }else{
                nw.push_back(x);
            }
        }return nw;
    }
};