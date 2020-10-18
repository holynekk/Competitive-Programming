class Solution {
public:
    string toLowerCase(string str) {
        for (char& x : str){
            if (x >=65 && x <= 90) x += 32;
        }return str;
    }
};