class Solution {
public:
    string makeGood(string s) {
        string nw = "";
        for(char& x :s){
            if(nw.length() && (nw.back()-32 == x || nw.back()+32 == x)){
                nw.pop_back();
            }else{
                nw.push_back(x);
            }
        }return nw;
    }
};