class Solution {
public:
    string removeOuterParentheses(string S) {
        string str = "";
        int count = 0;
        for (char x: S){
            if(x == '('){
                if(count++){
                    str += '(';
                }
            }else{
                if(--count){
                    str += ')';
                }
            }
        }return str;
    }
};