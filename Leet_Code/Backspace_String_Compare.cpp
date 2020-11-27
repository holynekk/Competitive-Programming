class Solution {
public:
    void backspace(string str, string &nw){
        for(char& c: str){
            if(c == '#'){
                if(nw != ""){
                    nw.pop_back();
                }
            }else{
                nw.push_back(c);
            }
        }
    }
    bool backspaceCompare(string S, string T) {
        string a = "";
        string b = "";
        backspace(S, a);
        backspace(T, b);
        if (a == b){
            return true;
        }else return false;
    }
};